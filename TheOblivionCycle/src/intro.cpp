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
	storytext = "                                                     ~ H.P. Lovercraft";
	typer(storytext, 30);
	Sleep(4000);
	
	ShowConsoleCursor(true);
	return;
}