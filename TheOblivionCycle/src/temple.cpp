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

    if (ans == "1")
    {
        fill_flask();
    }

    if (ans == "0")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}

void fill_flask()
{
    int a = 1;
    while (a == 1)
    {
        print_temple();
        show_statbar(hero_player.name, hero_player.level, hero_player.exp, hero_weapon.name, hero_armor.name);

        cout << "Filling the Celestial Flask demands a tithe of 100g.\n" << endl;
        cout << "You have: "; Color(14); cout << hero_player.gold; Color(7); cout << " gold.\n";
        cout << "Your Flask has "; Color(2); cout << hero_player.flask; Color(7); cout << " charges remaining." << endl;
        cout << "Do you want to fill the flask?" << endl << endl;
        cout << "(1) Yes" << endl;
        cout << "(2) No" << endl;
        string ans = "";
        ans = _getch();

        if (ans == "1")
        {
         
            if (hero_player.gold >=100 and hero_player.flask == 3)
            {
                cout << "\nYou aready have a full flask!\n\n";
                system("pause");
                a = 0;
                break;
            }
            if (hero_player.gold >= 100 and hero_player.flask < 3)
            {
                hero_player.gold -= 100;
                hero_player.flask = 3;
                cout << "\nMay the gods bless you!\n\n";
                system("pause");
                a = 0;
                break;
            }
            if(hero_player.gold < 100)
            {
                cout << "\nYou do not possess enough gold!\n\n";
                system("pause");
                a = 0;
            }
        }
        if (ans == "2")
        {
            a = 0;
        }
    }
}