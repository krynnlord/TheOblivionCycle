#include "../headers/functions.h"

int temple(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Refill Flask" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Memorize Spells" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();


    if (ans == "0")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}