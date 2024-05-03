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
	print_title();
	string titletext = "				Part I: The Shimmering Gate";
	typer(titletext, 100);
	Sleep(4000);

	string storytext = "\n\nOur story begins in a kingdom just south of the mighty river Hyatin,\n";
	typer(storytext, 50);
	storytext = "known for its production of a special mineral name Shieya.\n\n";
	typer(storytext, 50);
	Sleep(1000);
	storytext = "This mineral has an unique property that many nations seek, and is coveted beyond\n";
	typer(storytext, 50);
	storytext = "measure to the point where many are willing to kill for it.\n\n";
	typer(storytext, 50);
	Sleep(1000);
	storytext = "In these trying times a hero emerges....";
	typer(storytext, 50);
	Sleep(4000);
	
	ShowConsoleCursor(true);
	return;
}