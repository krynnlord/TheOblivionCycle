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

        if (rand_chance >= 9)
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

int magic_attack(int c1_spell, int c2_spell, int c3_spell)
{
    int spell_damage = 0;
    if (magic_missle.ready == 1 and c1_spell == 1)
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

void magic_persistent_attack(int att_magic_round)
{

    return;
}