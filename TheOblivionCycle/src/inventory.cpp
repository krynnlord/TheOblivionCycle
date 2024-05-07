#include "../headers/functions.h"

void trinket_checker(trinket temp_trinket)
{
    if (temp_trinket.have == 1)
    {
        cout << " ["; Color(14);
        if (temp_trinket.equipped == 1)
        {
            cout << "E"; Color(7); cout << "] " << temp_trinket.name << endl;
        }
        else
        {
            cout << " "; Color(7); cout << "] " << temp_trinket.name << endl;
        }
    }

}

void trinkets()
{
   
    
        print_trinkets();
        cout << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        if (rabbit_foot.have == 1)
        { trinket_checker(rabbit_foot); }
        else { Color(8); cout << " [ ] UNKNOWN"; Color(7); cout << endl; }
        if (dragon_talon.have == 1)
        { trinket_checker(dragon_talon); }
        else { Color(8); cout << " [ ] UNKNOWN"; Color(7); cout << endl; }
        if (azure_neclace.have == 1)
        { trinket_checker(azure_neclace); }
        else { Color(8); cout << " [ ] UNKNOWN"; Color(7); cout << endl; }
        if (witch_effegy.have == 1)
        { trinket_checker(witch_effegy); }
        else { Color(8); cout << " [ ] UNKNOWN"; Color(7); cout << endl; }
        if (vail_blood.have == 1)
        { trinket_checker(vail_blood); }
        else { Color(8); cout << " [ ] UNKNOWN"; Color(7); cout << endl; }
        if (frozen_tear.have == 1)
        { trinket_checker(frozen_tear); }
        else { Color(8); cout << " [ ] UNKNOWN"; Color(7); cout << endl; }


        cout << endl;
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