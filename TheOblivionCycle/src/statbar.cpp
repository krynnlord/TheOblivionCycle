#include "../headers/functions.h"

void show_statbar()
{
    
    int bar1; for (bar1=0;bar1<70;bar1++){cout<<"-";} cout << endl;
    cout << left << setw(13); cout << hero_player.name; 
    cout << "Level: " << left << setw(6); cout << hero_player.level;
    cout << "Exp: " << left << setw(7); cout << hero_player.exp;
    cout << "Weapon: " << left << setw(10); cout << hero_weapon.name;
    cout << "Armor: " << left << setw(10); cout << hero_armor.name << endl;
    cout << "Gold: " << left << setw(7); Color(14); cout << hero_player.gold; Color(7);
    cout << "Essence: " << left << setw(4); Color(10); cout << hero_player.essence; Color(7);
    cout << "Heals: " << left << setw(5); Color(9); cout << hero_player.flask; Color(7);
    cout << "Trinket: " << left << setw(9); Color(5);
    if (hero_player.trinket == 0) { cout << "NONE"; }
    if (hero_player.trinket == 1) { cout << "FOOT"; }
    if (hero_player.trinket == 2) { cout << "TALON"; }
    if (hero_player.trinket == 21) { cout << "NECKLACE"; }
    if (hero_player.trinket == 22) { cout << "EFFEGY"; }
    if (hero_player.trinket == 23) { cout << "BLOOD"; }
    if (hero_player.trinket == 24) { cout << "TEAR"; }
    Color(7);
    cout << "Prisms: ";
    if (prism_red == true) { Color(4); cout << "*"; }
    if (prism_blue == true) { Color(9); cout << "*"; }
    if (prism_purple == true) { Color(5); cout << "*"; }
    if (prism_yellow == true) { Color(6); cout << "*"; }
    if (prism_shimmering == true) { Color(15); cout << "*"; }
    Color(7);
        
    cout << endl; Color(7);
    int bar; for (bar=0;bar<70;bar++){cout<<"-";} cout << endl;
}