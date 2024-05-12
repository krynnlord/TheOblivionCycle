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
        show_statbar();

        cout << "Filling the Celestial Flask demands a tithe. Will it be your wealth or your spirit?\n" << endl;
        cout << "Your Flask has "; Color(2); cout << hero_player.flask; Color(7); cout << " charges remaining." << endl;
        cout << "Do you want to fill the flask?" << endl << endl;
        cout << "(1) Pay Gold ["; Color(14); cout << "100"; Color(7); cout <<"]" << endl;
        cout << "(2) Offer Spirit ["; Color(9); cout << "25%"; Color(7); cout << "]" << endl;
        cout << "(0) No" << endl;
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
            if (hero_player.flask == 3)
            {
                cout << "\nYou aready have a full flask!\n\n";
                system("pause");
                a = 0;
                break;
            }

            if (hero_player.flask < 3)
            {
                hero_player.exp -= int(round(hero_player.exp * .25));
                if (hero_player.exp < min_exp)
                {
                    hero_player.exp = min_exp;
                }

                hero_player.flask = 3;
                cout << "\nMay the gods have pitty on your spirit!\n\n";
                system("pause");
                a = 0;
                break;
            }
        }


        if (ans == "0")
        {
            a = 0;
        }
    }
}