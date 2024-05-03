void show_statbar(string name, int level, int exp, string weapon, string armor)
{
    
    int bar1; for (bar1=0;bar1<75;bar1++){cout<<"-";} cout << endl;
    cout << name; cout << "   Level: "; cout << level; 
    cout << "   Exp: "; cout << exp; cout << "   Weapon: ";
    cout << weapon; cout << "   Armor: "; cout << armor; 
    cout << "   Gold: " << hero_player.gold << endl;
    int bar; for (bar=0;bar<75;bar++){cout<<"-";} cout << endl;
}