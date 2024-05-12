#include "../headers/functions.h"

int castle(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Speak with King" << endl;
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