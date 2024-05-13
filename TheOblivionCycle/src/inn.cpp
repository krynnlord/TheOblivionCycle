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
        print_inn();
        show_statbar();
        
        if (hands.have == 1)
        {
            cout << "[1] "; cout << left << setw(15) << hands.name;
            cout << "Damage: " << hands.damage << endl;
        }   
        if (dagger.have == 1)
        {
            cout << "[2] "; cout << left << setw(15) << dagger.name;
            cout << "Damage: " << dagger.damage << endl;
        }
        if (mace.have == 1)
        {
            cout << "[3] "; cout << left << setw(15) << mace.name;
            cout << "Damage: " << mace.damage << endl;
        }
        if (shortsword.have == 1)
        {
            cout << "[4] "; cout << left << setw(15) << shortsword.name;
            cout << "Damage: " << shortsword.damage << endl;
        }
        if (lighthammer.have == 1)
        {
            cout << "[5] "; cout << left << setw(15) << lighthammer.name;
            cout << "Damage: " << lighthammer.damage << endl;
        }
        if (warhammer.have == 1)
        {
            cout << "[6] "; cout << left << setw(15) << warhammer.name;
            cout << "Damage: " << warhammer.damage << endl;
        }
        if (longsword.have == 1)
        {
            cout << "[7] "; cout << left << setw(15) << longsword.name;
            cout << "Damage: " << longsword.damage << endl;
        }
        if (greatsword.have == 1)
        {
            cout << "[8] "; cout << left << setw(15) << greatsword.name;
            cout << "Damage: " << greatsword.damage << endl;
        }
        if (maul.have == 1)
        {
            cout << "[9] "; cout << left << setw(15) << maul.name;
            cout << "Damage: " << maul.damage << endl;
        }


        cout << endl;
        cout << "--- Equip Weapon ~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Choose weapon to equip, or press 0 to go exit." << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;
        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0")
        {
            i = 1;
        }

       
    }
}

void change_armor()
{
    int i = 0;
    while (i == 0)
    {
        print_inn();
        show_statbar();

        if (tunic.have == 1)
        {
            cout << "[1] "; cout  << left << setw(15) << tunic.name;
            cout << "AC: " << tunic.armorclass << endl;
        }
        if (cloth_armor.have == 1)
        {
            cout << "[2] "; cout << left << setw(15) << cloth_armor.name;
            cout << "AC: " << cloth_armor.armorclass << endl;
        }
        if (leather_armor.have == 1)
        {
            cout << "[3] "; cout << left << setw(15) << leather_armor.name;
            cout << "AC: " << leather_armor.armorclass << endl;
        }
        if (chain_armor.have == 1)
        {
            cout << "[4] "; cout << left << setw(15) << chain_armor.name;
            cout << "AC: " << chain_armor.armorclass << endl;
        }
        if (scale_armor.have == 1)
        {
            cout << "[5] "; cout << left << setw(15) << scale_armor.name;
            cout << "AC: " << scale_armor.armorclass << endl;
        }
        if (splint_armor.have == 1)
        {
            cout << "[6] "; cout << left << setw(15) << splint_armor.name;
            cout << "AC: " << splint_armor.armorclass << endl;
        }
        if (plate_armor.have == 1)
        {
            cout << "[7] "; cout << left << setw(15) << plate_armor.name;
            cout << "AC: " << plate_armor.armorclass << endl;
        }


        cout << endl;
        cout << "--- Equip Armor ~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Choose armor to equip, or press 0 to go exit." << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;
        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0")
        {
            i = 1;
        }

    }

}