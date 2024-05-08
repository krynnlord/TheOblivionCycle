#include "../headers/functions.h"

int castle(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Speak with King" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Back" << endl;

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
            return 1; 
        }
    
    else {return 0;}

    return 1;

}

void conversation_king()
{
    string ans = "";
    
    if (quest_level == 0)
    {
        printf("Welcome traveler, we are in need of help. Astoria is under attack from evil\n");
        printf("hordes. It must have something to do with the unusual portal that recently\n");
        printf("appeared at the circle of stones. Can you investigate this portal for us?\n");
        quest_level = 1;
        return;
    }
    if (quest_level == 1)
    {
        printf("Have you discovered why this portal has appeared?\n");
        return;
    }

    

}