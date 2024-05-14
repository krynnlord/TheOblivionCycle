#include "../headers/functions.h"

int inn(int i)
{
    int b = 0;
    while (b == 0)
    {

        print_inn();
        show_statbar();

        // Print Menu Options
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") Change Weapon" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") Change Armor" << endl;
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") Play 3Card (Gamble)" << endl;
        cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

        // Input Selection
        string ans = "";
        ShowConsoleCursor(false);
        ans = _getch();

        if (ans == "1") { change_weapon(); }
        if (ans == "2") { change_armor(); }
        if (ans == "3") { gambling(); }
        if (ans == "0" or ans == "\033") { return 1; }
        else { return 0; }

    }
    return 1;

}

void change_weapon()
{
    int i = 0;
    while (i == 0)
    {
        print_weapons();
        show_statbar();
        
        if (hands.have == 1)
        {
            cout << "[1] "; cout << left << setw(15) << hands.name;
            cout << "Damage: " << hands.damage;
            if (hero_weapon.id == hands.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }   
        if (dagger.have == 1)
        {
            cout << "[2] "; cout << left << setw(15) << dagger.name;
            cout << "Damage: " << dagger.damage;
            if (hero_weapon.id == dagger.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (mace.have == 1)
        {
            cout << "[3] "; cout << left << setw(15) << mace.name;
            cout << "Damage: " << mace.damage;
            if (hero_weapon.id == mace.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (shortsword.have == 1)
        {
            cout << "[4] "; cout << left << setw(15) << shortsword.name;
            cout << "Damage: " << shortsword.damage;
            if (hero_weapon.id == shortsword.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (lighthammer.have == 1)
        {
            cout << "[5] "; cout << left << setw(15) << lighthammer.name;
            cout << "Damage: " << lighthammer.damage;
            if (hero_weapon.id == lighthammer.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (warhammer.have == 1)
        {
            cout << "[6] "; cout << left << setw(15) << warhammer.name;
            cout << "Damage: " << warhammer.damage;
            if (hero_weapon.id == warhammer.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (longsword.have == 1)
        {
            cout << "[7] "; cout << left << setw(15) << longsword.name;
            cout << "Damage: " << longsword.damage;
            if (hero_weapon.id == longsword.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (greatsword.have == 1)
        {
            cout << "[8] "; cout << left << setw(15) << greatsword.name;
            cout << "Damage: " << greatsword.damage;
            if (hero_weapon.id == greatsword.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (maul.have == 1)
        {
            cout << "[9] "; cout << left << setw(15) << maul.name;
            cout << "Damage: " << maul.damage;
            if (hero_weapon.id == maul.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }


        cout << endl;
        cout << "--- Equip Weapon ~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Choose weapon to equip, or press 0 to go exit." << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;
        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0") { i = 1; }
        if (ansr == "1") { weapon_equipper(hands); }
        if (ansr == "2") { weapon_equipper(dagger); }
        if (ansr == "3") { weapon_equipper(mace); }
        if (ansr == "4") { weapon_equipper(shortsword); }
        if (ansr == "5") { weapon_equipper(lighthammer); }
        if (ansr == "6") { weapon_equipper(warhammer); }
        if (ansr == "7") { weapon_equipper(longsword); }
        if (ansr == "8") { weapon_equipper(greatsword); }
        if (ansr == "9") { weapon_equipper(maul); }
       
    }
}

void weapon_equipper(weapon weapon)
{
    if (hero_weapon.id == weapon.id)
    {
        cout << "You already have this weapon equipped!" << endl;
        Sleep(2000);
    }
    if (hero_weapon.id != weapon.id and weapon.have == 1)
    {
        hero_weapon = weapon;
        cout << "You equip your " << weapon.name << "!" << endl;
        Sleep(2000);
    }
    if (hero_weapon.id != weapon.id and weapon.have == 0)
    {
        ;
    }
}

void change_armor()
{
    int i = 0;
    while (i == 0)
    {
        print_armor();
        show_statbar();

        if (tunic.have == 1)
        {
            cout << "[1] "; cout  << left << setw(15) << tunic.name;
            cout << "AC: " << tunic.armorclass;
            if (hero_armor.id == tunic.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (cloth_armor.have == 1)
        {
            cout << "[2] "; cout << left << setw(15) << cloth_armor.name;
            cout << "AC: " << cloth_armor.armorclass;
            if (hero_armor.id == cloth_armor.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (leather_armor.have == 1)
        {
            cout << "[3] "; cout << left << setw(15) << leather_armor.name;
            cout << "AC: " << leather_armor.armorclass;
            if (hero_armor.id == leather_armor.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (chain_armor.have == 1)
        {
            cout << "[4] "; cout << left << setw(15) << chain_armor.name;
            cout << "AC: " << chain_armor.armorclass;
            if (hero_armor.id == chain_armor.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (scale_armor.have == 1)
        {
            cout << "[5] "; cout << left << setw(15) << scale_armor.name;
            cout << "AC: " << scale_armor.armorclass;
            if (hero_armor.id == scale_armor.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (splint_armor.have == 1)
        {
            cout << "[6] "; cout << left << setw(15) << splint_armor.name;
            cout << "AC: " << splint_armor.armorclass;
            if (hero_armor.id == splint_armor.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (plate_armor.have == 1)
        {
            cout << "[7] "; cout << left << setw(15) << plate_armor.name;
            cout << "AC: " << plate_armor.armorclass;
            if (hero_armor.id == plate_armor.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }


        cout << endl;
        cout << "--- Equip Armor ~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Choose armor to equip, or press 0 to go exit." << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;
        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0") { i = 1; }
        if (ansr == "1") { armor_equipper(tunic); }
        if (ansr == "2") { armor_equipper(cloth_armor); }
        if (ansr == "3") { armor_equipper(leather_armor); }
        if (ansr == "4") { armor_equipper(chain_armor); }
        if (ansr == "5") { armor_equipper(scale_armor); }
        if (ansr == "6") { armor_equipper(splint_armor); }
        if (ansr == "7") { armor_equipper(plate_armor); }
    }
}

void armor_equipper(armor armor)
{
    if (hero_weapon.id == armor.id)
    {
        cout << "You already have this armor equipped!" << endl;
        Sleep(2000);
    }
    if (hero_weapon.id != armor.id and armor.have == 1)
    {
        hero_armor = armor;
        cout << "You equip your " << armor.name << "!" << endl;
        Sleep(2000);
    }
    if (hero_weapon.id != armor.id and armor.have == 0)
    {
        ;
    }
}