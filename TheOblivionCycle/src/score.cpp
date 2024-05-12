#include "../headers/functions.h"

void player_score()
{
    string quest_text = "";
    if (hero_player.quest_level == 0) { quest_text = "NONE"; }
    if (hero_player.quest_level == 1) { quest_text = "INVESTIGATE THE RED GATE"; }
    
    
    print_score();
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << "ACTIVE QUEST: " << quest_text << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << "NAME: " << left << setw(14); cout << hero_player.name;
    cout << "LEVEL: " << left << setw(7); cout << hero_player.level;
    cout << "EXP: " << left << setw(10); cout << hero_player.exp << endl;
    cout << "HP: " << right << setw(4); cout << hero_player.hp << "/";
    cout << left << setw(6); cout << hero_player.hp_max; cout << "     ";
    cout << "LUCK: " << left << setw(8); cout << hero_player.luck;
    cout << "ESSENCE: " << hero_player.essence << endl << endl;
    cout << "WEAPON: " << left << setw(12); cout << hero_weapon.name;
    cout << "ATTACK: " << left << setw(6); cout << hero_weapon.damage;
    cout << "TYPE: " << left << setw(8); cout << hero_weapon.type << endl;
    cout << "ARMOR: " << left << setw(13); cout << hero_armor.name;
    cout << "AC: " << left << setw(10); cout << hero_armor.armorclass;
    cout << "TYPE: " << left << setw(12); cout << hero_armor.type << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

    string ans;
    ans = _getch();
	
}