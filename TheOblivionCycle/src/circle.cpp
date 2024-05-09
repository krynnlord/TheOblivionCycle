#include "../headers/functions.h"

int circleofstones(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Enter Gate" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1")
        { 
            gates();
        }

    if (ans == "0")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}

void gates()
{
    
    int port = 1;
    while (port == 1)
    {

        print_portal();

        // Print Menu Options
        if (quest_level == 1)
        {
            cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << "LVL 1-5" << endl;
        }
        if (quest_level == 2)
        {
            cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << "LVL 1-5" << endl;
            cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE] "; Color(7); cout << "LVL 6-10" << endl;
        }
        cout << "\n("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

        // Input Selection
        string ans = "";
        ShowConsoleCursor(false);
        ans = _getch();

        if (ans == "0")
        {
            return;
        }

        if (ans == "1" and quest_level >= 1)
        {
            cout << "Entering the Red Gate!\n"; Sleep(2000);
        }


    }


}