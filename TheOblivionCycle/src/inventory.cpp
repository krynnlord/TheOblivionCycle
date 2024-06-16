#include "../headers/functions.h"

void trinket_checker(trinket temp_trinket)
{
    if (temp_trinket.have == 1)
    {
        cout << " ["; Color(14);
        if (hero_player.trinket == temp_trinket.id)
        {
            cout << "E"; Color(7); cout << "] " << temp_trinket.name << endl;
        }
        else
        {
            cout << " "; Color(7); cout << "] " << temp_trinket.name << endl;
        }
    }

}

void weapon_checker(weapon temp_weapon)
{
    if (temp_weapon.have == 1)
    {
        cout << " ["; Color(14);
        if (hero_weapon.id == temp_weapon.id)
        {
            cout << "E"; Color(7); cout << "] " << temp_weapon.name << endl;
        }
        else
        {
            cout << " "; Color(7); cout << "] " << temp_weapon.name << endl;
        }
    }

}

void armor_checker(armor temp_armor)
{
    if (temp_armor.have == 1)
    {
        cout << " ["; Color(14);
        if (hero_armor.id == temp_armor.id)
        {
            cout << "E"; Color(7); cout << "] " << temp_armor.name << endl;
        }
        else
        {
            cout << " "; Color(7); cout << "] " << temp_armor.name << endl;
        }
    }

}
void trinkets()
{
    int i = 0;
    while (i == 0)
    {

        print_trinkets();
        show_statbar();
        
        if (rabbit_foot.have == 1) { trinket_checker(rabbit_foot); }
        else { ; }
        if (dragon_talon.have == 1) { trinket_checker(dragon_talon); }
        else { ; }
        if (azure_neclace.have == 1) { trinket_checker(azure_neclace); }
        else { ; }
        if (witch_effegy.have == 1) { trinket_checker(witch_effegy); }
        else { ; }
        if (vial_blood.have == 1) { trinket_checker(vial_blood); }
        else { ; }
        if (frozen_tear.have == 1) { trinket_checker(frozen_tear); }
        else { ; }
        if (unholy_pentagram.have == 1) { trinket_checker(unholy_pentagram); }
        else { ; }
        if (bone_caltrops.have == 1) { trinket_checker(bone_caltrops); }
        else { ; }
        cout << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " Press [ESC] to return or [R] to change " << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

        string ansr;
        ansr = _getch();
        if (ansr == "r" or ansr == "R")
        {
            change_trinket();
        }
        if (ansr == "0" or ansr == "\033")
        {
            i = 1;
        }
    
    }
}

void weapons_display()
{
    int i = 0;
    while (i == 0)
    {

        print_weapons();
        show_statbar();
        
        if (hands.have == 1) { weapon_checker(hands); }
        else { ; }
        if (dagger.have == 1) { weapon_checker(dagger); }
        else { ; }
        if (club.have == 1) { weapon_checker(club); }
        else { ; }
        if (handaxe.have == 1) { weapon_checker(handaxe); }
        else { ; }
        if (mace.have == 1) { weapon_checker(mace); }
        else { ; }
        if (shortsword.have == 1) { weapon_checker(shortsword); }
        else { ; }
        if (lighthammer.have == 1) { weapon_checker(lighthammer); }
        else { ; }
        if (warhammer.have == 1) { weapon_checker(warhammer); }
        else { ; }
        if (longsword.have == 1) { weapon_checker(longsword); }
        else { ; }
        if (greatsword.have == 1) { weapon_checker(greatsword); }
        else { ; }
        if (maul.have == 1) { weapon_checker(maul); }
        else { ; }
        cout << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " Press [ESC] to return or [R] to change " << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

        string ansr;
        ansr = _getch();
        if (ansr == "r" or ansr == "R")
        {
            change_weapon();
        }
        if (ansr == "0" or ansr == "\033")
        {
            i = 1;
        }
    }
}

void armor_display()
{
    int i = 0;
    while (i == 0)
    {
    
        print_armor();
        show_statbar();
        
        if (tunic.have == 1) { armor_checker(tunic); } else { ; }
        if (cloth_armor.have == 1) { armor_checker(cloth_armor); } else { ; }
        if (leather_armor.have == 1) { armor_checker(leather_armor); } else { ; }
        if (chain_armor.have == 1) { armor_checker(chain_armor); } else { ; }
        if (scale_armor.have == 1) { armor_checker(scale_armor); } else { ; }
        if (splint_armor.have == 1) { armor_checker(splint_armor); } else { ; }
        if (plate_armor.have == 1) { armor_checker(plate_armor); } else { ; }
        cout << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << " Press [ESC] to return or [R] to change " << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

        string ansr;
        ansr = _getch();
        if (ansr == "r" or ansr == "R")
        {
            change_armor();
        }
        if (ansr == "0" or ansr == "\033")
        {
            i = 1;
        }

    }

}