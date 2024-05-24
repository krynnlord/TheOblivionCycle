#include "../headers/functions.h"

void player_score()
{
    string quest_text = "";
    if (hero_player.quest_level == 0) { quest_text = "NONE"; }
    if (hero_player.quest_level == 1) { quest_text = "INVESTIGATE THE RED GATE"; }
    
    
    print_score();
    show_statbar();
    cout << "ACTIVE QUEST: " << quest_text << endl << endl;
    
    cout << "ARMOR CLASS: " << hero_armor.armorclass << endl;
    cout << "ATTACK VALUE: " << hero_weapon.damage << endl;
    cout << "BANK: " << gold_vault << endl;
    cout << "LUCK: " << hero_player.luck << endl;
    cout << "STATUS: ";
    if (hero_player.stat == 1) { cout << "NORMAL"; }
    if (hero_player.stat == 2) { Color(10); cout << ">>>POISONED<<<"; Color(7); }
    if (hero_player.stat == 3) { Color(12); cout << ">>>BURNING<<<"; Color(7);  }
    cout << endl;
    cout << "TOTAL KILLS: " << total_kills << endl;
    cout << "TOTAL DEATHS: " << total_deaths << endl;

    string ans;
    ans = _getch();
	
}