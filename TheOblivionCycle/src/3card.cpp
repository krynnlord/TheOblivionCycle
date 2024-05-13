#include "../headers/functions.h"

string line21 = R"( _____ )";
string line22 = R"(|2    |)";
string line23 = R"(|  o  |)";
string line24 = R"(|     |)";
string line25 = R"(|  o  |)";
string line26 = R"(|____2|)";

string line31 = R"( _____ )";
string line32 = R"(|3    |)";
string line33 = R"(| o o |)";
string line34 = R"(|     |)";
string line35 = R"(|  o  |)";
string line36 = R"(|____3|)";

string line41 = R"( _____ )";
string line42 = R"(|4    |)";
string line43 = R"(| o o |)";
string line44 = R"(|     |)";
string line45 = R"(| o o |)";
string line46 = R"(|____4|)";

string line51 = R"( _____ )";
string line52 = R"(|5    |)";
string line53 = R"(| o o |)";
string line54 = R"(|  o  |)";
string line55 = R"(| o o |)";
string line56 = R"(|____5|)";

string line61 = R"( _____ )";
string line62 = R"(|6    |)";
string line63 = R"(| o o |)";
string line64 = R"(| o o |)";
string line65 = R"(| o o |)";
string line66 = R"(|____6|)";

string line71 = R"( _____ )";
string line72 = R"(|7    |)";
string line73 = R"(| o o |)";
string line74 = R"(|o o o|)";
string line75 = R"(| o o |)";
string line76 = R"(|____7|)";

string line81 = R"( _____ )";
string line82 = R"(|8    |)";
string line83 = R"(|o o o|)";
string line84 = R"(| o o |)";
string line85 = R"(|o o o|)";
string line86 = R"(|____8|)";

string line91 = R"( _____ )";
string line92 = R"(|9    |)";
string line93 = R"(|o o o|)";
string line94 = R"(|o o o|)";
string line95 = R"(|o o o|)";
string line96 = R"(|____9|)";

string line101 = R"( _____ )";
string line102 = R"(|10 o |)";
string line103 = R"(|o o o|)";
string line104 = R"(|o o o|)";
string line105 = R"(|o o o|)";
string line106 = R"(|___10|)";

void printroll(int roll1, int roll2, int roll3)
{
	// First Line
	Color(15);
	if (roll1 == 2) { cout << line21 << " "; }
	if (roll1 == 3) { cout << line31 << " "; }
	if (roll1 == 4) { cout << line41 << " "; }
	if (roll1 == 5) { cout << line51 << " "; }
	if (roll1 == 6) { cout << line61 << " "; }
	if (roll1 == 7) { cout << line71 << " "; }
	if (roll1 == 8) { cout << line81 << " "; }
	if (roll1 == 9) { cout << line91 << " "; }
	if (roll1 == 10) { cout << line101 << " "; }

	if (roll2 == 2) { cout << line21 << " "; }
	if (roll2 == 3) { cout << line31 << " "; }
	if (roll2 == 4) { cout << line41 << " "; }
	if (roll2 == 5) { cout << line51 << " "; }
	if (roll2 == 6) { cout << line61 << " "; }
	if (roll2 == 7) { cout << line71 << " "; }
	if (roll2 == 8) { cout << line81 << " "; }
	if (roll2 == 9) { cout << line91 << " "; }
	if (roll2 == 10) { cout << line101 << " "; }

	if (roll3 == 2) { cout << line21 << endl; }
	if (roll3 == 3) { cout << line31 << endl; }
	if (roll3 == 4) { cout << line41 << endl; }
	if (roll3 == 5) { cout << line51 << endl; }
	if (roll3 == 6) { cout << line61 << endl; }
	if (roll3 == 7) { cout << line71 << endl; }
	if (roll3 == 8) { cout << line81 << endl; }
	if (roll3 == 9) { cout << line91 << endl; }
	if (roll3 == 10) { cout << line101 << endl; }

	// Second Line
	if (roll1 == 2) { cout << line22 << " "; }
	if (roll1 == 3) { cout << line32 << " "; }
	if (roll1 == 4) { cout << line42 << " "; }
	if (roll1 == 5) { cout << line52 << " "; }
	if (roll1 == 6) { cout << line62 << " "; }
	if (roll1 == 7) { cout << line72 << " "; }
	if (roll1 == 8) { cout << line82 << " "; }
	if (roll1 == 9) { cout << line92 << " "; }
	if (roll1 == 10) { cout << line102 << " "; }

	if (roll2 == 2) { cout << line22 << " "; }
	if (roll2 == 3) { cout << line32 << " "; }
	if (roll2 == 4) { cout << line42 << " "; }
	if (roll2 == 5) { cout << line52 << " "; }
	if (roll2 == 6) { cout << line62 << " "; }
	if (roll2 == 7) { cout << line72 << " "; }
	if (roll2 == 8) { cout << line82 << " "; }
	if (roll2 == 9) { cout << line92 << " "; }
	if (roll2 == 10) { cout << line102 << " "; }

	if (roll3 == 2) { cout << line22 << endl; }
	if (roll3 == 3) { cout << line32 << endl; }
	if (roll3 == 4) { cout << line42 << endl; }
	if (roll3 == 5) { cout << line52 << endl; }
	if (roll3 == 6) { cout << line62 << endl; }
	if (roll3 == 7) { cout << line72 << endl; }
	if (roll3 == 8) { cout << line82 << endl; }
	if (roll3 == 9) { cout << line92 << endl; }
	if (roll3 == 10) { cout << line102 << endl; }

	// Third Line
	if (roll1 == 2) { cout << line23 << " "; }
	if (roll1 == 3) { cout << line33 << " "; }
	if (roll1 == 4) { cout << line43 << " "; }
	if (roll1 == 5) { cout << line53 << " "; }
	if (roll1 == 6) { cout << line63 << " "; }
	if (roll1 == 7) { cout << line73 << " "; }
	if (roll1 == 8) { cout << line83 << " "; }
	if (roll1 == 9) { cout << line93 << " "; }
	if (roll1 == 10) { cout << line103 << " "; }

	if (roll2 == 2) { cout << line23 << " "; }
	if (roll2 == 3) { cout << line33 << " "; }
	if (roll2 == 4) { cout << line43 << " "; }
	if (roll2 == 5) { cout << line53 << " "; }
	if (roll2 == 6) { cout << line63 << " "; }
	if (roll2 == 7) { cout << line73 << " "; }
	if (roll2 == 8) { cout << line83 << " "; }
	if (roll2 == 9) { cout << line93 << " "; }
	if (roll2 == 10) { cout << line103 << " "; }

	if (roll3 == 2) { cout << line23 << endl; }
	if (roll3 == 3) { cout << line33 << endl; }
	if (roll3 == 4) { cout << line43 << endl; }
	if (roll3 == 5) { cout << line53 << endl; }
	if (roll3 == 6) { cout << line63 << endl; }
	if (roll3 == 7) { cout << line73 << endl; }
	if (roll3 == 8) { cout << line83 << endl; }
	if (roll3 == 9) { cout << line93 << endl; }
	if (roll3 == 10) { cout << line103 << endl; }

	// Fourth Line
	if (roll1 == 2) { cout << line24 << " "; }
	if (roll1 == 3) { cout << line34 << " "; }
	if (roll1 == 4) { cout << line44 << " "; }
	if (roll1 == 5) { cout << line54 << " "; }
	if (roll1 == 6) { cout << line64 << " "; }
	if (roll1 == 7) { cout << line74 << " "; }
	if (roll1 == 8) { cout << line84 << " "; }
	if (roll1 == 9) { cout << line94 << " "; }
	if (roll1 == 10) { cout << line104 << " "; }

	if (roll2 == 2) { cout << line24 << " "; }
	if (roll2 == 3) { cout << line34 << " "; }
	if (roll2 == 4) { cout << line44 << " "; }
	if (roll2 == 5) { cout << line54 << " "; }
	if (roll2 == 6) { cout << line64 << " "; }
	if (roll2 == 7) { cout << line74 << " "; }
	if (roll2 == 8) { cout << line84 << " "; }
	if (roll2 == 9) { cout << line94 << " "; }
	if (roll2 == 10) { cout << line104 << " "; }

	if (roll3 == 2) { cout << line24 << endl; }
	if (roll3 == 3) { cout << line34 << endl; }
	if (roll3 == 4) { cout << line44 << endl; }
	if (roll3 == 5) { cout << line54 << endl; }
	if (roll3 == 6) { cout << line64 << endl; }
	if (roll3 == 7) { cout << line74 << endl; }
	if (roll3 == 8) { cout << line84 << endl; }
	if (roll3 == 9) { cout << line94 << endl; }
	if (roll3 == 10) { cout << line104 << endl; }

	// Fifth Line
	if (roll1 == 2) { cout << line25 << " "; }
	if (roll1 == 3) { cout << line35 << " "; }
	if (roll1 == 4) { cout << line45 << " "; }
	if (roll1 == 5) { cout << line55 << " "; }
	if (roll1 == 6) { cout << line65 << " "; }
	if (roll1 == 7) { cout << line75 << " "; }
	if (roll1 == 8) { cout << line85 << " "; }
	if (roll1 == 9) { cout << line95 << " "; }
	if (roll1 == 10) { cout << line105 << " "; }

	if (roll2 == 2) { cout << line25 << " "; }
	if (roll2 == 3) { cout << line35 << " "; }
	if (roll2 == 4) { cout << line45 << " "; }
	if (roll2 == 5) { cout << line55 << " "; }
	if (roll2 == 6) { cout << line65 << " "; }
	if (roll2 == 7) { cout << line75 << " "; }
	if (roll2 == 8) { cout << line85 << " "; }
	if (roll2 == 9) { cout << line95 << " "; }
	if (roll2 == 10) { cout << line105 << " "; }

	if (roll3 == 2) { cout << line25 << endl; }
	if (roll3 == 3) { cout << line35 << endl; }
	if (roll3 == 4) { cout << line45 << endl; }
	if (roll3 == 5) { cout << line55 << endl; }
	if (roll3 == 6) { cout << line65 << endl; }
	if (roll3 == 7) { cout << line75 << endl; }
	if (roll3 == 8) { cout << line85 << endl; }
	if (roll3 == 9) { cout << line95 << endl; }
	if (roll3 == 10) { cout << line105 << endl; }

	// Sixth Line
	if (roll1 == 2) { cout << line26 << " "; }
	if (roll1 == 3) { cout << line36 << " "; }
	if (roll1 == 4) { cout << line46 << " "; }
	if (roll1 == 5) { cout << line56 << " "; }
	if (roll1 == 6) { cout << line66 << " "; }
	if (roll1 == 7) { cout << line76 << " "; }
	if (roll1 == 8) { cout << line86 << " "; }
	if (roll1 == 9) { cout << line96 << " "; }
	if (roll1 == 10) { cout << line106 << " "; }

	if (roll2 == 2) { cout << line26 << " "; }
	if (roll2 == 3) { cout << line36 << " "; }
	if (roll2 == 4) { cout << line46 << " "; }
	if (roll2 == 5) { cout << line56 << " "; }
	if (roll2 == 6) { cout << line66 << " "; }
	if (roll2 == 7) { cout << line76 << " "; }
	if (roll2 == 8) { cout << line86 << " "; }
	if (roll2 == 9) { cout << line96 << " "; }
	if (roll2 == 10) { cout << line106 << " "; }

	if (roll3 == 2) { cout << line26 << endl; }
	if (roll3 == 3) { cout << line36 << endl; }
	if (roll3 == 4) { cout << line46 << endl; }
	if (roll3 == 5) { cout << line56 << endl; }
	if (roll3 == 6) { cout << line66 << endl; }
	if (roll3 == 7) { cout << line76 << endl; }
	if (roll3 == 8) { cout << line86 << endl; }
	if (roll3 == 9) { cout << line96 << endl; }
	if (roll3 == 10) { cout << line106 << endl; }
	Color(7);
}

void gambling()
{

	string ans;
	system("cls");


	int i = 0;
	int b = 0;
	int money = 100;


	int roll1;
	int roll2;
	int roll3;

	while (i == 0)
	{
		
		int dontrun = 0;
		int bet = 0;
		int result = 0;
		int fakemoney = 0;
		b = 0;
		while (b == 0)
		{
			dontrun = 1;
			bet = 0;
			print_gambling();
			cout << "\nGold: " << left << setw(8); cout << hero_player.gold << " [0] Back" << endl << endl;
			cout << "[1]  10 GOLD   [5]  200 GOLD" << endl;
			cout << "[2]  20 GOLD   [6]  300 GOLD" << endl;
			cout << "[3]  50 GOLD   [7]  500 GOLD" << endl;
			cout << "[4] 100 GOLD   [8] 1000 GOLD" << endl;

			ans = _getch();
			if (ans == "1") { bet = 10; dontrun = 0; }
			if (ans == "2") { bet = 20; dontrun = 0;}
			if (ans == "3") { bet = 50; dontrun = 0;}
			if (ans == "4") { bet = 100; dontrun = 0;}
			if (ans == "5") { bet = 200; dontrun = 0;}
			if (ans == "6") { bet = 300; dontrun = 0;}
			if (ans == "7") { bet = 500; dontrun = 0;}
			if (ans == "8") { bet = 1000; dontrun = 0;}
			if (ans == "0" or ans == "\033") { return; }
			

			if (dontrun == 0)
			{
				fakemoney = hero_player.gold;
				result = fakemoney -= bet;

				if (result < 0)
				{
					cout << "You can't afford that!"; Sleep(4000);
					b = 1;
				}
				else
				{
					cout << "\nBetting " << bet << " gold. Good Luck!";
					hero_player.gold -= bet;

					b = 1;

					roll1 = 0;
					roll2 = 0;
					roll3 = 0;

					int rollresult = 0;

					srand((unsigned)time(NULL));
					rollresult = 2 + rand() % 8 + 1;
					roll1 = rollresult;
					Sleep(1000);
					rollresult = 2 + rand() % 8 + 1;
					roll2 = rollresult;
					Sleep(1000);
					rollresult = 2 + rand() % 8 + 1;
					roll3 = rollresult;

					cout << endl;

					printroll(roll1, roll2, roll3);

					cout << endl;

					if (roll1 == roll2 == roll3)
					{
						cout << "Triple! You won big!! ";
						hero_player.gold += bet;
						bet *= 3;
						hero_player.gold += bet;
						Sleep(3000);
					}


					if (roll1 == roll2 or roll1 == roll3 or roll2 == roll3)
					{
						cout << "Double! Your a winner!! ";
						hero_player.gold += bet;
						bet *= 2;
						hero_player.gold += bet;
						Sleep(3000);
					}

					else
					{
						cout << "You lose!";
						Sleep(2000);
					}


				}
			}

		}

	}

}