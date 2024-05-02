void battle_sim()
{
	// Battle Strings
	string hero_combat_string = "Ready for combat.";
	string enemy_combat_string = "Ready for combat.";

	// Define Enemy
	monster enemy = zombie2;

	// Combat Active
	bool endcombat = false;

	// VARS for Battle System
	int hppercent;
	int hppercent_e;
	string hp_bar = "";
	string ehp_bar = "";
	string hero_line2 = "";
	string enemy_line2 = "";
	int bar_ticks = 0;
	int ebar_ticks = 0;

	// DICE Vars
	int dice_i = 0;
	int sides_i = 0;
	int hero_total_atk = 0;
	int enemy_total_atk = 0;

	// Battle Loop
	int i = 0;
	while (i != 1)
	{
		system("cls");

		//Hero Display
		cout << "Hero" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << "\nName: " << hero_player.name << "    " << "Level: " << hero_player.level << "    ";
		cout << "Weapon: " << hero_weapon.name << "    " << "Armor: " << hero_armor.name << endl;

		hppercent = static_cast<int>(100 * round(hero_player.hp) / round(hero_player.hp_max));
		
		if (hppercent >= 75) { Color(2); cout << hppercent << "%"; Color(7); cout << "    "; }
		if (hppercent < 75 and hppercent > 40) { Color(14); cout << hppercent << "%"; Color(7); cout << "    ";}
		if (hppercent <= 40) { Color(4); cout << hppercent << "%"; Color(7); cout << "    "; }
		cout << "HP: " << hero_player.hp << '/' << hero_player.hp_max << endl << endl;

		// Print Hero HPbar
		//hp_bar = "";
		//bar_ticks = ((hero_player.hp / hero_player.hp_max) * 100) / 4;
		//while (bar_ticks > 0)
		//{
		//	hp_bar += ":";
		//	bar_ticks -= 1;
		//}
		//hero_line2 = hp_bar;
		//if (hppercent >= 75) { Color(2); cout << hero_line2; Color(7); }
		//if (hppercent < 75 and hppercent >40) {Color(14); cout << hero_line2; Color(7);}
		//if (hppercent <= 40) { Color(4); cout << hero_line2; Color(7); cout << endl; }

		//Enemy Display
		cout << "Enemy" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << "\nName: " << enemy.name << "    " << "Level: " << enemy.level << endl;

		hppercent_e = static_cast<int>(100 * round(enemy.hp) / round(enemy.hp_max));

		if (hppercent_e >= 75) { Color(2); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		if (hppercent_e < 75 and hppercent_e > 40) { Color(14); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		if (hppercent_e <= 40) { Color(4); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		cout << "HP: " << enemy.hp << '/' << enemy.hp_max << endl << endl;
		
		// Print Enemy HPbar
		
		//ehp_bar = "";
		//ebar_ticks = ((enemy.hp / enemy.hp_max) * 100) / 4; //here
		//while (ebar_ticks > 0)
		//{
		//	ehp_bar += ":";
		//	ebar_ticks -= 1;
		//}
		//enemy_line2 = ehp_bar;
		//if (hppercent_e >= 75) { Color(2); cout << enemy_line2; Color(7); }
		//if (hppercent_e < 75 and hppercent_e > 40) { Color(14); cout << enemy_line2; Color(7); }
		//if (hppercent_e <= 40) { Color(4); cout << enemy_line2; Color(7); cout << endl; }


		// Battle Log
		cout << "Battle Log" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << endl;
		Color(2); cout << hero_player.name << ": "; Color(7); cout << " " << hero_combat_string << endl;
		Color(4); cout << enemy.name << ": "; Color(7); cout << " " << enemy_combat_string << endl << endl;

		cout << "Actions:" << endl << "1) Attack" << endl << "2) Spellbook" << endl << "3) Inventory" << endl << "4) Run" << endl;

		string ans;
		ans = _getch();

		if (ans == "4")
		{
			i = 1;
		}

		//if (ans == "3")
		//{
		//	inventory();
		//}
		//
		//if (ans == "2")
		//{
		//	spellbook();
		//}

		if (ans == "1") // Round Start
		{
			// HERO TURN
			string dice; dice = hero_weapon.damage[0]; dice_i = stoi(dice); // # of dice
			string sides; sides = hero_weapon.damage[2]; sides_i = stoi(sides); // # of sides

			int total = 0;

			// Crit role
			int	crit = 0;
			//srand((unsigned)time(NULL));
			int critroll = (rand() % 20) + 1;
			if (critroll >= 20 - hero_player.luck) { crit = 1; } //crit
			else if (critroll == 1) { crit = 2; } //miss
			else { crit = 0; } // normal

			// Dice Roll
			int final = 0;
			//srand((unsigned)time(NULL));
			for (int i = 0; i < dice_i; ++i)
			{

				int roll = (rand() % sides_i) + 1;
				cout << roll << " ";
				final += roll;
				roll = 0;
			}

			// add modifiers
			if (crit == 1)
			{
				total = (final * hero_player.prof) * 2;
				//cout << "CRIT ";
			}
			else if (crit == 2)
			{
				total = 0;
				//cout << "MISS ";
			}
			else
			{
				total = (final * hero_player.prof);
			}

			hero_total_atk = total;

			enemy.hp -= hero_total_atk;
			
			if (enemy.hp <= 0)
			{
				enemy.hp = 0;
				hero_combat_string = "Hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage, and kills it!";
				i = 1;
			}
			else
			{
				
				if (crit == 1)
				{
					hero_combat_string = "Hits[CRIT] " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage.";
				}
				if (crit == 0)
				{
					hero_combat_string = "Hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage.";
				}
				if (crit == 2)
				{
					hero_combat_string = "misses " + enemy.name + ".";
				}

			}

			// ENEMY TURN
			dice = enemy.damage[0]; dice_i = stoi(dice); // # of dice
			sides = enemy.damage[2]; sides_i = stoi(sides); // # of sides

			total = 0;

			// Crit role
			crit = 0;
			//srand((unsigned)time(NULL));
			critroll = (rand() % 20) + 1;
			if (critroll >= 20 - enemy.luck) { crit = 1; } //crit
			else if (critroll == 1) { crit = 2; } //miss
			else { crit = 0; } // normal

			// Dice Roll
			final = 0;
			//srand((unsigned)time(NULL));
			for (int i = 0; i < dice_i; ++i)
			{

				int roll = (rand() % sides_i) + 1;
				cout << roll << " ";
				final += roll;
				roll = 0;
			}

			// add modifiers
			if (crit == 1)
			{ 
				total = (final * enemy.prof) * 2;
				//cout << "CRIT ";
			}
			else if (crit == 2)
			{
				total = 0;
				//cout << "MISS ";
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
				enemy_combat_string = "Hits " + hero_player.name + " for " + to_string(enemy_total_atk) + " damage, and kills you!";
				i = 1;
			}
			else
			{

				if (crit == 1)
				{
					enemy_combat_string = "Hits[CRIT] " + hero_player.name + " for " + to_string(enemy_total_atk) + " damage.";
				}
				if (crit == 0)
				{
					enemy_combat_string = "Hits " + hero_player.name + " for " + to_string(enemy_total_atk) + " damage.";
				}
				if (crit == 2)
				{
					enemy_combat_string = "misses " + hero_player.name + ".";
				}

			}


		}



	}

	

	return;
}





//# Enemy Turn
//atk_value = random.randrange(0, 15)
//hero1['HP'] -= atk_value
//if endcombat == True:
//atk_value = 0
//if hero1['HP'] <= 0 :
//    hero1['HP'] = 0
//    enemy_combat_string = enemy_current['name'] + " has killed you."
//    endcombat = True
//else:
//if atk_value >= 1 :
//    enemy_combat_string = "Hits " + hero1['name'] + " for " + str(atk_value) + " damage."
//else :
//    if endcombat == True :
//        enemy_combat_string = "Dead."
//    else :
//        enemy_combat_string = "misses " + hero1['name'] + "."
//
//        if ans == '2' :
//            l.spellbook()
//            hitmiss = 4
//            if ans == '3' :
//                l.inventory()
//                hitmiss = 4
//                if ans == '4' :
//                    endcombat = True
//                    hitmiss = 4