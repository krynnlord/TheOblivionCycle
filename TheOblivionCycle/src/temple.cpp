#include "../headers/functions.h"

int temple(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Refill Flask" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Memorize Spells" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1")
    {
        fill_flask();
    }
    if (ans == "2")
    {
        memorize_spells();
    }
    if (ans == "0" or ans == "\033")
        { 
            return 1; 
        }

    else {return 0;}
    
    return 1;

}

void fill_flask()
{
    int a = 1;
    int purchase_amount_gold = hero_player.level * 50;
    int purchase_amount_ess = hero_player.level * 50;
    while (a == 1)
    {
        print_temple();
        show_statbar();

        cout << "Filling the Celestial Flask demands a tithe. Will it be your wealth or your spirit?\n" << endl;
        cout << "Your Flask has "; Color(2); cout << hero_player.flask; Color(7); cout << " charges remaining." << endl;
        cout << "Do you want to fill the flask?" << endl << endl;
        cout << "(1) Pay Gold ["; Color(14); cout << purchase_amount_gold; Color(7); cout <<"]" << endl;
        cout << "(2) Offer Essence ["; Color(10); cout << purchase_amount_ess; Color(7); cout << "]" << endl;
        cout << "(0) No" << endl;
        string ans = "";
        ans = _getch();

        if (ans == "1")
        {
         
            if (hero_player.flask == 3)
            {
                cout << "\nYou aready have a full flask!\n\n";
                Sleep(3000);
                a = 1;

            }
            
            if (hero_player.gold < purchase_amount_gold and hero_player.flask < 3)
            {
                cout << "\nYou do not possess enough gold!\n\n";
                Sleep(3000);
                a = 1;
            }

            if (hero_player.gold >= purchase_amount_gold and hero_player.flask < 3)
            {
                hero_player.gold -= purchase_amount_gold;
                hero_player.flask = 3;
                cout << "\nMay the gods bless you!\n\n";
                Sleep(3000);
                a = 1;
            }

            
        }

        if (ans == "2")
        {
            if (hero_player.flask == 3)
            {
                cout << "\nYou aready have a full flask!\n\n";
                Sleep(3000);
                a = 1;
            }
            
            if (hero_player.essence < purchase_amount_ess and hero_player.flask < 3)
            {
                cout << "\nYou do not possess enough essence!\n\n";
                Sleep(3000);
                a = 1;
            }


            if (hero_player.flask < 3 and hero_player.essence >= purchase_amount_ess)
            {
                hero_player.essence -= purchase_amount_ess;
                hero_player.flask = 3;
                cout << "\nMay the gods bless you!\n\n";
                Sleep(3000);
                a = 1;
            }
           

        }


        if (ans == "0" or ans == "\033")
        {
            a = 0;
        }
    }
}


void memorize_spells()
{
    if (hero_player.level < 2)
    {
        cout << "\nYou are currently unworthy of these teachings!" << endl;
        Sleep(3000);
        return;
    }
    
    int a = 1;
    while (a == 1)
    {
        print_spellbook();
        
        int c11 = heal.ready; int c12 = cure.ready; int c13 = conjure_elixir.ready; int c14 = magic_missile.ready;
        int c21 = greater_heal.ready; int c22 = barrier.ready; int c23 = escape.ready; int c24 = fireball.ready;
        int c31 = regeneration.ready; int c32 = holy_ground.ready; int c33 = doubleme.ready; int c34 = immolation.ready;

        cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
        cout << "1ST CIRCLE         2ND CIRCLE          3RD CIRCLE       " << endl;
        cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
        cout << "["; Color(6); cout << convert_spell(c11); Color(7);cout << "]"; cout << spell_level_checker(heal); Color(7);
        cout << "            ["; Color(6); cout << convert_spell(c21); Color(7); cout << "]"; cout << spell_level_checker(greater_heal);Color(7);
        cout << "     ["; Color(6); cout << convert_spell(c31); Color(7); cout << "]"; cout << spell_level_checker(regeneration) << endl;Color(7);
        cout << "["; Color(6); cout << convert_spell(c12); Color(7); cout << "]"; cout << spell_level_checker(cure);Color(7);
        cout << "            ["; Color(6); cout << convert_spell(c22); Color(7); cout << "]"; cout << spell_level_checker(barrier);Color(7);
        cout << "          ["; Color(6); cout << convert_spell(c32); Color(7); cout << "]"; cout << spell_level_checker(holy_ground) << endl;Color(7);
        cout << "["; Color(6); cout << convert_spell(c13); Color(7); cout << "]"; cout << spell_level_checker(conjure_elixir);Color(7);
        cout << "  ["; Color(6); cout << convert_spell(c23); Color(7); cout << "]"; cout << spell_level_checker(escape);Color(7);
        cout << "           ["; Color(6); cout << convert_spell(c33); Color(7); cout << "]"; cout << spell_level_checker(doubleme) << endl;Color(7);
        cout << "["; Color(6); cout << convert_spell(c14); Color(7); cout << "]"; cout << spell_level_checker(magic_missile);Color(7);
        cout << "    ["; Color(6); cout << convert_spell(c24); Color(7); cout << "]"; cout << spell_level_checker(fireball);Color(7);
        cout << "         ["; Color(6); cout << convert_spell(c34); Color(7); cout << "]"; cout << spell_level_checker(immolation) << endl;Color(7);
        cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
        cout << "Change which Circle Spell?" << endl;
        cout << "[1] "; Color(3);
        if (heal.ready == 1) { cout << heal.name; }
        if (cure.ready == 1) { cout << cure.name; }
        if (conjure_elixir.ready == 1) { cout << conjure_elixir.name; }
        if (magic_missile.ready == 1) { cout << magic_missile.name; }
        cout << endl; Color(7);
        cout << "[2] "; Color(3);
        if (greater_heal.ready == 1) { cout << greater_heal.name; }
        if (barrier.ready == 1) { cout << barrier.name; }
        if (escape.ready == 1) { cout << escape.name; }
        if (fireball.ready == 1) { cout << fireball.name; }
        cout << endl; Color(7);
        cout << "[3] "; Color(3);
        if (regeneration.ready == 1) { cout << regeneration.name; }
        if (holy_ground.ready == 1) { cout << holy_ground.name; }
        if (doubleme.ready == 1) { cout << doubleme.name; }
        if (immolation.ready == 1) { cout << immolation.name; }
        cout << endl << endl; Color(7);
        cout << "[0] Back" << endl;

        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        string ans = "";
        ans = _getch();

        if (ans == "1")
        {
            if (heal.ready == 1 and hero_player.level >= 3 and c1 == 0)
            { 
                heal.ready = 0;
                cure.ready = 1;
                c1 = 1;
            }
            if (cure.ready == 1 and hero_player.level >= 4 and c1 == 0)
            {
                cure.ready = 0;
                conjure_elixir.ready = 1;
                c1 = 1;
            }
            if (cure.ready == 1 and hero_player.level < 4 and c1 == 0)
            {
                cure.ready = 0;
                heal.ready = 1;
                c1 = 1;
            }
            if (conjure_elixir.ready == 1 and hero_player.level < 5 and c1 == 0)
            {
                conjure_elixir.ready = 0;
                heal.ready = 1;
                c1 = 1;
            }
            if (conjure_elixir.ready == 1 and hero_player.level >= 5 and c1 == 0)
            {
                conjure_elixir.ready = 0;
                magic_missile.ready = 1;
                c1 = 1;
            }
            if (magic_missile.ready == 1 and hero_player.level >= 5 and c1 == 0)
            {
                magic_missile.ready = 0;
                heal.ready = 1;
                c1 = 1;
            }
            if (heal.ready != 1 and cure.ready != 1 and conjure_elixir.ready != 1 and magic_missile.ready != 1)
            {
                heal.ready = 1;
                c1 = 1;
            }
        }
        if (ans == "2")
        {
            if (greater_heal.ready == 1 and hero_player.level >= 7 and c2 == 0)
            {
                greater_heal.ready = 0;
                barrier.ready = 1;
                c2 = 1;
            }
            if (barrier.ready == 1 and hero_player.level >= 8 and c2 == 0)
            {
                barrier.ready = 0;
                escape.ready = 1;
                c2 = 1;
            }
            if (barrier.ready == 1 and hero_player.level < 8 and c2 == 0)
            {
                barrier.ready = 0;
                greater_heal.ready = 1;
                c2 = 1;
            }
            if (escape.ready == 1 and hero_player.level < 9 and c2 == 0)
            {
                escape.ready = 0;
                greater_heal.ready = 1;
                c2 = 1;
            }
            if (escape.ready == 1 and hero_player.level >= 9 and c2 == 0)
            {
                escape.ready = 0;
                fireball.ready = 1;
                c2 = 1;
            }
            if (fireball.ready == 1 and hero_player.level >= 9 and c2 == 0)
            {
                fireball.ready = 0;
                greater_heal.ready = 1;
                c2 = 1;
            }
            if (greater_heal.ready != 1 and barrier.ready != 1 and escape.ready != 1 and fireball.ready != 1 and hero_player.level >=6)
            {
                greater_heal.ready = 1;
                c2 = 1;
            }
        }

        if (ans == "3")
        {
            if (regeneration.ready == 1 and hero_player.level >= 11 and c3 == 0)
            {
                regeneration.ready = 0;
                holy_ground.ready = 1;
                c3 = 1;
            }
            if (holy_ground.ready == 1 and hero_player.level >= 12 and c3 == 0)
            {
                holy_ground.ready = 0;
                doubleme.ready = 1;
                c3 = 1;
            }
            if (holy_ground.ready == 1 and hero_player.level < 12 and c3 == 0)
            {
                holy_ground.ready = 0;
                regeneration.ready = 1;
                c3 = 1;
            }
            if (doubleme.ready == 1 and hero_player.level < 13 and c3 == 0)
            {
                doubleme.ready = 0;
                regeneration.ready = 1;
                c3 = 1;
            }
            if (doubleme.ready == 1 and hero_player.level >= 13 and c3 == 0)
            {
                doubleme.ready = 0;
                immolation.ready = 1;
                c3 = 1;
            }
            if (immolation.ready == 1 and hero_player.level >= 13 and c3 == 0)
            {
                immolation.ready = 0;
                regeneration.ready = 1;
                c3 = 1;
            }
            if (regeneration.ready != 1 and holy_ground.ready != 1 and doubleme.ready != 1 and immolation.ready != 1 and hero_player.level >= 10)
            {
                regeneration.ready = 1;
                c3 = 1;
            }
        }
        if (ans == "0" or ans == "\033")
        {
            a = 0;
        }
    }
}