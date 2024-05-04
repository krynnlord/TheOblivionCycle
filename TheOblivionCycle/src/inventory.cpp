#include "../headers/functions.h"

void inventory()
{
   
    
        print_inventory();
        cout << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " ["; Color(14); cout << right << setw(3) << setfill('0'); cout << potion.qty; Color(7); cout << setfill(' '); cout << "]POTION" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " Press any key to return" << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

        string ansr;
        ansr = _getch();


        
  
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