#include "../headers/functions.h"

void show_statbar()
{
    
    int bar1; for (bar1=0;bar1<70;bar1++){cout<<"-";} cout << endl;
    cout << left << setw(13); cout << hero_player.name; 
    cout << "Level:" << left << setw(7); cout << hero_player.level;
    cout << "Exp:" << left << setw(8); cout << hero_player.exp;
    cout << "Weapon:" << left << setw(11); Color(14); cout << hero_weapon.name; Color(7);
    cout << "Armor:" << left << setw(10); Color(14); cout << hero_armor.name; Color(7); cout << endl;
    cout << "Gold:" << left << setw(8); Color(14); cout << hero_player.gold; Color(7);
    cout << "Ess:" << left << setw(9); Color(10); cout << hero_player.essence; Color(7);
    cout << "Heals:" << left << setw(6); Color(9); cout << hero_player.flask; Color(7);
    cout << "Trinket:" << left << setw(10); Color(5);
    if (hero_player.trinket == 0) { cout << "NONE"; }
    if (hero_player.trinket == 1) { cout << "FOOT"; }
    if (hero_player.trinket == 2) { cout << "TALON"; }
    if (hero_player.trinket == 3) { cout << "PENTAGRAM"; }
    if (hero_player.trinket == 4) { cout << "CALTROPS"; }
    //if (hero_player.trinket == 21) { cout << "NECKLACE"; }
    //if (hero_player.trinket == 22) { cout << "EFFEGY"; }
    //if (hero_player.trinket == 23) { cout << "BLOOD"; }
    //if (hero_player.trinket == 24) { cout << "TEAR"; }
    Color(7);
    cout << "Prisms:";
    if (prism_red == true) { Color(4); cout << "*"; }
    if (prism_blue == true) { Color(9); cout << "*"; }
    if (prism_purple == true) { Color(5); cout << "*"; }
    if (prism_yellow == true) { Color(6); cout << "*"; }
    if (prism_shimmering == true) { Color(15); cout << "*"; }
    Color(7);  
    cout << endl; Color(7);
    cout << "HP:" << right << setw(4);
    int hppercent = static_cast<int>(100 * round(hero_player.hp) / round(hero_player.hp_max));
    if (hppercent >= 75) { Color(7); }
    if (hppercent < 75 and hppercent >40) { Color(14); }
    if (hppercent <= 40) { Color(4); }
    cout << hero_player.hp; Color(7);
    cout << "/" << left << setw(4) << hero_player.hp_max << " ----";
    if (hero_player.stat == 2) { Color(10); cout << ">>>POISONED<<<";Color(7); }
    if (hero_player.stat != 2) { cout << "--------------"; }
    int bar; for (bar=0;bar<39;bar++){cout<<"-";};
    cout << endl << endl;
}