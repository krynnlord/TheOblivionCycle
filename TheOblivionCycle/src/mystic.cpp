#include "../headers/functions.h"

int mystic(int i)
{
    int b = 0;
    while (b == 0)
    {
     
        print_mystic();
        show_statbar();
        // Print Menu Options
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") Buy Trinket" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") Wear Trinket" << endl;
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") Craft Prism" << endl;
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
            buy_trinket();
        }

        else { return 0; }
    }

    return 1;

}

void buy_trinket()
{
    int i = 0;
    while (i == 0)
    {
        print_mystic();
        show_statbar();
        if (cloth_armor.have == 0)
        {
            cout << left << setw(20) << "[1] Rabbit Foot";
            cout << "Cost: ";
            cout << left << setw(10) << rabbit_foot.cost;
            cout << rabbit_foot.desc << endl;
        }
        if (leather_armor.have == 0)
        {
            cout << left << setw(20) << "[2] Dragon Talon";
            cout << "Cost: ";
            cout << left << setw(10) << dragon_talon.cost;
            cout << dragon_talon.desc << endl;
        }
        if (chain_armor.have == 0)
        {
            cout << left << setw(20) << "[3] Azure Necklace";
            cout << "Cost: ";
            cout << left << setw(10) << azure_neclace.cost;
            cout << azure_neclace.desc << endl;
        }
        if (scale_armor.have == 0)
        {
            cout << left << setw(20) << "[4] Witch Effegy";
            cout << "Cost: ";
            cout << left << setw(10) << witch_effegy.cost;
            cout << witch_effegy.desc << endl;
        }
        if (splint_armor.have == 0)
        {
            cout << left << setw(20) << "[5] Vial of Blood";
            cout << "Cost: ";
            cout << left << setw(10) << vial_blood.cost;
            cout << vial_blood.desc << endl;
        }
        if (plate_armor.have == 0)
        {
            cout << left << setw(20) << "[6] Frozen Tear";
            cout << "Cost: ";
            cout << left << setw(10) << frozen_tear.cost;
            cout << frozen_tear.desc << endl;
        }

        cout << endl;
        cout << "--- The Mystic ~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Would you like to purchase a mystical trinket?" << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;


        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0")
        {
            i = 1;
        }

        if (ansr == "1" and rabbit_foot.have == 1) { ; }
        if (ansr == "1" and rabbit_foot.have != 1) { check_trinket_purchase(rabbit_foot); }
        if (ansr == "2" and dragon_talon.have == 1) { ; }
        if (ansr == "2" and dragon_talon.have != 1) { check_trinket_purchase(dragon_talon); }
        if (ansr == "3" and azure_neclace.have == 1) { ; }
        if (ansr == "3" and azure_neclace.have != 1) { check_trinket_purchase(azure_neclace); }
        if (ansr == "4" and witch_effegy.have == 1) { ; }
        if (ansr == "4" and witch_effegy.have != 1) { check_trinket_purchase(witch_effegy); }
        if (ansr == "5" and vial_blood.have == 1) { ; }
        if (ansr == "5" and vial_blood.have != 1) { check_trinket_purchase(vial_blood); }
        if (ansr == "6" and frozen_tear.have == 1) { ; }
        if (ansr == "6" and frozen_tear.have != 1) { check_trinket_purchase(frozen_tear); }

    }


}

void check_trinket_purchase(trinket& temp_trinket)
{
    if (hero_player.gold < temp_trinket.cost)
    {
        cout << "You cannot afford the " << temp_trinket.name << "!";
        Sleep(2000);

    }
    if (hero_player.gold >= temp_trinket.cost)
    {
        cout << "You purchase the " << temp_trinket.name << "!";
        temp_trinket.have = 1;
        hero_player.gold -= temp_trinket.cost;
        Sleep(2000);

    }

}