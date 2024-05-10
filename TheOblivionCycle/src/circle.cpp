#include "../headers/functions.h"

int circleofstones(int i)
{

    if (hero_player.quest_level == 0)
    {
        cout << "Before you stands a circle of stones. You notice a shimmering red gate below one of the arches." << endl;
        cout << "Maybe you should speak to someone about this occurance." << endl << endl;
    }

    // Print Menu Options
    if (hero_player.quest_level == 1)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << "LVL 1-5" << endl;
    }
    if (hero_player.quest_level == 2)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << "LVL 1-5" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE] "; Color(7); cout << "LVL 6-10" << endl;
    }
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    
    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1" and hero_player.quest_level >= 1)
    {
        // cout << "\nEntering the Red Gate!\n"; Sleep(2000);
        battle_loop(1);
    }

    if (ans == "0")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}


void battle_loop(int gate)
{
    
    // Roll for Monsters
    if (gate == 1) // RED GATE
    {
        int monster_roller;
        srand((unsigned)time(NULL));
        
        if (hero_player.level == 1)
        {
            monster_roller = rand() % 4 + 1;
            if (monster_roller == 1) { battle_sim(zombie); }
            if (monster_roller == 2) { battle_sim(skeleton); }
            if (monster_roller == 3) { battle_sim(giant_boar); }
            if (monster_roller == 4) { battle_sim(giant_bat); }
            return;
        }

        if (hero_player.level == 2)
        {
            monster_roller = rand() % 8 + 1;
            if (monster_roller == 1) { battle_sim(zombie); }
            if (monster_roller == 2) { battle_sim(skeleton); }
            if (monster_roller == 3) { battle_sim(giant_boar); }
            if (monster_roller == 4) { battle_sim(giant_bat); }
            if (monster_roller == 5) { battle_sim(ash_zombie); }
            if (monster_roller == 6) { battle_sim(skeleton_warrior); }
            if (monster_roller == 7) { battle_sim(giant_centipede); }
            if (monster_roller == 8) { battle_sim(goblin); }
            return;
        }

        if (hero_player.level == 3)
        {
            monster_roller = rand() % 8 + 1;
            if (monster_roller == 1) { battle_sim(zombie); }
            if (monster_roller == 2) { battle_sim(skeleton); }
            if (monster_roller == 3) { battle_sim(giant_boar); }
            if (monster_roller == 4) { battle_sim(giant_bat); }
            if (monster_roller == 5) { battle_sim(ash_zombie); }
            if (monster_roller == 6) { battle_sim(skeleton_warrior); }
            if (monster_roller == 7) { battle_sim(giant_centipede); }
            if (monster_roller == 8) { battle_sim(goblin); }
            return;
        }

        if (hero_player.level == 4)
        {
            monster_roller = rand() % 8 + 1;
            if (monster_roller == 1) { battle_sim(zombie); }
            if (monster_roller == 2) { battle_sim(skeleton); }
            if (monster_roller == 3) { battle_sim(giant_boar); }
            if (monster_roller == 4) { battle_sim(giant_bat); }
            if (monster_roller == 5) { battle_sim(ash_zombie); }
            if (monster_roller == 6) { battle_sim(skeleton_warrior); }
            if (monster_roller == 7) { battle_sim(giant_centipede); }
            if (monster_roller == 8) { battle_sim(goblin); }
            return;
        }

        if (hero_player.level >= 5)
        {
            monster_roller = rand() % 8 + 1;
            if (monster_roller == 1) { battle_sim(zombie); }
            if (monster_roller == 2) { battle_sim(skeleton); }
            if (monster_roller == 3) { battle_sim(giant_boar); }
            if (monster_roller == 4) { battle_sim(giant_bat); }
            if (monster_roller == 5) { battle_sim(ash_zombie); }
            if (monster_roller == 6) { battle_sim(skeleton_warrior); }
            if (monster_roller == 7) { battle_sim(giant_centipede); }
            if (monster_roller == 8) { battle_sim(goblin); }
            return;
        }

    }


    return;
}