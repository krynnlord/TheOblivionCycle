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
            cout << "["; Color(6); cout << "1" << left << setw(23); Color(7); cout << "] Rabbit Foot";
            cout << "Cost: ";
            cout << left << setw(10) << rabbit_foot.cost;
            cout << rabbit_foot.desc << endl;
        }
        if (dragon_talon.have == 0)
        {
            cout << "["; Color(6); cout << "2" << left << setw(23); Color(7); cout << "] Dragon Talon";
            cout << "Cost: ";
            cout << left << setw(10) << dragon_talon.cost;
            cout << dragon_talon.desc << endl;
        }
        if (azure_neclace.have == 0)
        {
            cout << "["; Color(6); cout << "3" << left << setw(23); Color(7); cout << "] Azure Necklace";
            cout << "Cost: ";
            cout << left << setw(10) << azure_neclace.cost;
            cout << azure_neclace.desc << endl;
        }
        if (witch_effegy.have == 0)
        {
            cout << "["; Color(6); cout << "4" << left << setw(23); Color(7); cout << "] Witch Effegy";
            cout << "Cost: ";
            cout << left << setw(10) << witch_effegy.cost;
            cout << witch_effegy.desc << endl;
        }
        if (vial_blood.have == 0)
        {
            cout << "["; Color(6); cout << "5" << left << setw(23); Color(7); cout << "] Vial of Blood";
            cout << "Cost: ";
            cout << left << setw(10) << vial_blood.cost;
            cout << vial_blood.desc << endl;
        }
        if (frozen_tear.have == 0)
        {
            cout << "["; Color(6); cout << "6" << left << setw(23); Color(7); cout << "] Frozen Tear";
            cout << "Cost: ";
            cout << left << setw(10) << frozen_tear.cost;
            cout << frozen_tear.desc << endl;
        }
        if (unholy_pentagram.have == 0)
        {
            cout << "["; Color(6); cout << "7" << left << setw(23); Color(7); cout << "] Unholy Pentagram";
            cout << "Cost: ";
            cout << left << setw(10) << unholy_pentagram.cost;
            cout << unholy_pentagram.desc << endl;
        }
        if (bone_caltrops.have == 0)
        {
            cout << "["; Color(6); cout << "8" << left << setw(23); Color(7); cout << "] Bone Caltrops";
            cout << "Cost: ";
            cout << left << setw(10) << bone_caltrops.cost;
            cout << bone_caltrops.desc << endl;
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
        if (ansr == "7" and unholy_pentagram.have == 1) { ; }
        if (ansr == "7" and unholy_pentagram.have != 1) { check_trinket_purchase(unholy_pentagram); }
        if (ansr == "8" and bone_caltrops.have == 1) { ; }
        if (ansr == "8" and bone_caltrops.have != 1) { check_trinket_purchase(bone_caltrops); }
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
            cout << "[1] "; cout << left << setw(20) << rabbit_foot.name;
            cout << "Desc: " << left << setw(35) << rabbit_foot.desc;
            if (hero_player.trinket == rabbit_foot.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (dragon_talon.have == 1)
        {
            cout << "[2] "; cout << left << setw(20) << dragon_talon.name;
            cout << "Desc: " << left << setw(35) << dragon_talon.desc;
            if (hero_player.trinket == dragon_talon.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (azure_neclace.have == 1)
        {
            cout << "[3] "; cout << left << setw(20) << azure_neclace.name;
            cout << "Desc: " << left << setw(35) << azure_neclace.desc;
            if (hero_player.trinket == azure_neclace.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (witch_effegy.have == 1)
        {
            cout << "[4] "; cout << left << setw(20) << witch_effegy.name;
            cout << "Desc: " << left << setw(35) << witch_effegy.desc;
            if (hero_player.trinket == witch_effegy.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (vial_blood.have == 1)
        {
            cout << "[5] "; cout << left << setw(20) << vial_blood.name;
            cout << "Desc: " << left << setw(35) << vial_blood.desc;
            if (hero_player.trinket == vial_blood.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (frozen_tear.have == 1)
        {
            cout << "[6] "; cout << left << setw(20) << frozen_tear.name;
            cout << "Desc: " << left << setw(35) << frozen_tear.desc;
            if (hero_player.trinket == frozen_tear.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (unholy_pentagram.have == 1)
        {
            cout << "[7] "; cout << left << setw(20) << unholy_pentagram.name;
            cout << "Desc: " << left << setw(35) << unholy_pentagram.desc;
            if (hero_player.trinket == unholy_pentagram.id) { Color(2); cout << "Equipped"; Color(7); }
            cout << endl;
        }
        if (bone_caltrops.have == 1)
        {
            cout << "[8] "; cout << left << setw(20) << bone_caltrops.name;
            cout << "Desc: " << left << setw(35) << bone_caltrops.desc;
            if (hero_player.trinket == bone_caltrops.id) { Color(2); cout << "Equipped"; Color(7); }
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
        if (ansr == "7") { trinket_equipper(unholy_pentagram); }
        if (ansr == "8") { trinket_equipper(bone_caltrops); }

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
        if (hero_player.quest_level >= 1)
        {
            cout << "I can craft you a prism to seal a gate. Bring me some monster essence!" << endl;
        }
        
        for (bar2 = 0;bar2 < 75;bar2++) { cout << "-"; } cout << endl;
        
        if (hero_player.quest_level != 0) { cout << "Current Essence: "; Color(10); cout << hero_player.essence << endl << endl; Color(7); }

        if (hero_player.quest_level == 1 and prism_red == false)
        {
            cout << "[1] Craft "; Color(4); cout << "RED"; Color(7); cout << " Prism ["; Color(10); cout << "1000"; Color(7); cout << "] Essence" << endl;
        }
        if (hero_player.quest_level == 3 and prism_blue == false)
        {
            cout << "[1] Craft "; Color(1); cout << "BLUE"; Color(7); cout << " Prism ["; Color(10); cout << "3000"; Color(7); cout << "] Essence" << endl;
        }
        if (hero_player.quest_level == 5 and prism_purple == false)
        {
            cout << "[1] Craft "; Color(5); cout << "PURPLE"; Color(7); cout << " Prism ["; Color(10); cout << "8000"; Color(7); cout << "] Essence" << endl;
        }
        if (hero_player.quest_level == 7 and prism_yellow == false)
        {
            cout << "[1] Craft "; Color(6); cout << "YELLOW"; Color(7); cout << " Prism ["; Color(10); cout << "10000"; Color(7); cout << "] Essence" << endl;
        }
        if (hero_player.quest_level == 8 and prism_shimmering == false)
        {
            cout << "[1] Craft "; Color(7); cout << "Shimmering"; Color(7); cout << " Prism ["; Color(10); cout << "15000"; Color(7); cout << "] Essence" << endl;
        }
        cout << "[0] Back" << endl;

        string ans;
        ans = _getch();

        if (hero_player.quest_level == 0) { i = 1; }

        if (ans == "1" and hero_player.essence < 1000 and hero_player.quest_level == 1 and prism_red == false)
        {
            cout << endl << "You do not possess enough essence!";
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence >= 1000 and hero_player.quest_level == 1 and prism_red == false)
        {
            cout << endl << "I have crafted your prism. Now go seal the gate!";
            hero_player.essence -= 1000;
            prism_red = true;
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence < 3000 and hero_player.quest_level == 3 and prism_blue == false)
        {
            cout << endl << "You do not possess enough essence!";
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence >= 3000 and hero_player.quest_level == 3 and prism_blue == false)
        {
            cout << endl << "I have crafted your prism. Now go seal the gate!";
            hero_player.essence -= 3000;
            prism_blue = true;
            Sleep(3000);
        }
        if (ans == "1" and hero_player.essence < 8000 and hero_player.quest_level == 5 and prism_purple == false)
        {
            cout << endl << "You do not possess enough essence!";
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence >= 8000 and hero_player.quest_level == 5 and prism_purple == false)
        {
            cout << endl << "I have crafted your prism. Now go seal the gate!";
            hero_player.essence -= 8000;
            prism_purple = true;
            Sleep(3000);
        }
        if (ans == "1" and hero_player.essence < 10000 and hero_player.quest_level == 7 and prism_yellow == false)
        {
            cout << endl << "You do not possess enough essence!";
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence >= 10000 and hero_player.quest_level == 7 and prism_yellow == false)
        {
            cout << endl << "I have crafted your prism. Now go seal the gate!";
            hero_player.essence -= 10000;
            prism_yellow = true;
            Sleep(3000);
        }
        if (ans == "1" and hero_player.essence < 15000 and hero_player.quest_level == 8 and prism_shimmering == false)
        {
            cout << endl << "You do not possess enough essence!";
            Sleep(3000);
        }

        if (ans == "1" and hero_player.essence >= 15000 and hero_player.quest_level == 8 and prism_shimmering == false)
        {
            cout << endl << "I have crafted your prism. Now go seal the gate!";
            hero_player.essence -= 15000;
            prism_shimmering = true;
            Sleep(3000);
        }
        if (ans == "0" or ans == "\033")
        {
            i = 1;
        }
    }

}