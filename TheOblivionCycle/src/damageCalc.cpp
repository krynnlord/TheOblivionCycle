#include "../headers/functions.h"

int master_damage_roller(int dice_i, int sides_i)
{
    int crit = 0;
    int base = 0;
    int total = 0;
    int final = 0;
    int trinket_mod_atk = 0;
    int absolute_result = 0;

    crit = crit_roller(); // Step 1: Crit Chance
    base = baseDamage_roller(dice_i, sides_i); //Step 2: Base Weapon Damage
    total = final_calculations(crit, base); // Step 3: Caluclate Crit with Base Damage
    trinket_mod_atk = trinket_run(total); // Step 4: Calculate Trinket Bonus

    absolute_result = trinket_mod_atk; // May be changed if more mods

    return absolute_result;
}


int crit_roller() // Crit Roller 
{
    int	crit = 0;
    srand((unsigned)time(NULL));
    int critroll = (rand() % 20) + 1;
    if (critroll >= 20 - hero_player.luck) { crit = 1; } //crit
    else if (critroll == 1) { crit = 2; } //miss
    else { crit = 0; } // normal

    return crit;
}


int baseDamage_roller(int dice_i, int sides_i) // Base Damage Roll
{
    int final = 0;
    for (int i = 0; i < dice_i; ++i)
    {
        srand((unsigned)time(NULL));
        int roll = (rand() % sides_i) + 1;
        cout << roll << " ";
        final += roll;
        roll = 0;
    }

    return final;

}

int final_calculations(int crit, int final)
{
    int total = 0;
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

    return total;
}

// Trinket Calculator
int trinket_run(int hero_total_atk)
{
    
    int trinket_modded_atk = 0;

    if (hero_player.trinket == 1) // Rabbit's Foot
    {
        srand((unsigned)time(0));
        int rand_chance = (rand() % 10) + 1;

        if (rand_chance >= 8)
        { trinket_modded_atk = hero_total_atk * 2; }
        else { trinket_modded_atk = hero_total_atk; }

    }

    if (hero_player.trinket == 2) // Stick Man
    { }

    return trinket_modded_atk;
}