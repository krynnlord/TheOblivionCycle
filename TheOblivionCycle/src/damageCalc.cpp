#include "../headers/functions.h"

void hero_display()
{
	int hppercent;
	string hp_bar = "";
	int bar_ticks = 0;
	string hero_line2 = "";

	cout << "Hero ";
	if (hero_player.stat == 2) { Color(10); cout << ">>>POISONED<<< "; Color(7); }
	if (hero_player.stat == 3) { Color(12); cout << ">>>BURNING<<< "; Color(7); }
	if (regen_ticker != 0) { Color(5); cout << ">>>REGEN<<< "; Color(7); }
	cout << endl;
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
	
	cout << "Enemy   ";
	if (enemy.stat == 2) { Color(10); cout << ">>>POISONED<<< "; Color(7); }
	if (enemy.stat == 3) { Color(12); cout << ">>>BURNING<<< "; Color(7); }
	cout << endl;
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

void battle_log(monster enemy, string hero_combat_string, string enemy_combat_string, bool trigger)
{
	cout << "Battle Log" << endl;
	for (int a = 0; a < 70; a++) { cout << "-"; }
	cout << endl;
	Color(2); cout << hero_player.name << ": "; Color(7); cout << hero_combat_string << endl;
	Color(4); cout << enemy.name << ": "; Color(7); cout << enemy_combat_string << endl;
	if (trigger == true) { Color(5); cout << "*** Trinket triggered ***"; Color(7); cout << " Added Damage: " << trinket_damage_value; }
	cout << endl << endl;
}

void hero_turn(monster& enemy, string& hero_combat_string, bool& trigger,int& skip_hero_atk, int heal_run, int& hero_total_atk)
{
	int hero_final = 0;
	int hero_crit = 0;
	int final = 0;
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


	uniform_int_distribution<int> rng_range2(1, 5);
	random_device rd2;
	mt19937 rng2(rd2());
	int roll = rng_range2(rng2);
	final += hero_weapon.damage + roll;
	roll = 0;

	// add modifiers
	if (crit == 1)
	{
		total = (final * hero_player.prof);
	}
	else if (crit == 2)
	{
		total = 0;
	}
	else
	{
		total = (final * ( hero_player.prof / 2 ));
	}
	hero_final = final;
	hero_crit = crit;
	hero_total_atk = total;

	if (skip_hero_atk == 0)
	{
		if (hero_total_atk > 0)
		{
			hero_total_atk = trinket_run(hero_total_atk);   //Check Trinket Attack Mod
		}
		int temp_enemy_ac_atk = 0;
		temp_enemy_ac_atk = hero_total_atk - enemy.ac;
		if (temp_enemy_ac_atk < 0) { temp_enemy_ac_atk = 0; }
		enemy.hp -= temp_enemy_ac_atk;
		//enemy.hp -= hero_total_atk;

		if (enemy.hp <= 0)
		{
			enemy.hp = 0;
			hero_combat_string = "hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(temp_enemy_ac_atk) + " damage, and kills it!";

			loot(enemy); // calls loot function
			return;
		}
		else
		{

			if (crit == 1)
			{
				hero_combat_string = "hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(temp_enemy_ac_atk) + " damage. (CRITICAL)";
			}
			if (crit == 0)
			{
				if (temp_enemy_ac_atk == 0 ) 
				{
					hero_combat_string = "strikes " + enemy.name + " but the attack was blocked.";
				}
				else
				{
					hero_combat_string = "hits " + enemy.name + " with " + hero_weapon.name + " for " + to_string(temp_enemy_ac_atk) + " damage.";
				}
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
	uniform_int_distribution<int> rng_range2(1, 5);
	random_device rd2;
	mt19937 rng2(rd2());
	int roll = rng_range2(rng2);
	final += enemy.damage + roll;
	roll = 0;

	// add modifiers
	if (crit == 1)
	{
		total = final * 2;
	}
	else if (crit == 2)
	{
		total = 0;
	}
	else
	{
		total = final;
	}
	total -= hero_armor.armorclass; // Total Attack minus Hero AC
	if (total <= 0) { total = 0; }
	enemy_total_atk = total;

	if (enemy.hp == 0) { hero_player.hp = hero_player.hp; }  //FIX for hitting Hero on Death
	else 
	{ 
		if (immo_ticker != 0) { hero_player.hp -= enemy_total_atk; }
		else { immo_ticker -= 1; hero_player.hp = hero_player.hp; }
	}

	if (enemy.adj == "Poisonous" or enemy.adj == "Rotten")
	{
		uniform_int_distribution<int> rng_range(1, 5);
		random_device rd;
		mt19937 rng(rd());
		int roll = rng_range(rng);
		if (roll == 5)
		{
			poison_ticker = 10;
			hero_player.stat = 2;
		}

	}
	if (enemy.adj == "Shimmering")
	{
		uniform_int_distribution<int> rng_range(1, 15);
		random_device rd;
		mt19937 rng(rd());
		int roll = rng_range(rng);
		if (roll == 13)
		{
			poison_ticker = 10;
			hero_player.stat = 2;
		}

	}


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
			enemy_combat_string = "hits you for " + to_string(enemy_total_atk) + " damage. (CRITICAL)";
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
    trigger = false;
    int trinket_modded_atk = 0;

    if (hero_player.trinket == 2) // Dragon Talon
    { 
		uniform_int_distribution<int> rng_range(1, 10);
		random_device rd;
		mt19937 rng(rd());
		int rand_chance = rng_range(rng);

		if (rand_chance > 8)
		{
			trinket_modded_atk = int(round(hero_total_atk * 1.1));
			trigger = true;
			trinket_damage_value = int(round(hero_total_atk * .1));
		}
		else
		{
			trinket_modded_atk = hero_total_atk;
		}
    }
	if (hero_player.trinket == 4) // Bone Caltrops
	{
		uniform_int_distribution<int> rng_range(1, 10);
		random_device rd;
		mt19937 rng(rd());
		int rand_chance = rng_range(rng);

		if (rand_chance > 8)
		{
			trinket_modded_atk = hero_total_atk + (hero_player.level * 2) + rand_chance;
			trinket_damage_value = (hero_player.level * 2) + rand_chance;
			trigger = true;
		}
		
		
		trinket_modded_atk = hero_total_atk;
	}
	if (hero_player.trinket == 0 or hero_player.trinket == 1 or hero_player.trinket == 3 or hero_player.trinket == 21
		or hero_player.trinket == 22 or hero_player.trinket == 23 or hero_player.trinket == 24) // None
	{
		trinket_modded_atk = hero_total_atk;
	}

    
	//hero_total_atk = trinket_modded_atk;
	trinket_modded_atk = hero_total_atk;
	return trinket_modded_atk;
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

int magic_attack(int c1_spell, int c2_spell, int c3_spell, spell magic_spell)
{
    int spell_damage = 0;
    if (magic_missile.ready == 1 and c1_spell == 1 and magic_spell.name == magic_missile.name)
    {
        spell_damage = hero_player.prof * 10;
    }

    if (fireball.ready == 1 and c2_spell == 1 and magic_spell.name == fireball.name)
    {
		if (hero_player.trinket == 3)
		{
			uniform_int_distribution<int> rng_range(1, 4);
			random_device rd;
			mt19937 rng(rd());
			int rand_chance = rng_range(rng);
			if (rand_chance == 2)
			{
				spell_damage = (hero_player.prof * 25) * 2;
				trinket_damage_value = (hero_player.prof * 25);
				trigger = true;
			}
			else 
			{ 
				spell_damage = hero_player.prof * 25; 
			}
		}
		else
		{
			spell_damage = hero_player.prof * 25;
		}
    }

    if (immolation.ready == 1 and c3_spell == 1 and magic_spell.name == immolation.name)
    {
        spell_damage = hero_player.prof * 10;	
	}
	if (doubleme.ready == 1 and c3_spell == 1 and magic_spell.name == doubleme.name)
	{
		spell_damage = (hero_weapon.damage * hero_player.prof) * 2;
	}
    return spell_damage;
}

void magic_aid(int c1_spell, int c2_spell, int c3_spell, spell spell_cast)
{
	if (conjure_elixir.ready == 1 and c1_spell == 1 and spell_cast.name == conjure_elixir.name)
	{
		if (hero_player.flask < 3)
		{
			hero_player.flask += 1;
		}
	}
	if (heal.ready == 1 and c1_spell == 1 and spell_cast.name == heal.name)
	{
		hero_player.hp += int(round(hero_player.hp_max * .50)) + 1;
		if (hero_player.hp > hero_player.hp_max)
		{
			hero_player.hp = hero_player.hp_max;
		}
	}
	if (cure.ready == 1 and c1_spell == 1 and spell_cast.name == cure.name)
	{
		hero_player.stat = 1;
		poison_ticker = 0;
	}
	if (greater_heal.ready == 1 and c2_spell == 1 and spell_cast.name == greater_heal.name)
	{
		hero_player.hp = hero_player.hp_max; // FULL HEAL
	}
	if (barrier.ready == 1 and c2_spell == 1 and spell_cast.name == barrier.name)
	{
		hero_player.hp = hero_player.hp;
	}
	if (holy_ground.ready == 1 and c3_spell == 1 and spell_cast.name == holy_ground.name)
	{
		hero_player.hp = hero_player.hp_max;
		hero_player.stat = 1;
		poison_ticker = 0;
	}
}

void magic_persistent_damage(string& hero_combat_string)
{
	if (hero_player.stat == 2)
	{
		hero_player.hp -= 2 * hero_player.level;
		if (hero_player.hp < 0) { hero_player.hp = 0; }
		hero_combat_string.append(" You take " + to_string(2 * hero_player.level) + " posion damage!");
		poison_ticker -= 1;
		if (poison_ticker <= 0) { poison_ticker = 0; hero_player.stat = 1; }
	}
}
void magic_persistent_healing(string& hero_combat_string)
{
	if (regen_ticker == 4) { regen_ticker -= 1; return; }
	if (regen_ticker != 0)
	{
		int heal_amount = int(round(hero_player.hp_max * .20)) + 1;
		if (heal_amount > hero_player.hp_max - hero_player.hp)
		{
			heal_amount = hero_player.hp_max - hero_player.hp;
		}
		
		hero_player.hp += int(round(hero_player.hp_max * .20)) + 1;
		if (hero_player.hp > hero_player.hp_max)
		{
			hero_player.hp = hero_player.hp_max;
		}

		if (hero_player.hp > hero_player.hp_max) { hero_player.hp = hero_player.hp_max; }
		if (regen_ticker != 4)
		{
			hero_combat_string.append(" You regen for " + to_string(heal_amount) + " health!");
		}
		regen_ticker -= 1;
		
	}
}

int magic_persistent_attack(spell spellname)
{
	if (spellname.name == "IMMOLATION")
	{
		uniform_int_distribution<int> rng_range(1, 15);
		random_device rd;
		mt19937 rng(rd());
		int roll = rng_range(rng);

		return (hero_player.prof * 10) + roll;
	}
	return 0;
}