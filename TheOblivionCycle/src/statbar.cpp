#include "../headers/functions.h"

void show_statbar(string name, int level, int exp, string weapon, string armor)
{
    
    int bar1; for (bar1=0;bar1<70;bar1++){cout<<"-";} cout << endl;
    cout << left << setw(13); cout << name; 
    cout << "Level: " << left << setw(6); cout << level;
    cout << "Exp: " << left << setw(7); cout << exp;
    cout << "Weapon: " << left << setw(10); cout << weapon; 
    cout << "Armor: " << left << setw(10); cout << armor << endl; 
    cout << "Gold: " << left << setw(7); Color(14); cout << hero_player.gold; Color(7);
    cout << "Essence: " << left << setw(4); Color(10); cout << hero_player.essence; Color(7);
    cout << "Heals: " << left << setw(5); Color(9); cout << hero_player.flask; Color(7);
    cout << "Trinket: " << left << setw(10);
    if (hero_player.trinket == 0) { cout << "None"; }
    if (hero_player.trinket == 1) { cout << "Rabbit Foot"; }
    if (hero_player.trinket == 2) { cout << "Dragon Talon"; }
    if (hero_player.trinket == 21) { cout << "Azure Necklace"; }
    if (hero_player.trinket == 22) { cout << "Witch Effegy"; }
    if (hero_player.trinket == 23) { cout << "Vial of Blood"; }
    if (hero_player.trinket == 24) { cout << "Frozen Tear"; }
        
    cout << endl;
    int bar; for (bar=0;bar<70;bar++){cout<<"-";} cout << endl;
}