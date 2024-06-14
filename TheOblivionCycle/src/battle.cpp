#include "../headers/functions.h"
using namespace std;

void battle_sim(monster enemy, int gate)
{
	if (display_fight_symbol == true) { print_preparecombat(true, gate); }
	else { print_preparecombat(false, gate); }
	trinket_start(); // Check Startup Trinkets
	Sleep(2000);
	
	system("cls");
	// Battle Strings
	string hero_combat_string = "Ready for combat.";
	string enemy_combat_string = "Ready for combat.";

	// Combat Active
	bool endcombat = false;
	extern int exit_mode;
	exit_mode = 0;

	// VARS for Battle System
	int trigger = 0;
	int hero_total_atk = 0;
	int skip_hero_atk = 0;
	int skip_enemy_atk = 1;
	int heal_run = 0;
	
	// Magic Vars
	int spell_damage = 0;
	int att_magic_round = 0;
	int def_magic_round = 0;
	int c1_spell = 1;
	int c2_spell = 1;
	int c3_spell = 1;

	// Battle Loop
	int loop = 0;
	
	
	while (loop != 1)
	{
		if (exit_mode == 1) 
		{ 
			cout << endl << "You can not exit during a battle!" << endl;
			Sleep(2000);
			exit_mode = 0;
		}
		if (endcombat == true and hero_player.hp == 0) 
		{ 
			player_death();
			castle(2);
		}
		if (endcombat == true && hero_player.hp != 0)
		{ break; }


		magic_persistent_damage(hero_combat_string);  // Hero Persistant Damage Check
		magic_persistent_healing(hero_combat_string); // Hero Persistant Healing Check
		if (immo_ticker == 2 or immo_ticker == 1)
		{
			int magic_damage = 0;
			magic_damage = magic_persistent_attack(immolation);
			enemy.hp -= magic_damage;
			immo_ticker -= 1;
			enemy_combat_string.append(" Suffers " + to_string(magic_damage) + " burning damage.");
		}
		if (immo_ticker == 3) { immo_ticker -= 1; }
		if (immo_ticker == 0) { enemy.stat = 1; }
		if (enemy.hp < 0) { enemy.hp = 0; loot(enemy); return; }


		system("cls");
		hero_display(); //Hero Display
		enemy_display(enemy);//Enemy Display
		battle_log(enemy, hero_combat_string, enemy_combat_string, trigger); // Battle Log
		
		
			cout << "Actions" << endl;
			
			cout << "[1] Attack" << endl;
			if (hero_player.level > 1)
			{
				cout << "--> Cast [a] "; 
				if (c1_spell == 1)
				{
					Color(9);
					if (heal.ready == 1) { cout << heal.name; }
					if (cure.ready == 1) { cout << cure.name; }
					if (conjure_elixir.ready == 1) { cout << conjure_elixir.name; }
					if (magic_missile.ready == 1) { cout << magic_missile.name; }
					Color(7);
				}
				if (c1_spell == 0)
				{
					Color(8);
					if (heal.ready == 1) { cout << heal.name; }
					if (cure.ready == 1) { cout << cure.name; }
					if (conjure_elixir.ready == 1) { cout << conjure_elixir.name; }
					if (magic_missile.ready == 1) { cout << magic_missile.name; }
					Color(7);
				}
				cout << " [b] ";
				if (c2_spell == 1)
				{
					Color(9);
					if (greater_heal.ready == 1) { cout << greater_heal.name; }
					if (barrier.ready == 1) { cout << barrier.name; }
					if (escape.ready == 1) { cout << escape.name; }
					if (fireball.ready == 1) { cout << fireball.name; }
					Color(7);
				}
				if (c2_spell == 0)
				{
					Color(8);
					if (greater_heal.ready == 1) { cout << greater_heal.name; }
					if (barrier.ready == 1) { cout << barrier.name; }
					if (escape.ready == 1) { cout << escape.name; }
					if (fireball.ready == 1) { cout << fireball.name; }
					Color(7);
				}
				cout << " [c] ";
				if (c3_spell == 1)
				{
					Color(9);
					if (regeneration.ready == 1) { cout << regeneration.name; }
					if (holy_ground.ready == 1) { cout << holy_ground.name; }
					if (doubleme.ready == 1) { cout << doubleme.name; }
					if (immolation.ready == 1) { cout << immolation.name; }
					Color(7);cout << endl;
				}
				if (c3_spell == 0)
				{
					Color(8);
					if (regeneration.ready == 1) { cout << regeneration.name; }
					if (holy_ground.ready == 1) { cout << holy_ground.name; }
					if (doubleme.ready == 1) { cout << doubleme.name; }
					if (immolation.ready == 1) { cout << immolation.name; }
					Color(7);cout << endl;
				}

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
		
		skip_enemy_atk = 1;
		skip_hero_atk = 0;
		heal_run = 0;

		string ans;
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));  // Flush Console input while Sleeping
		ans = _getch();
		
		// Magic Cast
		if (ans == "a" or ans == "A" and c1_spell == 0)
		{
			hero_combat_string = "casts a spell, but it fails!";
			enemy_combat_string = "flinches!";	
		}
		
		if (ans == "a" or ans == "A" and c1_spell == 1)
		{
			if (heal.ready == 1)
			{
				int heal_amount = int(round(hero_player.hp_max * .50)) + 1;
				if (heal_amount > hero_player.hp_max - hero_player.hp)
				{ heal_amount = hero_player.hp_max - hero_player.hp; }

				magic_aid(c1_spell, c2_spell, c3_spell, heal);
				hero_combat_string = "casts Heal and gains "+ to_string(heal_amount) + " HP!";
				c1_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			if (cure.ready == 1)
			{
				magic_aid(c1_spell, c2_spell, c3_spell, cure);
				hero_combat_string = "casts Cure on themself!";
				c1_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			if (magic_missile.ready == 1)
			{
				hero_total_atk = magic_attack(c1_spell, c2_spell, c3_spell, magic_missile);
				hero_combat_string = "casts Magic Missile at " + enemy.name + " for " + to_string(hero_total_atk) + " damage!";
				c1_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 0;
				
			}

			if (conjure_elixir.ready == 1 and c1_spell == 1 and hero_player.flask < 3)
			{
				magic_aid(c1_spell, c2_spell, c3_spell, conjure_elixir);
				hero_combat_string = "casts Conjure Exilir and refills 1 flask charge!";
				c1_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			
			if (conjure_elixir.ready == 1 and c1_spell == 1 and hero_player.flask == 3)
			{
				hero_combat_string = "casts Conjure Exilir but flask was already full and spilled over!";
				c1_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}

			if (skip_hero_atk != 1) 
			{
				enemy.hp -= hero_total_atk;
				if (enemy.hp < 0) { enemy.hp = 0; loot(enemy); return; }
			}
		}

		if (ans == "b" or ans == "B" and c2_spell == 1)
		{
			
			if (greater_heal.ready == 1)
			{
				
				int heal_amount = hero_player.hp_max - hero_player.hp;
				
				magic_aid(c1_spell, c2_spell, c3_spell, greater_heal);
				hero_combat_string = "casts Greater Heal and gains " + to_string(heal_amount) + " HP!";
				c2_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			if (barrier.ready == 1)
			{

				magic_aid(c1_spell, c2_spell, c3_spell, barrier);
				hero_combat_string = "casts Barrier and gains a magic shield and negates all damage!";
				c2_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			if (escape.ready == 1) { loop = 1; }
			if (fireball.ready == 1)
			{
				hero_total_atk = magic_attack(c1_spell, c2_spell, c3_spell, fireball);
				hero_combat_string = "casts Fireball at " + enemy.name + " for " + to_string(hero_total_atk) + " damage!";
				c2_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 0;
			}
			if (skip_hero_atk != 1)
			{
				enemy.hp -= hero_total_atk;
				if (enemy.hp < 0) { enemy.hp = 0; loot(enemy); return; }
			}
		}
		
		if (ans == "c" or ans == "C" and c3_spell == 1)
		{
			
			if (regeneration.ready == 1)
			{

				int heal_amount = int(round(hero_player.hp_max * .20)) + 1;
				if (heal_amount > hero_player.hp_max - hero_player.hp)
				{
					heal_amount = hero_player.hp_max - hero_player.hp;
				}

				magic_aid(c1_spell, c2_spell, c3_spell, regeneration);
				hero_combat_string = "casts Regeneration and gains " + to_string(heal_amount) + " HP!";
				c3_spell = 0;
				regen_ticker = 4;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			if (holy_ground.ready == 1)
			{

				magic_aid(c1_spell, c2_spell, c3_spell, holy_ground);
				hero_combat_string = "casts Holy Ground and gains full HP and recieves cure!";
				c3_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 1;
			}
			if (skip_hero_atk != 1)
			{
				enemy.hp -= hero_total_atk;
			}
			if (doubleme.ready == 1)
			{
				hero_total_atk = magic_attack(c1_spell, c2_spell, c3_spell, doubleme);
				hero_combat_string = "casts Double attacking twice!";
				c3_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 0;
			}
			if (immolation.ready == 1)
			{
				hero_total_atk = magic_attack(c1_spell, c2_spell, c3_spell, immolation);
				hero_combat_string = "casts Immolation burning the enemy!";
				c3_spell = 0;
				skip_enemy_atk = 0;
				skip_hero_atk = 0;
				immo_ticker = 3;
				enemy.stat = 3;
			}
			
			if (skip_hero_atk != 1)
			{
				enemy.hp -= hero_total_atk;
				if (enemy.hp < 0) { enemy.hp = 0; loot(enemy); return; }
			}


		}


		if (ans == "i" or ans == "I")
		{ monster_display(enemy); }

		if (ans == "0")
		{
			
			skip_enemy_atk = 0;
			skip_hero_atk = 1;
			heal_run = 2;
			ans = "1";
			uniform_int_distribution<int> rng_range(1, 6);
			random_device rd;
			mt19937 rng(rd());
			int runroll = rng_range(rng);
			if (runroll == 6) { enemy.stat = 1; loop = 1; }
		}

		if (ans == "2")
		{
			
			skip_enemy_atk = 0;
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
			
			skip_enemy_atk = 0;
			hero_turn(enemy, hero_combat_string, trigger, skip_hero_atk, heal_run, hero_total_atk);// HERO TURN
		}

		if (skip_enemy_atk != 1)
		{
			enemy_turn(enemy, enemy_combat_string, endcombat); // ENEMY TURN
		}

	}

	trinket_cleanup(); // Cleanup Startup Trinkets
	return;
}

void loot(monster enemy)
{
	int old_level = 0;
	bool diplay_levelup = false;
	immo_ticker = 0;

	system("cls");
	hero_player.exp += enemy.exp;  // gives exp to player
	hero_player.essence += enemy.essence; // gives essence to player

	//money roller
	int money_roll = 0;
	int money_gained = 0;
	uniform_int_distribution<int> rng_range(5, 10);
	random_device rd;
	mt19937 rng(rd());
	money_roll = rng_range(rng);
	money_gained = enemy.level * money_roll;
	hero_player.gold += money_gained; // Show me the money!!!

	//check level
	old_level = hero_player.level;
	checklevelup();
	if (old_level < hero_player.level) { diplay_levelup = true; }

	// Stats Update
	total_kills += 1;

	cout << "*** "; Color(10); cout << "Victory!"; Color(7); cout << " ***" << endl;
	Color(4); cout << enemy.name; Color(7); cout << " defeated." << endl << endl;
	cout << "---EARNED-------" << endl;
	Color(10); cout << enemy.exp; Color(7); cout << " Experience" << endl;
	Color(9); cout << enemy.essence; Color(7); cout << " Essence" << endl;
	Color(14); cout << money_gained; Color(7); cout << " Gold" << endl;

	// Check if Boss
	if (enemy.name == "Kilthar the Unbreakable") { hero_player.quest_level = 2; }
	if (enemy.name == "Rotting King Thomas") { hero_player.quest_level = 4; }
	if (enemy.name == "Undead Princess Zethla") { hero_player.quest_level = 6; }
	if (enemy.name == "Proto-Drake Ithlyius") { hero_player.quest_level = 8; }

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
	print_rip();
	int hero_gold_before = hero_player.gold;
	hero_player.gold = 0;
	int temp_exp_loss = 0;
	int hero_exp_before = hero_player.exp;

	// Update Stats
	total_deaths += 1;

	temp_exp_loss = static_cast<int>(hero_player.exp * .25);
	if (min_exp >= (hero_player.exp - temp_exp_loss)) { hero_player.exp = min_exp; }
	if (min_exp < (hero_player.exp - temp_exp_loss)) { hero_player.exp -= temp_exp_loss; }
	
	hero_player.hp = hero_player.hp_max;
	hero_player.stat = 1;
	hero_player.flask = 3;
	
	cout << hero_player.name << " has died!" << endl << endl;
	cout << "You lost:" << endl;
	cout << hero_gold_before << " GOLD" << endl;
	cout << hero_exp_before - hero_player.exp << " EXP" << endl << endl;
	
	system("pause");

}