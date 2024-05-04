#include "../headers/functions.h"

void inventory()
{
    int ab = 0;
    while (ab == 0)
    {
        print_inventory();
        cout << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " ["; Color(14); cout << right << setw(3) << setfill('0'); cout << potion.qty; Color(7); cout << setfill(' '); cout << "]POTION" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " [1]Weapons [2]Armor [3]Spells [4]Score [5]Exit" << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

        string ansr;
        ansr = _getch();


        if (ansr == "1")
        {
            weapons_display();
        }

        if (ansr == "2")
        {
            armor_display();
        }

        if (ansr == "3")
        {
            spellbook();
        }

        if (ansr == "4")
        {
            player_score();
        }

        if (ansr == "5")
        {
            ab = 1;
        }
    }
}

void weapons_display()
{
    print_weapons();
    cout << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " [E] HANDS             [ ] DAGGER" << endl;
    cout << " [ ] MACE              [X] SHORT SWORD" << endl;
    cout << " [ ] LIGHT HAMMER      [ ] LONG SWORD" << endl;
    cout << " [ ] WARHAMMER         [ ] GREAT SWORD" << endl;
    cout << " [ ] FLAIL             [ ] CLAYMORE" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " Press any key to return" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

    string ans;
    ans = _getch();

}

void armor_display()
{
    print_armor();
    cout << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " [E] TUNIC             [ ] SCALE ARMOR" << endl;
    cout << " [ ] ROBES             [ ] PLATE ARMOR" << endl;
    cout << " [ ] CLOTH ARMOR       [ ] MAGIC ARMOR" << endl;
    cout << " [ ] LEATHER ARMOR     [ ] MYTHRYL ARMOR" << endl;
    cout << " [ ] CHAIN ARMOR" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " Press any key to return" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

    string ans;
    ans = _getch();

}