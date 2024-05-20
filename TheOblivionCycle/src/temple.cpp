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
        
        int c11 = heal.ready; int c12 = cure.ready; int c13 = conjure_elixer.ready; int c14 = magic_missle.ready;
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
        cout << "["; Color(6); cout << convert_spell(c13); Color(7); cout << "]"; cout << spell_level_checker(conjure_elixer);Color(7);
        cout << "  ["; Color(6); cout << convert_spell(c23); Color(7); cout << "]"; cout << spell_level_checker(escape);Color(7);
        cout << "           ["; Color(6); cout << convert_spell(c33); Color(7); cout << "]"; cout << spell_level_checker(doubleme) << endl;Color(7);
        cout << "["; Color(6); cout << convert_spell(c14); Color(7); cout << "]"; cout << spell_level_checker(magic_missle);Color(7);
        cout << "    ["; Color(6); cout << convert_spell(c24); Color(7); cout << "]"; cout << spell_level_checker(fireball);Color(7);
        cout << "         ["; Color(6); cout << convert_spell(c34); Color(7); cout << "]"; cout << spell_level_checker(immolation) << endl;Color(7);
        cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
        cout << "Change which Circle Spell?" << endl;
        cout << "[1] "; Color(3);
        if (heal.ready == 1) { cout << heal.name; }
        if (cure.ready == 1) { cout << cure.name; }
        if (conjure_elixer.ready == 1) { cout << conjure_elixer.name; }
        if (magic_missle.ready == 1) { cout << magic_missle.name; }
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

        string ans = "";
        ans = _getch();

        if (ans == "1")
        {
            ;
        }
          
        if (ans == "0" or ans == "\033")
        {
            a = 0;
        }
    }
}