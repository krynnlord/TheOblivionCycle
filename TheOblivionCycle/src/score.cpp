#include "../headers/functions.h"

void player_score()
{
    print_score();
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " NAME: " << left << setw(12); cout << hero_player.name;
    cout << "LEVEL: " << left << setw(4); cout << hero_player.level;
    cout << "EXP: " << left << setw(8); cout << hero_player.level;
    cout << "GOLD : " << left << setw(8); cout << hero_player.gold << endl;
    cout << " HP: " << right << setw(4); cout << hero_player.hp << "/";
    cout << left << setw(4); cout << hero_player.hp_max; cout << "     ";
    cout << "LUCK: " << left << setw(2); cout << hero_player.luck << endl;
    cout << "                                                   " << endl;
    cout << " WEAPON: " << hero_weapon.name;
    cout << " ATTACK: " << hero_weapon.damage;
    cout << " TYPE: " << hero_weapon.type << endl;
    cout << " ARMOR: " << hero_armor.name;
    cout << " AC: " << hero_armor.armorclass;
    cout << " TYPE: " << hero_armor.type << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

    string ans;
    ans = _getch();
	
}