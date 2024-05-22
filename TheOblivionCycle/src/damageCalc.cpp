#include "../headers/functions.h"

// Trinket Calculator
int trinket_run(int hero_total_atk)
{
    int trigger = 0;
    int trinket_modded_atk = 0;

    if (hero_player.trinket == 1) // Rabbit's Foot
    {
        srand((unsigned)time(0));
        int rand_chance = (rand() % 10) + 1;

        if (rand_chance >= 8)
        {
            trinket_modded_atk = hero_total_atk * 2; trigger = 1;
        }
        else { trinket_modded_atk = hero_total_atk; }

    }

    if (hero_player.trinket == 2) // Stick Man
    { 
    
    }

    if (hero_player.trinket == 0) // Stick Man
    {
        trinket_modded_atk = hero_total_atk;
    }
    
    return trinket_modded_atk, trigger;
}