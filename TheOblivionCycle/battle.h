void battle_sim()
{
	// Battle Strings
	string hero_combat_string = "Ready for combat.";
	string enemy_combat_string = "Ready for combat.";

	// Define Enemy
	monster enemy = zombie;

	// Combat Active
	bool endcombat = false;
	int i = 0;
	
	// Battle Loop
	while (i != 1)
	{
		system("cls");

		//Hero Display
		cout << "Hero" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << "\nName: " << hero_player.name << "    " << "Level: " << hero_player.level << "    ";
		cout << "Weapon: " << hero_weapon.name << "    " << "Armor: " << hero_armor.name << endl;

		int hppercent = 100 * round(hero_player.hp) / round(hero_player.hp_max);
		
		if (hppercent >= 75) { Color(2); cout << hppercent << "%"; Color(7); cout << "    "; }
		if (hppercent < 75 and hppercent > 40) { Color(14); cout << hppercent << "%"; Color(7); cout << "    ";}
		if (hppercent <= 40) { Color(4); cout << hppercent << "%"; Color(7); cout << "    "; }
		cout << "HP: " << hero_player.hp << '/' << hero_player.hp_max << endl;

		// Print Hero HPbar
		string hp_bar = "";
		string hero_line2 = "";
		int bar_ticks = 0;

		if (hero_player.hp_max == 0) { bar_ticks = 0; }
		else { bar_ticks = ((hero_player.hp / hero_player.hp_max) * 100) / 4; }

		while (bar_ticks > 0)
		{
			hp_bar += ":";
			bar_ticks -= 1;
			hero_line2 = hp_bar;
		}
		if (hppercent >= 75) { Color(2); cout << hero_line2; Color(7); }
		if (hppercent < 75 and hppercent >40) {Color(14); cout << hero_line2; Color(7);}
		if (hppercent <= 40) { Color(4); cout << hero_line2; Color(7); cout << endl; }

		cout << endl << endl;

		//Enemy Display
		cout << "Enemy" << endl;
		for (int a = 0; a < 70; a++) { cout << "-"; }

		cout << "\nName: " << enemy.name << "    " << "Level: " << enemy.level << endl;
		

		int hppercent_e = 100 * round(enemy.hp) / round(enemy.hp_max);

		if (hppercent_e >= 75) { Color(2); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		if (hppercent_e < 75 and hppercent_e > 40) { Color(14); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		if (hppercent_e <= 40) { Color(4); cout << hppercent_e << "%"; Color(7); cout << "    "; }
		cout << "HP: " << enemy.hp << '/' << enemy.hp_max << endl;
		
		// Print Enemy HPbar
		string ehp_bar = "";
		string enemy_line2 = "";
		int ebar_ticks = 0;

		if (enemy.hp_max == 0) { ebar_ticks = 0; }
		else { ebar_ticks = ((enemy.hp / enemy.hp_max) * 100) / 4; }

		while (ebar_ticks > 0)
		{
			ehp_bar += ":";
			ebar_ticks -= 1;
			enemy_line2 = hp_bar;
		}
		if (hppercent_e >= 75) { Color(2); cout << enemy_line2; Color(7); }
		if (hppercent_e < 75 and hppercent_e >40) { Color(14); cout << enemy_line2; Color(7); }
		if (hppercent_e <= 40) { Color(4); cout << enemy_line2; Color(7); cout << endl; }
		
		// Battle Log
		cout << "\n\nBattle Log" << endl;
		for (int a = 0; a < 70; a++)
		{
			cout << "-";

		}
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
	}

	

	return;
}




//ans = input('\nCommand > ')
//if ans == '1' or ' ':
//
//# Hero Turn
//atk_value = random.randrange(0, 20)
//modifier_value = 0
//hero_crit = 0
//luckmod = random.randrange(hero1['luck'], 20)
//if luckmod >= 16:
//modifier_value = round((atk_value * hero1['luck']) * 1.1)
//hero_crit = 1
//if hero_crit == 1 :
//    enemy_current['HP'] -= atk_value + modifier_value
//else :
//    enemy_current['HP'] -= atk_value
//    if enemy_current['HP'] <= 0 :
//        enemy_current['HP'] = 0
//        hero_combat_string = "Hits " + enemy_current['name'] + " with " + hero_equip['weapon'] + " for " + str(atk_value) + " damage, and kills it!"
//        hitmiss = 2
//        endcombat = True
//    else:
//if atk_value >= 1 :
//    if hero_crit == 1 :
//        hero_combat_string = "*CRITICAL* Hits " + enemy_current['name'] + " with " + hero_equip['weapon'] + " for " + str(atk_value + modifier_value) + " damage."
//        hitmiss = 3
//    else :
//        hero_combat_string = "Hits " + enemy_current['name'] + " with " + hero_equip['weapon'] + " for " + str(atk_value) + " damage."
//        hitmiss = 1
//else:
//hero_combat_string = "misses " + enemy_current['name'] + "."
//hitmiss = 0
//
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