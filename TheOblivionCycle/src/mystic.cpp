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
        if (ans == "2")
        {
            change_trinket();
        }
        if (ans == "3")
        {
            craft_prism();
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
        if (rabbit_foot.have == 0)
        {
            cout << left << setw(20) << "[1] Rabbit Foot";
            cout << "Cost: ";
            cout << left << setw(10) << rabbit_foot.cost;
            cout << rabbit_foot.desc << endl;
        }
        if (dragon_talon.have == 0)
        {
            cout << left << setw(20) << "[2] Dragon Talon";
            cout << "Cost: ";
            cout << left << setw(10) << dragon_talon.cost;
            cout << dragon_talon.desc << endl;
        }
        if (azure_neclace.have == 0)
        {
            cout << left << setw(20) << "[3] Azure Necklace";
            cout << "Cost: ";
            cout << left << setw(10) << azure_neclace.cost;
            cout << azure_neclace.desc << endl;
        }
        if (witch_effegy.have == 0)
        {
            cout << left << setw(20) << "[4] Witch Effegy";
            cout << "Cost: ";
            cout << left << setw(10) << witch_effegy.cost;
            cout << witch_effegy.desc << endl;
        }
        if (vial_blood.have == 0)
        {
            cout << left << setw(20) << "[5] Vial of Blood";
            cout << "Cost: ";
            cout << left << setw(10) << vial_blood.cost;
            cout << vial_blood.desc << endl;
        }
        if (frozen_tear.have == 0)
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

void change_trinket()
{
    int i = 0;
    while (i == 0)
    {
        print_trinkets();
        show_statbar();

        if (rabbit_foot.have == 1)
        {
            cout << "[1] "; cout << left << setw(15) << rabbit_foot.name;
            cout << "Desc: " << rabbit_foot.desc;
            if (hero_player.trinket == rabbit_foot.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (dragon_talon.have == 1)
        {
            cout << "[2] "; cout << left << setw(15) << dragon_talon.name;
            cout << "Desc: " << dragon_talon.desc;
            if (hero_player.trinket == dragon_talon.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (azure_neclace.have == 1)
        {
            cout << "[3] "; cout << left << setw(15) << azure_neclace.name;
            cout << "Desc: " << azure_neclace.desc;
            if (hero_player.trinket == azure_neclace.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (witch_effegy.have == 1)
        {
            cout << "[4] "; cout << left << setw(15) << witch_effegy.name;
            cout << "Desc: " << witch_effegy.desc;
            if (hero_player.trinket == witch_effegy.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (vial_blood.have == 1)
        {
            cout << "[5] "; cout << left << setw(15) << vial_blood.name;
            cout << "Desc: " << vial_blood.desc;
            if (hero_player.trinket == vial_blood.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }
        if (frozen_tear.have == 1)
        {
            cout << "[6] "; cout << left << setw(15) << frozen_tear.name;
            cout << "Desc: " << frozen_tear.desc;
            if (hero_player.trinket == frozen_tear.id) { Color(2); cout << "        Equipped"; Color(7); }
            cout << endl;
        }

        cout << endl;
        cout << "--- Equip Trinket ---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
        cout << "Choose trinket to equip, or press 0 to go exit." << endl;
        cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl << endl;
        string ansr;
        ansr = _getch();

        if (ansr == "\033" or ansr == "0") { i = 1; }
        if (ansr == "1") { trinket_equipper(rabbit_foot); }
        if (ansr == "2") { trinket_equipper(dragon_talon); }
        if (ansr == "3") { trinket_equipper(azure_neclace); }
        if (ansr == "4") { trinket_equipper(witch_effegy); }
        if (ansr == "5") { trinket_equipper(vial_blood); }
        if (ansr == "6") { trinket_equipper(frozen_tear); }

    }
}

void trinket_equipper(trinket trinket)
{
    if (hero_player.trinket == trinket.id)
    {
        cout << "You already have this trinket equipped!" << endl;
        Sleep(2000);
    }
    if (hero_player.trinket != trinket.id and trinket.have == 1)
    {
        hero_player.trinket = trinket.id;
        cout << "You equip your " << trinket.name << "!" << endl;
        Sleep(2000);
    }
    if (hero_player.trinket != trinket.id and trinket.have == 0)
    {
        ;
    }
}


void craft_prism()
{
    int i = 0;
    while (i == 0)
    {

        print_mystic();
        int bar2; for (bar2 = 0;bar2 < 5;bar2++) { cout << "-"; }; cout << " The Mystic ";
        for (bar2 = 0;bar2 < 58;bar2++) { cout << "-"; } cout << endl;
        

        if (hero_player.quest_level == 0)
        {
            cout << "Hello! Can I help you with something!" << endl;
        }
        if (hero_player.quest_level == 1)
        {
            cout << "I can craft you a prism to seal a gate. Bring me some monster essence!" << endl;
        }
        
        for (bar2 = 0;bar2 < 75;bar2++) { cout << "-"; } cout << endl;
        
        if (hero_player.quest_level != 0) { cout << "Current Essence: "; Color(10); cout << hero_player.essence << endl << endl; Color(7); }

        if (hero_player.quest_level == 1)
        {
            cout << "[1] Craft RED Prism ["; Color(10); cout << "1000"; Color(7); cout << "] Essence" << endl;
        }
        if (hero_player.quest_level == 2)
        {
            cout << "[2] Craft BLUE Prism ["; Color(10); cout << "3000"; Color(7); cout << "] Essence" << endl;
        }


        string ans;
        ans = _getch();

        if (hero_player.quest_level == 0) { i = 1; }

        if (ans == "1" and hero_player.essence < 1000 and hero_player.quest_level == 1)
        {
            cout << endl << "You do not possess enough essence!";
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence >= 1000 and hero_player.quest_level == 1)
        {
            cout << endl << "I have crafted your prism. Now go seal the gate!";
            hero_player.essence -= 1000;
            prism_red = true;
            Sleep(3000);
        }
        if (ans == "0" or ans == "\033")
        {
            i = 1;
        }
    }

}