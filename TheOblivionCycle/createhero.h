void CreateHero()
{
string newname;
ShowConsoleCursor(true);
cout << "\nEnter Name: "; cin >> newname;
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
hero_player = { newname, 100, 100, 0, 0, 0, 0, 1, 2, 0, 1, 2};
hero_armor = tunic;
hero_weapon = hands;

string complete= "\nNew Character Created!";
typer(complete, 25);
Sleep(3);
i = 1;
}
}

}