#include "../headers/functions.h"

int circleofstones(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Embark on quest" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1")
        { 
            cout << "Embarking!" << endl; system("pause"); return 0;
        }

    if (ans == "0")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}