int options(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Show Intro" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Information" << endl;
    cout << "("; Color(6); cout << "3"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    
    if (ans == "2")
        { 
        print_gameinfo();
        Color(6); cout  << "\n\nGame:"; Color(7); cout << " The Oblivion Cycle, Part I: The Shimmering Gate" << endl;
        Color(6); cout << "Version:"; Color(7); cout<< " .01" << endl;
        Color(6); cout << "Copyright:"; Color(7); cout << " RLM Productions"; cout << endl;
        Color(6); cout << "Author:" ; Color(7); cout << " Richard Miller"; cout << endl;
            string temp;
            temp = _getch();
        }

    if (ans == "3") { return 1; }

    else {return 0;}

    return 0;

}