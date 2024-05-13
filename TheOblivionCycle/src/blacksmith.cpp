#include "../headers/functions.h"

int blacksmith(int i)
{
    int b = 0;
    while (b == 0)
    {
        print_blacksmith();
        show_statbar();
        
        // Print Menu Options
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") Buy Weapons" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") Buy Armor" << endl;
        cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

        // Input Selection
        string ans = "";
        ShowConsoleCursor(false);
        ans = _getch();


        if (ans == "0" or ans == "\033")
        {
            return 1;
        }
        if (ans == "1")
        {
            buy_weapons();
        }
        if (ans == "2")
        {
            buy_armor();
        }

        else { return 0; }
    }
    
    return 1;

}

void buy_weapons()
{
    int i = 0;
    while (i == 0)
    {
        print_blacksmith();
        show_statbar();
        if (dagger.have == 0)
        {
            cout << left << setw(20) << "[1] Dagger";
            cout << "Cost: ";
            cout << left << setw(10) << dagger.cost;
            cout << "Damage: " << dagger.damage << endl;
        }
        if (mace.have == 0)
        {
            cout << left << setw(20) << "[2] Mace";
            cout << "Cost: ";
            cout << left << setw(10) << mace.cost;
            cout << "Damage: " << mace.damage << endl;
        }
        if (shortsword.have == 0)
        {
            cout << left << setw(20) << "[3] Short Sword";
            cout << "Cost: ";
            cout << left << setw(10) << shortsword.cost;
            cout << "Damage: " << shortsword.damage << endl;
        }
        if (lighthammer.have == 0)
        {
            cout << left << setw(20) << "[4] Light Hammer";
            cout << "Cost: ";
            cout << left << setw(10) << lighthammer.cost;
            cout << "Damage: " << lighthammer.damage << endl;
        }
        if (warhammer.have == 0)
        {
            cout << left << setw(20) << "[5] Warhammer";
            cout << "Cost: ";
            cout << left << setw(10) << warhammer.cost;
            cout << "Damage: " << warhammer.damage << endl;
        }
        if (longsword.have == 0)
        {
            cout << left << setw(20) << "[6] Long Sword";
            cout << "Cost: ";
            cout << left << setw(10) << longsword.cost;
            cout << "Damage: " << longsword.damage << endl;
        }
        if (greatsword.have == 0)
        {
            cout << left << setw(20) << "[7] Greatsword";
            cout << "Cost: ";
            cout << left << setw(10) << greatsword.cost;
            cout << "Damage: " << greatsword.damage << endl;
        }
        if (maul.have == 0)
        {
            cout << left << setw(20) << "[8] Maul";
            cout << "Cost: ";
            cout << left << setw(10) << maul.cost;
            cout << "Damage: " << maul.damage << endl;
        }
        cout << endl;
        cout << "--- The Blacksmith --~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Are you interested in any of my weapons?" << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;


        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0")
        {
            i = 1;
        }
        
        if (ansr == "1" and dagger.have == 1){;}
        if (ansr == "1" and dagger.have != 1) { check_weapon_purchase(dagger); }
        if (ansr == "2" and mace.have == 1) { ; }
        if (ansr == "2" and mace.have != 1) { check_weapon_purchase(mace); }
        if (ansr == "3" and shortsword.have == 1) { ; }
        if (ansr == "3" and shortsword.have != 1) { check_weapon_purchase(shortsword); }
        if (ansr == "4" and lighthammer.have == 1) { ; }
        if (ansr == "4" and lighthammer.have != 1) { check_weapon_purchase(lighthammer); }
        if (ansr == "5" and warhammer.have == 1) { ; }
        if (ansr == "5" and warhammer.have != 1) { check_weapon_purchase(warhammer); }
        if (ansr == "6" and longsword.have == 1) { ; }
        if (ansr == "6" and longsword.have != 1) { check_weapon_purchase(longsword); }
        if (ansr == "7" and greatsword.have == 1) { ; }
        if (ansr == "7" and greatsword.have != 1) { check_weapon_purchase(greatsword); }
        if (ansr == "8" and maul.have == 1) { ; }
        if (ansr == "8" and maul.have != 1) { check_weapon_purchase(maul); }

    }

}

void check_weapon_purchase(weapon& temp_weapon)
{
    if (hero_player.gold < temp_weapon.cost)
            {
                cout << "You cannot afford the " << temp_weapon.name << "!";
                Sleep(2000);

            }
            if (hero_player.gold >= temp_weapon.cost)
            {
                cout << "You purchase the " << temp_weapon.name << "!";
                temp_weapon.have = 1;
                hero_player.gold -= temp_weapon.cost;
                Sleep(2000);

            }

}


void buy_armor()
{
    int i = 0;
    while (i == 0)
    {
        print_blacksmith();
        show_statbar();
        if (cloth_armor.have == 0)
        {
            cout << left << setw(20) << "[1] Cloth Armor";
            cout << "Cost: ";
            cout << left << setw(10) << cloth_armor.cost;
            cout << "AC: " << cloth_armor.armorclass << endl;
        }
        if (leather_armor.have == 0)
        {
            cout << left << setw(20) << "[2] Leather Armor";
            cout << "Cost: ";
            cout << left << setw(10) << leather_armor.cost;
            cout << "AC: " << leather_armor.armorclass << endl;
        }
        if (chain_armor.have == 0)
        {
            cout << left << setw(20) << "[3] Chain Armor";
            cout << "Cost: ";
            cout << left << setw(10) << chain_armor.cost;
            cout << "AC: " << chain_armor.armorclass << endl;
        }
        if (scale_armor.have == 0)
        {
            cout << left << setw(20) << "[4] Scale Armor";
            cout << "Cost: ";
            cout << left << setw(10) << scale_armor.cost;
            cout << "AC: " << scale_armor.armorclass << endl;
        }
        if (splint_armor.have == 0)
        {
            cout << left << setw(20) << "[5] Splint Armor";
            cout << "Cost: ";
            cout << left << setw(10) << splint_armor.cost;
            cout << "AC: " << splint_armor.armorclass << endl;
        }
        if (plate_armor.have == 0)
        {
            cout << left << setw(20) << "[6] Plate Armor";
            cout << "Cost: ";
            cout << left << setw(10) << plate_armor.cost;
            cout << "AC: " << plate_armor.armorclass << endl;
        }
 
        cout << endl;
        cout << "--- The Blacksmith --~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Are you interested in any of these fine armor sets?" << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;


        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0")
        {
            i = 1;
        }

        if (ansr == "1" and cloth_armor.have == 1) { ; }
        if (ansr == "1" and cloth_armor.have != 1) { check_armor_purchase(cloth_armor); }
        if (ansr == "2" and leather_armor.have == 1) { ; }
        if (ansr == "2" and leather_armor.have != 1) { check_armor_purchase(leather_armor); }
        if (ansr == "3" and chain_armor.have == 1) { ; }
        if (ansr == "3" and chain_armor.have != 1) { check_armor_purchase(chain_armor); }
        if (ansr == "4" and scale_armor.have == 1) { ; }
        if (ansr == "4" and scale_armor.have != 1) { check_armor_purchase(scale_armor); }
        if (ansr == "5" and splint_armor.have == 1) { ; }
        if (ansr == "5" and splint_armor.have != 1) { check_armor_purchase(splint_armor); }
        if (ansr == "6" and plate_armor.have == 1) { ; }
        if (ansr == "6" and plate_armor.have != 1) { check_armor_purchase(plate_armor); }

    }


}

void check_armor_purchase(armor& temp_armor)
{
    if (hero_player.gold < temp_armor.cost)
    {
        cout << "You cannot afford the " << temp_armor.name << "!";
        Sleep(2000);

    }
    if (hero_player.gold >= temp_armor.cost)
    {
        cout << "You purchase the " << temp_armor.name << "!";
        temp_armor.have = 1;
        hero_player.gold -= temp_armor.cost;
        Sleep(2000);

    }

}