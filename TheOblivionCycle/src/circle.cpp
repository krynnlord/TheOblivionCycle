#include "../headers/functions.h"

int circleofstones(int i)
{
    resent_rez = 0;

    if (hero_player.quest_level == 0)
    {
        cout << "Before you stands a circle of stones. You notice a shimmering red gate below one of the arches." << endl;
        cout << "Maybe you should speak to someone about this occurance." << endl << endl;
    }

    // Print Menu Options
    if (hero_player.quest_level == 1)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << "LVL 1-4";
        if (prism_red == true and hero_player.level >= 4)
        {
            Color(11); cout << " [can be sealed with prism]" << endl;Color(7);
        }

        cout << endl;
    }
    if (hero_player.quest_level == 2)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << " LVL 1-4"; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE] "; Color(7); cout << "LVL 5-8" << endl;
    }
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    
    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1" and hero_player.quest_level >= 1)
    {
        battle_loop(1);
        if (resent_rez == 1) { return 1; }
    }

    if (ans == "0" or ans == "\033")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}


void battle_loop(int gate)
{
    if (gate == 1 and prism_red == true and hero_player.level >= 4)
    {
        battle_sim(redgate_boss);
        return;
    }

    if (gate == 1)
    {
        if (hero_player.level <= 4)
        {
            // Roll for Monster based on hero level
            vector<monster> monsterlist;

            for (int i = 0; i < size(monsters_all_red); i++)
            {
                if (monsters_all_red[i].level == hero_player.level)
                {
                    monsterlist.push_back(monsters_all_red[i]);
                }
            }

            srand((unsigned)time(NULL));
            int monst_rand;
            monst_rand = rand() % size(monsterlist);

            battle_sim(monsterlist[monst_rand]); // send current level monster to battle sim

        }

        if (hero_player.level > 4)
        {
            // Roll for Monster based on hero level
            vector<monster> monsterlist;

            for (int i = 0; i < size(monsters_all_red); i++)
            {
                if (monsters_all_red[i].level == 4)
                {
                    monsterlist.push_back(monsters_all_red[i]);
                }
            }

            srand((unsigned)time(NULL));
            int monst_rand;
            monst_rand = rand() % size(monsterlist);

            battle_sim(monsterlist[monst_rand]); // send current level monster to battle sim

        }

    }

    if (gate == 2)
    {
        if (hero_player.level <= 8)
        {
            // Roll for Monster based on hero level
            vector<monster> monsterlist;

            for (int i = 0; i < size(monsters_all_red); i++)
            {
                if (monsters_all_red[i].level == hero_player.level)
                {
                    monsterlist.push_back(monsters_all_red[i]);
                }
            }

            srand((unsigned)time(NULL));
            int monst_rand;
            monst_rand = rand() % size(monsterlist);

            battle_sim(monsterlist[monst_rand]); // send current level monster to battle sim
        }

        if (hero_player.level > 8)
        {
            // Roll for Monster based on hero level
            vector<monster> monsterlist;

            for (int i = 0; i < size(monsters_all_red); i++)
            {
                if (monsters_all_red[i].level == 8)
                {
                    monsterlist.push_back(monsters_all_red[i]);
                }
            }

            srand((unsigned)time(NULL));
            int monst_rand;
            monst_rand = rand() % size(monsterlist);

            battle_sim(monsterlist[monst_rand]); // send current level monster to battle sim

        }

    }

    


    return;
}