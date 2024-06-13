#include "../headers/functions.h"

int circleofstones(int i)
{
    recent_rez = 0;
    display_fight_symbol = true;

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
            Color(11); cout << "  [can be sealed with prism]"; Color(7);
        }

        cout << endl;
    }
    if (hero_player.quest_level == 2)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE] "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
       
    }
    if (hero_player.quest_level == 3)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE]   "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE]   "; Color(7); cout << "LVL 5-8 ";
        if (prism_blue == true and hero_player.level >= 8)
        {
            Color(11); cout << "  [can be sealed with prism]"; Color(7);
        }
        cout << endl;
    }
    if (hero_player.quest_level == 4)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE]   "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE]   "; Color(7); cout << "LVL 5-8 ";  Color(11); cout << "  [sealed]" << endl; Color(7);
    }
    if (hero_player.quest_level == 5)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE]   "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE]   "; Color(7); cout << "LVL 5-8 ";  Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") "; Color(5); cout << "[PURPLE GATE] "; Color(7); cout << "LVL 9-12";
        if (prism_purple == true and hero_player.level >= 12)
        {
            Color(11); cout << "  [can be sealed with prism]"; Color(7);
        }
        cout << endl;
    }
    if (hero_player.quest_level == 6)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE]   "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE]   "; Color(7); cout << "LVL 5-8 ";  Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") "; Color(5); cout << "[PURPLE GATE] "; Color(7); cout << "LVL 9-12"; Color(11); cout << "  [sealed]" << endl; Color(7);
    }
    if (hero_player.quest_level == 7)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE]   "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE]   "; Color(7); cout << "LVL 5-8 ";  Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") "; Color(5); cout << "[PURPLE GATE] "; Color(7); cout << "LVL 9-12"; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "4"; Color(7); cout << ") "; Color(6); cout << "[YELLOW GATE] "; Color(7); cout << "LVL 13-16";
        if (prism_yellow == true and hero_player.level >= 16)
        {
            Color(11); cout << " [can be sealed with prism]"; Color(7);
        }
        cout << endl;
    }
    if (hero_player.quest_level == 8)
    {
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") "; Color(12); cout << "[RED GATE]   "; Color(7); cout << " LVL 1-4 "; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") "; Color(9); cout << "[BLUE GATE]   "; Color(7); cout << "LVL 5-8 ";  Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") "; Color(5); cout << "[PURPLE GATE] "; Color(7); cout << "LVL 9-12"; Color(11); cout << "  [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "4"; Color(7); cout << ") "; Color(6); cout << "[YELLOW GATE] "; Color(7); cout << "LVL 13-16"; Color(11); cout << " [sealed]" << endl; Color(7);
        cout << "("; Color(6); cout << "5"; Color(7); cout << ") "; Color(7); cout << "[FINAL GATE]  "; Color(7); cout << "LVL 17-20";
        if (prism_shimmering == true and hero_player.level >= 20)
        {
            Color(11); cout << " [can be sealed with prism]"; Color(7);
        }
        cout << endl;
    }
    
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    
    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1" and hero_player.quest_level >= 1)
    {
        battle_loop(1);
        if (recent_rez == 1) { return 1; }
    }
    if (ans == "2" and hero_player.quest_level >= 3 and hero_player.level >=5)
    {
        battle_loop(2);
        if (recent_rez == 1) { return 1; }
    }
    if (ans == "3" and hero_player.quest_level >= 5 and hero_player.level >= 9)
    {
        battle_loop(3);
        if (recent_rez == 1) { return 1; }
    }
    if (ans == "4" and hero_player.quest_level >= 7 and hero_player.level >= 13)
    {
        battle_loop(4);
        if (recent_rez == 1) { return 1; }
    }
    if (ans == "5" and hero_player.quest_level >= 8 and hero_player.level >= 17)
    {
        battle_loop(5);
        if (recent_rez == 1) { return 1; }
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
    if (gate == 1 and prism_red == true and hero_player.level >= 4 and hero_player.quest_level == 1)
    {
        cout << "\nDo you want to attempt to seal the gate?\n\n[1] Yes";
        
        string tempans;
        tempans = _getch();

        if (tempans == "1") 
        { 
            display_fight_symbol = false;
            print_portal(redgate_boss); 
            battle_sim(redgate_boss, gate); 
            return; 
        }
        else 
        {
            battle_sim(monster_generator(4, gate), 1);
            return;
        }
    }
    if (gate == 2 and prism_blue == true and hero_player.level >= 8 and hero_player.quest_level == 3)
    {
        cout << "\nDo you want to attempt to seal the gate?\n\n[1] Yes";

        string tempans;
        tempans = _getch();

        if (tempans == "1")
        {
            display_fight_symbol = false;
            print_portal(bluegate_boss);
            battle_sim(bluegate_boss, gate);
            return;
        }
        else
        {
            battle_sim(monster_generator(8, gate), 2);
            return;
        }
    }
    if (gate == 3 and prism_purple == true and hero_player.level >= 12 and hero_player.quest_level == 5)
    {
        cout << "\nDo you want to attempt to seal the gate?\n\n[1] Yes";

        string tempans;
        tempans = _getch();

        if (tempans == "1")
        {
            display_fight_symbol = false;
            print_portal(purplegate_boss);
            battle_sim(purplegate_boss, gate);
            return;
        }
        else
        {
            battle_sim(monster_generator(12, gate), 3);
            return;
        }
    }
    if (gate == 4 and prism_yellow == true and hero_player.level >= 16 and hero_player.quest_level == 7)
    {
        cout << "\nDo you want to attempt to seal the gate?\n\n[1] Yes";

        string tempans;
        tempans = _getch();

        if (tempans == "1")
        {
            display_fight_symbol = false;
            print_portal(yellowgate_boss);
            battle_sim(yellowgate_boss, gate);
            return;
        }
        else
        {
            battle_sim(monster_generator(16, gate), 4);
            return;
        }
    }
    if (gate == 5 and prism_shimmering == true and hero_player.level >= 20 and hero_player.quest_level == 8)
    {
        cout << "\nDo you want to attempt to seal the gate?\n\n[1] Yes";

        string tempans;
        tempans = _getch();

        if (tempans == "1")
        {
            display_fight_symbol = false;
            print_portal(final_boss);
            battle_sim(final_boss, gate);
            return;
        }
        else
        {
            battle_sim(monster_generator(20, gate), 5);
            return;
        }
    }

    if (gate == 1)
    {
        if (hero_player.level <= 4)
        {
            battle_sim(monster_generator(hero_player.level, gate), 1);
            return;
        }

        if (hero_player.level > 4 and hero_player.quest_level >=2)
        {
            battle_sim(monster_generator(4, gate), 1);
            return;
        }

    }

    if (gate == 2)
    {
        if (hero_player.level <= 8)
        {
            battle_sim(monster_generator(hero_player.level, gate), 2);
            return;
        }

        if (hero_player.level > 8)
        {
            battle_sim(monster_generator(8, gate), 2);
            return;
        }

    }
    if (gate == 3)
    {
        if (hero_player.level <= 12)
        {
            battle_sim(monster_generator(hero_player.level, gate), 3);
            return;
        }

        if (hero_player.level > 12)
        {
            battle_sim(monster_generator(12, gate), 3);
            return;
        }

    }
    if (gate == 4)
    {
        if (hero_player.level <= 16)
        {
            battle_sim(monster_generator(hero_player.level, gate), 4);
            return;
        }

        if (hero_player.level > 16)
        {
            battle_sim(monster_generator(16, gate), 4);
            return;
        }

    }
    if (gate == 5)
    {
        if (hero_player.level <= 20)
        {
            battle_sim(monster_generator(hero_player.level, gate), 5);
            return;
        }

        if (hero_player.level > 20)
        {
            battle_sim(monster_generator(20, gate), 5);
            return;
        }

    }


    return;
}