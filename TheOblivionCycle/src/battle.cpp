#include "../headers/functions.h"

void battle_sim(monster enemy)
{
	print_preparecombat();
	Sleep(2000);
	
	system("cls");
	// Battle Strings
	string hero_combat_string = "Ready for combat.";
	string enemy_combat_string = "Ready for combat.";

	// Define Enemy
	// monster enemy = zombie;

	// Combat Active
	bool endcombat = false;
	extern int exit_mode;
	exit_mode = 0;
	// VARS for Battle System
	int hppercent;
	int hppercent_e;
	string hp_bar = "";
	string ehp_bar = "";
	string hero_line2 = "";
	string enemy_line2 = "";
	int bar_ticks = 0;
	int ebar_ticks = 0;
	int skip_hero_atk = 0;
	int heal_run = 0;

	// DICE Vars
	int dice_i = 0;
	int sides_i = 0;
	int hero_final = 0;
	int hero_crit = 0;
	int hero_total_atk = 0;
	int enemy_total_atk = 0;

	// Battle Loop
	int loop = 0;
	while (loop != 1)
	{
		if (exit_mode == 1) 
		{ 
			cout << endl << "You can not exit during a battle!" << endl;
			Sleep(2000);
		}
		system("cls");

		//Hero Display
		cout << "Hero" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << "\nName: " << hero_player.name << "    " << "Level: " << hero_player.level << "    ";
		cout << "Weapon: " << hero_weapon.name << "    " << "Armor: " << hero_armor.name << endl;

		hppercent = static_cast<int>(100 * round(hero_player.hp) / round(hero_player.hp_max));

		cout << left << setw(4); cout << "HP: " << right << setw(4); cout << hero_player.hp << "/" 
			 << left << setw(4); cout << hero_player.hp_max << "[";
		
		// Print Hero HPbar
		hp_bar = "";
		bar_ticks += hppercent / 4;
		while (bar_ticks > 0)
		{
			hp_bar += "#";
			bar_ticks -= 1;
		}
		hero_line2 = hp_bar;
		if (hppercent >= 75) { Color(2); cout << left << setw(25); cout << hero_line2; Color(7); cout << "] "; }
		if (hppercent < 75 and hppercent >40) { Color(14); cout << left << setw(25); cout << hero_line2; Color(7); cout << "] "; }
		if (hppercent <= 40) { Color(4); cout << left << setw(25); cout << hero_line2; Color(7); cout << "] "; }

		if (hppercent >= 75) { Color(2); cout << right << setw(3); cout << hppercent << "%"; Color(7); cout << "    "; }
		if (hppercent < 75 and hppercent > 40) { Color(14); cout << right << setw(3); cout << hppercent << "%"; Color(7); cout << "    "; }
		if (hppercent <= 40) { Color(4); cout << right << setw(3); cout << hppercent << "%"; Color(7); cout << "    "; }

		cout << endl << endl;

		//Enemy Display
		cout << "Enemy" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << "\nName: " << enemy.name << "    " << "Level: " << enemy.level << endl;

		hppercent_e = static_cast<int>(100 * round(enemy.hp) / round(enemy.hp_max));

		cout << left << setw(4); cout << "HP: " << right << setw(4); cout << enemy.hp << "/"
			<< left << setw(4); cout << enemy.hp_max << "[";

		// Print Enemy HPbar
		ehp_bar = "";
		ebar_ticks += hppercent_e / 4;
		while (ebar_ticks > 0)
		{
			ehp_bar += "#";
			ebar_ticks -= 1;
		}
		enemy_line2 = ehp_bar;
		if (hppercent_e >= 75) { Color(2); cout << left << setw(25); cout << enemy_line2; Color(7); cout << "] "; }
		if (hppercent_e < 75 and hppercent_e >40) { Color(14); cout << left << setw(25); cout << enemy_line2; Color(7); cout << "] "; }
		if (hppercent_e <= 40) { Color(4); cout << left << setw(25); cout << enemy_line2; Color(7); cout << "] "; }
		
		if (hppercent_e >= 75) { Color(2); cout << right << setw(3); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		if (hppercent_e < 75 and hppercent_e > 40) { Color(14); cout << right << setw(3); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		if (hppercent_e <= 40) { Color(4); cout << right << setw(3); cout << hppercent_e << "%"; Color(7); cout << "    "; }

		cout << endl << endl;

		// Battle Log
		cout << "Battle Log" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << endl;
		Color(2); cout << hero_player.name << ": "; Color(7); cout <<  hero_combat_string << endl;
		Color(4); cout << enemy.name << ": "; Color(7); cout << enemy_combat_string << endl << endl;
		
		if (endcombat == true) 
		{ 
			player_death();
			loop = 1; 
		}

		else
		{
			cout << "Actions" << endl;
			
			cout << "[1] Attack" << endl;
			if (hero_player.level > 1)
			{
				cout << "--> Cast [a] "; Color(9);
				if (heal.ready == 1) { cout << heal.name; }
				if (cure.ready == 1) { cout << cure.name; }
				if (conjure_elixer.ready == 1) { cout << conjure_elixer.name; }
				if (magic_missle.ready == 1) { cout << magic_missle.name; }
				Color(7);cout << " [b] ";Color(9);
				if (greater_heal.ready == 1) { cout << greater_heal.name; }
				if (barrier.ready == 1) { cout << barrier.name; }
				if (escape.ready == 1) { cout << escape.name; }
				if (fireball.ready == 1) { cout << fireball.name; }
				Color(7);cout << " [c] ";Color(9);
				if (regeneration.ready == 1) { cout << regeneration.name; }
				if (holy_ground.ready == 1) { cout << holy_ground.name; }
				if (doubleme.ready == 1) { cout << doubleme.name; }
				if (immolation.ready == 1) { cout << immolation.name; }
				Color(7);cout << endl;
			}



			cout << "[2] Use Flask [";
			
			int temp_health = hero_player.flask;
			string temp_flask = "";
			while(temp_health > 0)
			{
				temp_flask += "#";
				temp_health -= 1;
			}
			cout << left << setw(3); Color(2); cout << temp_flask; Color(7); cout << "]" << endl;
			cout << "[0] Run" << endl;
						
			cout << endl;
		}
		
		skip_hero_atk = 0;
		heal_run = 0;

		string ans;
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));  // Flush Console input while Sleeping
		ans = _getch();
		
		// Delaying for Time Randomizer
		if (ans == "1") { cout << "Player Attacks..."; }
		if (hero_player.level > 1)
		{
			if (ans == "a" or ans == "b" or ans == "c") { cout << "Player Casts Spell..."; }
		}
		if (ans == "2") { cout << "Player Attempts to Heal..."; }
		if (ans == "0") { cout << "Player Attempts to Run..."; }
		Sleep(1000); // Delay 1 second

		if (ans == "0")
		{
			skip_hero_atk = 1;
			heal_run = 2;
			ans = "1";
			srand((unsigned)time(NULL));
			int runroll = (rand() % 4) + 1;
			if (runroll == 4) { loop = 1; }
		}

		if (ans == "2")
		{
			skip_hero_atk = 1;
			heal_run = 1;
			ans = "1";
			
			if (hero_player.flask == 0) 
			{
				hero_player.flask = 0;
			}
			
			if (hero_player.hp == hero_player.hp_max)
			{
				hero_player.flask = hero_player.flask;
			}
			if (hero_player.flask != 0 and hero_player.hp != hero_player.hp_max)
			{
				hero_player.hp += int(round(hero_player.hp_max * .75)) + 1;
				if (hero_player.hp > hero_player.hp_max)
				{
					hero_player.hp = hero_player.hp_max;
				}
				hero_player.flask -= 1;
			}
		}


		if (ans == "\033")
		{
			info_screen();
		}

		if (ans == "1") // Round Start
		{
			// HERO TURN
			string dice; dice = hero_weapon.damage[0]; dice_i = stoi(dice); // # of dice
			string sides; sides = hero_weapon.damage[2]; sides_i = stoi(sides); // # of sides

			int total = 0;

			// Crit role
			int	crit = 0;
			srand((unsigned)time(NULL));
			int critroll = (rand() % 20) + 1;
			if (critroll >= 20 - hero_player.luck) { crit = 1; } //crit
			else if (critroll == 1) { crit = 2; } //miss
			else { crit = 0; } // normal

			// Dice Roll
			int final = 0;
			for (int i = 0; i < dice_i; ++i)
			{
				srand((unsigned)time(NULL));
				int roll = (rand() % sides_i) + 1;
				final += roll;
				roll = 0;
			}

			// add modifiers
			if (crit == 1)
			{
				total = (final * hero_player.prof) * 2;
			}
			else if (crit == 2)
			{
				total = 0;
			}
			else
			{
				total = (final * hero_player.prof);
			}
			hero_final = final;
			hero_crit = crit;
			hero_total_atk = total;

			//trinket_run(hero_total_atk, hero_trinket);

			if (skip_hero_atk == 0)
			{
				enemy.hp -= hero_total_atk;

				if (enemy.hp <= 0)
				{
					enemy.hp = 0;
					hero_combat_string = "hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage, and kills it!";

					loot(enemy); // calls loot function
					break;
				}
				else
				{

					if (crit == 1)
					{
						hero_combat_string = "hits *Critical* " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage.";
					}
					if (crit == 0)
					{
						hero_combat_string = "hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage.";
					}
					if (crit == 2)
					{
						hero_combat_string = "misses " + enemy.name + ".";
					}

				}
			}
			else 
			{	
				if (heal_run == 1){ hero_combat_string = "takes a sip from the Celestial Flask!"; }
				if (heal_run == 2){ hero_combat_string = "attempts to run, but fails."; }
			}


			// ENEMY TURN
			
			if (enemy.hp == 0) 
			{
				enemy_combat_string = "has been killed.";
				endcombat = true;
			}
			
			dice = enemy.damage[0]; dice_i = stoi(dice); // # of dice
			sides = enemy.damage[2]; sides_i = stoi(sides); // # of sides

			total = 0;

			// Crit role
			crit = 0;
			srand((unsigned)time(NULL));
			critroll = (rand() % 20) + 1;
			if (critroll >= 20 - enemy.luck) { crit = 1; } //crit
			else if (critroll == 1) { crit = 2; } //miss
			else { crit = 0; } // normal

			// Dice Roll
			final = 0;
			for (int i = 0; i < dice_i; ++i)
			{
				srand((unsigned)time(NULL));
				int roll = (rand() % sides_i) + 1;
				final += roll;
				roll = 0;
			}

			// add modifiers
			if (crit == 1)
			{ 
				total = (final * enemy.prof) * 2;
			}
			else if (crit == 2)
			{
				total = 0;
			}
			else
			{
				total = (final * enemy.prof);
			}

			enemy_total_atk = total;

			hero_player.hp -= enemy_total_atk;

			if (hero_player.hp <= 0)
			{
				hero_player.hp = 0;
				enemy_combat_string = "hits you for " + to_string(enemy_total_atk) + " damage, and kills you!";
				endcombat = true;
			}
			else
			{

				if (crit == 1)
				{
					enemy_combat_string = "hits *Critical* you for " + to_string(enemy_total_atk) + " damage.";
				}
				if (crit == 0)
				{
					enemy_combat_string = "hits you for " + to_string(enemy_total_atk) + " damage.";
				}
				if (crit == 2)
				{
					enemy_combat_string = "misses you.";
				}

			}


		}


	}

	return;
}

void loot(monster enemy)
{
	int old_level = 0;
	bool diplay_levelup = false;

	system("cls");
	hero_player.exp += enemy.exp;  // gives exp to player
	hero_player.essence += enemy.essence; // gives essence to player

	//money roller
	int money_roll = 0;
	int money_gained = 0;
	srand((unsigned)time(NULL));
	money_roll = 5 + rand() % 10 + 1;
	money_gained = enemy.level * money_roll;
	hero_player.gold += money_gained; // Show me the money!!!

	//check level
	old_level = hero_player.level;
	checklevelup();
	if (old_level < hero_player.level) { diplay_levelup = true; }


	cout << "*** "; Color(10); cout << "Victory!"; Color(7); cout << " ***" << endl << endl;
	cout << "---EARNED-------" << endl;
	Color(10); cout << enemy.exp; Color(7); cout << " Experience" << endl;
	Color(9); cout << enemy.essence; Color(7); cout << " Essence" << endl;
	Color(14); cout << money_gained; Color(7); cout << " Gold" << endl;

	if (diplay_levelup == true)
	{
		cout << "\n---"; Color(10); cout << "PROMOTED"; Color(7); cout << "------" << endl;
		cout << "Congratulations you are now level "; Color(14); cout << hero_player.level << endl; Color(7);
		cout << "Hit Points raised to "; Color(12);cout << hero_player.hp_max << endl;

		Color(7);
	}

	cout << endl;
	system("pause");
	
	return;
}

void player_death()
{
	system("cls");
	int hero_gold_before = hero_player.gold;
	hero_player.gold = 0;
	int temp_exp_loss = 0;
	int hero_exp_before = hero_player.exp;

	temp_exp_loss = static_cast<int>(hero_player.exp * .25);
	if (min_exp >= (hero_player.exp - temp_exp_loss)) { hero_player.exp = min_exp; }
	if (min_exp < (hero_player.exp - temp_exp_loss)) { hero_player.exp -= temp_exp_loss; }
	
	hero_player.hp = hero_player.hp_max;
	hero_player.flask = 3;
	
	cout << "You have died!" << endl << endl;
	cout << "You have dropped " << hero_gold_before << " gold..." << endl;
	cout << "Your lost " << hero_exp_before - hero_player.exp << " experience points..." << endl << endl;
	cout << "Press any key..." << endl;
}