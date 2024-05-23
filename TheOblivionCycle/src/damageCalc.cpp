#include "../headers/functions.h"

void hero_display()
{
	int hppercent;
	string hp_bar = "";
	int bar_ticks = 0;
	string hero_line2 = "";

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

}

void enemy_display(monster enemy)
{
	int hppercent_e;
	int ebar_ticks = 0;
	string ehp_bar = "";
	string enemy_line2 = "";
	
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
}

void battle_log(monster enemy, string hero_combat_string, string enemy_combat_string, int trigger)
{
	cout << "Battle Log" << endl;
	for (int a = 0; a < 70; a++) { cout << "-"; }
	cout << endl;
	Color(2); cout << hero_player.name << ": "; Color(7); cout << hero_combat_string << endl;
	Color(4); cout << enemy.name << ": "; Color(7); cout << enemy_combat_string << endl;
	if (trigger == 1) { Color(5); cout << "*** Trinket triggered ***"; Color(7); }
	cout << endl << endl;
}

void hero_turn(monster& enemy, string& hero_combat_string, int& trigger,int& skip_hero_atk, int heal_run, int& hero_total_atk)
{
	int dice_i = 0;
	int sides_i = 0;
	int hero_final = 0;
	int hero_crit = 0;
	

	string dice; dice = hero_weapon.damage[0]; dice_i = stoi(dice); // # of dice
	string sides; sides = hero_weapon.damage[2]; sides_i = stoi(sides); // # of sides

	int total = 0;

	// Crit role
	int	crit = 0;
	uniform_int_distribution<int> rng_range(1, 20);
	random_device rd;
	mt19937 rng(rd());
	int critroll = rng_range(rng);
	if (critroll >= 20 - hero_player.luck) { crit = 1; } //crit
	else if (critroll == 1) { crit = 2; } //miss
	else { crit = 0; } // normal

	// Dice Roll
	int final = 0;
	for (int i = 0; i < dice_i; ++i)
	{
		uniform_int_distribution<int> rng_range(1, sides_i);
		random_device rd;
		mt19937 rng(rd());
		int roll = rng_range(rng);
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


	trigger = trinket_run(hero_total_atk);   //Check Trinket Attack Mod

	if (skip_hero_atk == 0)
	{
		enemy.hp -= hero_total_atk;

		if (enemy.hp <= 0)
		{
			enemy.hp = 0;
			hero_combat_string = "hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(hero_total_atk) + " damage, and kills it!";

			loot(enemy); // calls loot function
			return;
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
		if (heal_run == 1) { hero_combat_string = "takes a sip from the Celestial Flask!"; }
		if (heal_run == 2) { hero_combat_string = "attempts to run, but fails."; }
	}

}

// Battle Enemy Turn
void enemy_turn(monster& enemy, string& enemy_combat_string, bool& endcombat)
{
	
	int enemy_total_atk = 0;
	
	if (enemy.hp == 0)
	{
		enemy_combat_string = "has been killed.";
		endcombat = true;
	}

	int dice_i; int sides_i;
	string dice; dice = enemy.damage[0]; dice_i = stoi(dice); // # of dice
	string sides; sides = enemy.damage[2]; sides_i = stoi(sides); // # of sides

	int total = 0;

	// Crit role
	int crit = 0;
	uniform_int_distribution<int> rng_range(1, 20);
	random_device rd;
	mt19937 rng(rd());
	int critroll = rng_range(rng);
	if (critroll >= 20 - enemy.luck) { crit = 1; } //crit
	else if (critroll == 1) { crit = 2; } //miss
	else { crit = 0; } // normal

	// Dice Roll
	int final = 0;
	for (int i = 0; i < dice_i; ++i)
	{
		uniform_int_distribution<int> rng_range(1, sides_i);
		random_device rd;
		mt19937 rng(rd());
		int roll = rng_range(rng);
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
	total -= hero_armor.armorclass; // Total Attack minus Hero AC
	if (total <= 0) { total = 0; }
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

void trinket_start()
{
	if (hero_player.trinket == 1) // Rabbit's Foot
	{
		uniform_int_distribution<int> rng_range(1, 10);
		random_device rd;
		mt19937 rng(rd());
		int rand_chance = rng_range(rng);

		if (rand_chance > 8)
		{
			hero_player.luck += 1;
			rabbit_foot_trigger = true;
			Color(5); cout << endl << "        Rabbit Foot Activated!"; Color(7);
		}
		
	}

}


// Trinket Calculator
int trinket_run(int& hero_total_atk)
{
    int trigger = 0;
    int trinket_modded_atk = 0;

    if (hero_player.trinket == 2) // Stick Man
    { 
    
    }

    if (hero_player.trinket == 0) // Stick Man
    {
        trinket_modded_atk = hero_total_atk;
    }
    
	//hero_total_atk = trinket_modded_atk;
    return trigger;
}

void trinket_cleanup()
{
	if (hero_player.trinket == 1) // Rabbit's Foot
	{
		if (rabbit_foot_trigger == true)
		{
			hero_player.luck -= 1;
			rabbit_foot_trigger = false;
		}

	}

}

int magic_attack(int c1_spell, int c2_spell, int c3_spell)
{
    int spell_damage = 0;
    if (magic_missile.ready == 1 and c1_spell == 1)
    {
        spell_damage = hero_player.prof * 3;
    }

    if (fireball.ready == 1 and c2_spell == 1)
    {
        spell_damage = hero_player.prof * 5;
    }

    if (immolation.ready == 1 and c3_spell == 1)
    {
        spell_damage = hero_player.prof * 3;
    }

    return spell_damage;
}

void magic_aid(int c1_spell, int c2_spell, int c3_spell)
{
	if (conjure_elixir.ready == 1 and c1_spell == 1)
	{
		if (hero_player.flask < 3)
		{
			hero_player.flask += 1;
		}
	}
}


void magic_persistent_attack(int att_magic_round)
{

    return;
}