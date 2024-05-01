int blacksmith(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Buy Weapons" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Buy Armor" << endl;
    cout << "("; Color(6); cout << "3"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    
    if (ans == "3")
        { 
            return 1; 
        }
    
    else {return 0;}

    return 1;

}