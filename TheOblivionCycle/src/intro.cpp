#include "../headers/functions.h"

void intro()
{
	ShowConsoleCursor(false);
	system("cls");
	Sleep(2000);
	print_rlm();
	string rlmtext = "					    	     presents an original game";
	typer(rlmtext, 100);
	Sleep(4000);

	//system("cls");
	//cout << "Skip Intro? (Y/N)";
	//string ans;
	//ans = _getch();
	//if (ans == "y" or ans == "Y") { return; }
	
	system("cls");
	string storytext = "\n\n     The most merciful thing in the world, I think, is the inability \n";
	typer(storytext, 30);
	storytext = "     of the human mind to correlate all its contents.\n\n";
	typer(storytext, 30);
	Sleep(1000);
	storytext = "     We live on a placid island of ignorance in the midst of black seas\n";
	typer(storytext, 30);
	storytext = "     of the infinity, and it was not meant that we should voyage far.\n\n";
	typer(storytext, 30);
	Sleep(1000);
	storytext = "                                                     ~ H.P. Lovecraft";
	typer(storytext, 30);
	Sleep(4000);
	
	print_intro_castle();
	Sleep(1000);
	storytext = "\n\n     Astoria. Once a land of peace and prosperity has fallen under an evil \n";
	typer(storytext, 30);
	storytext = "     plague. The land has been overrun with monsters, which are spewing from a \n";
	typer(storytext, 30);
	storytext = "     red gate which has suddenly appeared in the most sacred of places,\n";
	typer(storytext, 30);
	storytext = "     the circle of stones.\n";
	typer(storytext, 30);
	Sleep(1000);
	storytext = "\n\n     Your story begins at the request of the king. You are to report to him\n";
	typer(storytext, 30);
	storytext = "     as soon as you arrive...\n";
	typer(storytext, 30);
	Sleep(4000);

	ShowConsoleCursor(true);
	return;
}

void credits()
{
	ShowConsoleCursor(false);
	system("cls");
	Sleep(2000);
	print_title();
	Sleep(4000);

	string storytext = "Thank you for playing The Oblivion Cycle\n\n";
	typer(storytext, 30);
	storytext = "Credits:\n\n";
	typer(storytext, 30);
	Sleep(1000);
	storytext = "Game Design: Richard Miller\n";
	typer(storytext, 30);
	Sleep(1000);
	storytext = "Music: Richard Miller\n";
	typer(storytext, 30);
	Sleep(1000);
	storytext = "Artwork: Richard Miller and the internet\n";
	typer(storytext, 30);
	Sleep(4000);

	ShowConsoleCursor(true);
	return;
}