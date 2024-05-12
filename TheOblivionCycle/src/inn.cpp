#include "../headers/functions.h"

int inn(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Change Weapon" << endl;
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Change Armor" << endl;
    cout << "("; Color(6); cout << "3"; Color(7); cout << ") Play 3Card (Gamble)" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "3")
    {
        gambling();
    }

    if (ans == "0")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}