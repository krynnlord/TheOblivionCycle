#include "../headers/functions.h"

void CreateHero()
{
string newname;
ShowConsoleCursor(true);
cout << "\nEnter Name: "; cin >> newname;
newname = newname.substr(0, 10);
ShowConsoleCursor(false);
string warning = "WARNING!!! ";
string warning2 = "Are you sure you want to start over as "+ newname +"? (y/n)";
Color(4); typer(warning, 25); Color(7);
typer(warning2, 25);

int i=0;
string ans = "";
while (i==0)
{
ans = _getch();

if (ans == "N" or ans =="n") { i=1; }

if (ans == "Y" or ans =="y")
{
// name, hp, hp_max, luck, level, prof, exp, stat, gold, trinket, quest_level, essence, flask;
hero_player = { newname, 100, 100, 0, 1, 2, 0, 1, 0, 0, 0, 0, 3};
hero_armor = tunic;
hero_weapon = hands;

string complete= "\nNew Character Created!";
typer(complete, 25);
Sleep(3000);
i = 1;
}
}

}