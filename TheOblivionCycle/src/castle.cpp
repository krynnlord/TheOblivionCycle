#include "../headers/functions.h"

int castle(int i)
{

    if (i == 2) { king_ressurect(); return 1; }
    
    print_castle();
    show_statbar();

    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Speak with King" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Access Vault" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1")
    {
        string ans2 = "";
        if (hero_player.quest_level == 9 or hero_player.quest_level == 8)
        {
            print_no_king();
            for (int bar2 = 0;bar2 < 75;bar2++) { cout << "-"; } cout << endl;
            conversation_king();
            for (int bar2 = 0;bar2 < 75;bar2++) { cout << "-"; } cout << endl;
            ans2 = _getch();
        }
        else
        {
            print_king();
            int bar2; for (bar2 = 0;bar2 < 5;bar2++) { cout << "-"; }; cout << " The King ";
            for (bar2 = 0;bar2 < 60;bar2++) { cout << "-"; } cout << endl;
            conversation_king(); // Conversation 
            for (int bar2 = 0;bar2 < 75;bar2++) { cout << "-"; } cout << endl;
            ans2 = _getch();
        }
    }
    
    if (ans == "2")
    {
        vault();
    }
    if (ans == "0" or ans == "\033")
        { 
            return 1; 
        }
    else {return 0;}

    return 1;

}

void conversation_king()
{
    string ans = "";
    
    if (hero_player.quest_level == 0)
    {
        printf("Welcome traveler, we are in need of help. Astoria is under attack from evil\n");
        printf("hordes. It must have something to do with the unusual gate that recently\n");
        printf("appeared at the circle of stones. Can you investigate this gate for us?\n");
        hero_player.quest_level = 1;
        return;
    }
    if (hero_player.quest_level == 1)
    {
        uniform_int_distribution<int> rng_range(0, 3);
        random_device rd;
        mt19937 rng(rd());
        int speakroll = rng_range(rng);
        if (speakroll == 0) { printf("Have you discovered why this gate has appeared?\n"); }
        if (speakroll == 1) { printf("The gate that has appeared is strange, is it not?\n"); }
        if (speakroll == 2) { printf("I was under the impression you where helping. Was I wrong?\n"); }
        if (speakroll == 3) { printf("The sky has been dark lately! I am unsure what has caused it.\n"); }
        return;
    }
    if (hero_player.quest_level == 2)
    {
        printf("Thank you for sealing the gate. I am recieving reports that a new gate\n");
        printf("has opened in front of another stone, this time blue in color.\n");
        printf("Can you find out why this gate appeared suddenly after closing the red one?\n");
        hero_player.quest_level = 3;
        return;
    }
    if (hero_player.quest_level == 4)
    {
        printf("Thank you for sealing the blue gate. I am recieving reports that a new gate\n");
        printf("has opened in front of another stone, this time purple in color.\n");
        printf("Can you find out why this gate appeared suddenly after closing the blue one?\n");
        hero_player.quest_level = 5;
        return;
    }
    if (hero_player.quest_level == 6)
    {
        printf("Thank you for sealing the purple gate. I am recieving reports that a new gate\n");
        printf("has opened in front of another stone, this time yellow in color.\n");
        printf("Can you find out why this gate appeared suddenly after closing the purple one?\n");
        hero_player.quest_level = 7;
        return;
    }
    if (hero_player.quest_level == 3 or hero_player.quest_level == 5 or hero_player.quest_level == 7)
    {
        uniform_int_distribution<int> rng_range(0, 3);
        random_device rd;
        mt19937 rng(rd());
        int speakroll = rng_range(rng);
        if (speakroll == 0) { printf("I have comissioned you on an important mission. Please hurry!\n"); }
        if (speakroll == 1) { printf("I wonder why this new gate has arrived. Any ideas?\n"); }
        if (speakroll == 2) { printf("I was under the impression you where helping. Was I wrong?\n"); }
        if (speakroll == 3) { printf("The sense of dread is causing unrest withing the kingdom.\n"); }
        return;
    }
    if (hero_player.quest_level == 8)
    {
        printf("Help us! The king has disappeared. We fear he may have been taken to\n");
        printf("the circle of stones as a sacrifice. A new gate has once again appeared,\n");
        printf("however, this time it has no color other than a shimmering white glow.\n");
        hero_player.quest_level = 9;
        return;
    }
    if (hero_player.quest_level == 9)
    {
        printf("The King is not here! Please rescue him.\n");
        return;
    }
}

void vault()
{
    double tax_rate = .15;
    if (hero_player.trinket == 1) { tax_rate = .10; }
    
    
    int i = 0;
    while (i == 0)
    {
        print_castle();
        show_statbar();

        cout << "Tax to withdraw is: " << (tax_rate*100) << "%" << endl;
        cout << "Gold in Vault: "; Color(6); cout << gold_vault << endl << endl; Color(7);

        // Print Menu Options
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") Deposit Gold" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") Withdraw Gold" << endl;
        cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

        string ans = "";
        ShowConsoleCursor(false);
        ans = _getch();

        if (ans == "0" or ans == "\033") { i = 1; }

        if (ans == "1")
        {
            int temp_value = 0;
            cout << "\nHow much do you want to deposit?> ";
            ShowCursor(true);
            cin >> temp_value;
            ShowCursor(false);

            if (temp_value > hero_player.gold)
            {
                cout << "\nYou do not have that much gold!";
                Sleep(2000);

            }
            if (temp_value <= hero_player.gold)
            {
                cout << "\nYou deposit " << temp_value << " gold!";
                Sleep(2000);
                hero_player.gold -= temp_value;
                gold_vault += temp_value;
            }

        }

        if (ans == "2")
        {
            int temp_value = 0;
            cout << "\nHow much do you want to withdraw?> ";
            ShowCursor(true);
            cin >> temp_value;
            ShowCursor(false);

            if (temp_value > gold_vault)
            {
                cout << "\nYou do not have that much gold stored!";
                Sleep(2000);

            }
            if (temp_value <= gold_vault)
            {
                int temp_value2;
                temp_value2 = temp_value;
                temp_value2 -= static_cast<int>(temp_value * tax_rate);
                cout << "Tax Fee: " << temp_value - temp_value2 << " gold.";
                cout << "\nYou withdraw " << temp_value2 << " gold!";
                Sleep(3000);
                hero_player.gold += temp_value2;
                gold_vault -= temp_value;
            }

        }


    }
}

void king_ressurect()
{
    if (hero_player.quest_level == 8 or hero_player.quest_level == 9)
    {
        
        system("cls");
        int bar2; 
        for (bar2 = 0; bar2 < 75; bar2++) { cout << "-"; } cout << endl;
        cout << "A strange force has brought you back to life. You have lost all your gold," << endl;
        cout << "but your renewed spirit urges you to continue on!" << endl;
        for (bar2 = 0; bar2 < 75; bar2++) { cout << "-"; } cout << endl;

        recent_rez = 1;
        system("pause");

    }
    else
    {
        print_king();
        int bar2; for (bar2 = 0; bar2 < 5; bar2++) { cout << "-"; }; cout << " The King ";
        for (bar2 = 0; bar2 < 60; bar2++) { cout << "-"; } cout << endl;
        cout << "Welcome back " << hero_player.name << ". I have brought you back to life." << endl;
        cout << "Please be careful in the future, for I cannot return what has been lost!" << endl;
        for (bar2 = 0; bar2 < 75; bar2++) { cout << "-"; } cout << endl;

        recent_rez = 1;
        system("pause");
    }
}