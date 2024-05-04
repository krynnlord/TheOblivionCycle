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
        print_king();
        cout << "Random Quest Text!";
        Sleep(4000);
    }

    if (ans == "2")
        { 
            return 1; 
        }
    
    else {return 0;}

    return 1;

}