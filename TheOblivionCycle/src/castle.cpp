#include "../headers/functions.h"

int castle(int i)
{


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
        print_king(); // Print King Graphic
        int bar2; for (bar2 = 0;bar2 < 5;bar2++) { cout << "-"; }; cout << " The King ";
        for (bar2 = 0;bar2 < 60;bar2++) { cout << "-"; } cout << endl;
        conversation_king(); // Conversation 
        for (bar2 = 0;bar2 < 75;bar2++) { cout << "-"; } cout << endl;
        ans2 = _getch();
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
        srand((unsigned)time(NULL));
        int speakroll = (rand() % 4);
        if (speakroll == 0) { printf("Have you discovered why this gate has appeared?\n"); }
        if (speakroll == 1) { printf("The gate that has appeared is strange, is it not?\n"); }
        if (speakroll == 2) { printf("I was under the impression you where helping. Was I wrong?\n"); }
        if (speakroll == 3) { printf("The sky has been dark lately! I am unsure what has caused it.\n"); }
        return;
    }

    

}

void vault()
{
    int i = 0;
    while (i == 0)
    {
        print_castle();
        show_statbar();

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
                cout << "\nYou withdraw " << temp_value << " gold!";
                Sleep(2000);
                hero_player.gold += temp_value;
                gold_vault -= temp_value;
            }

        }


    }
}