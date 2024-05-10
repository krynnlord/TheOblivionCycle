#include "../headers/functions.h"

extern int intro_sequence;
extern int music_setting; // 1-on 0-off
extern int music_vol; //0 mut 100 full
extern int exit_mode; // leave game via main menu

int options(int i)
{
    string vol_bar = "";
    int bar_ticks = 0;
    string vol_line;

    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Show Intro: ";
    cout << "Currently ";
    if (intro_sequence == 1) { Color(2); cout << "(On)"; Color(7); cout << endl; }
    if (intro_sequence == 0) { Color(4); cout << "(Off)"; Color(7); cout << endl; }
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Music On/Off: ";
    cout << "Currently ";
    if (music_setting == 1) { Color(2); cout << "(On)"; Color(7); cout << endl; }
    if (music_setting == 0) { Color(4); cout << "(Off)"; Color(7); cout << endl; }
    //Volume
    //Color(6); cout << "- +"; Color(7); cout << "";
    //cout << " Music Volume: [";
    //
    //// Print Volume HPbar
    //bar_ticks += music_vol / 5;
    //while (bar_ticks > 0)
    //{
    //    vol_bar += ":";
    //    bar_ticks -= 1;
    //}
    //vol_line = vol_bar;
    //Color(2); cout << left << setw(20); cout << vol_line; Color(7); cout << "] " << endl;
    





    cout << "("; Color(6); cout << "3"; Color(7); cout << ") Information" << endl;
    cout << "("; Color(6); cout << "4"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1") 
        if (intro_sequence == 1) { intro_sequence = 0; }
        else { intro_sequence = 1; }
    
    if (ans == "2")
        if (music_setting == 1) 
        { 
            music_setting = 0;
            PlaySound(NULL, NULL, 0);
        }
        else 
        { 
            music_setting = 1;
            PlaySound(L"data/music/01.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
        }

    if (ans == "3")
        { 
        print_gameinfo();
        Color(6); cout  << "\n\nGame:"; Color(7); cout << " The Oblivion Cycle, Part I: The Shimmering Gate" << endl;
        Color(6); cout << "Version:"; Color(7); cout<< " .01" << endl;
        Color(6); cout << "Copyright:"; Color(7); cout << " RLM Productions"; cout << endl;
        Color(6); cout << "Author:" ; Color(7); cout << " Richard Miller"; cout << endl;
            string temp;
            temp = _getch();
        }

    //music Vol
    if (ans == "=" or ans == "+")
    {
        if (music_vol == 100)
        {
            music_vol = 100;
        }
        else
        {
            music_vol += 20;
        }
    }

    if (ans == "-" or ans == "_")
    {
        if (music_vol == 0)
        {
            music_vol = 0;
        }
        else
        {
            music_vol -= 20;
        }
    }



    if (ans == "4") { return 1; }

    return 0;

}


void info_screen()
{
    
    int zz = 0;
    while (zz == 0)
    {
        print_infoscreen();

        string ans;
        ans = _getch();

        if (ans == "1")
        {
            player_score();
        }

        if (ans == "2")
        {
            trinkets();
        }

        if (ans == "3")
        {
            spellbook();
        }

        if (ans == "4")
        {
            weapons_display();
        }

        if (ans == "5")
        {
            armor_display();
        }

        if (ans == "6")
        {
            help_screen();
        }

        if (ans == "7")
        {
            int i = 0;
            while (i == 0)
            {
                print_options();
                cout << endl;
                i = options(i);
            }
        }

        if (ans == "8")
        {
            exit_mode = 1;
            return;
        }

        if (ans == "0" or ans == "\033")
        {
            zz = 1;
        }
    }




}

void help_screen()
{
    int i = 0;
    while (i == 0)
    {
        print_help();

        string ans;
        ans = _getch();
   
            if (ans == "1")
            {
                system("cls");
                cout << "Character Stats" << endl;
                cout << "----------------" << endl;
                cout << "The player character has these major stats:" << endl << endl;
                cout << "      [HP] Amount of current life" << endl;
                cout << "   [LEVEL] Current Player Level" << endl;
                cout << "     [EXP] Total Experience Points" << endl;
                cout << "    [GOLD] Amount of Wealth" << endl;
                cout << "    [LUCK] Chance for extra attacks" << endl;
                cout << " [ESSENCE] The essesnce of monsters" << endl;
                cout << "    [PROF] Proficiency Level. Governs attack power" << endl<< endl;
                system("pause");
            }

            if (ans == "2")
            {
                system("cls");
                cout << "The Magic System" << endl;
                cout << "----------------" << endl;
                cout << "Magic is the practice of arcane arts. There are 3 circles and" << endl;
                cout << "in each of the three circles are 4 disiplines:" << endl << endl;
                cout << "["; Color(9); cout << "Invocation"; Color(7); cout <<"] Healing Magic" << endl;
                cout << "Spells: Heal, Greater Heal, Regeneration" << endl<< endl;
                cout << "["; Color(10); cout << "Abjuration"; Color(7); cout << "] Protective Magic" << endl;
                cout << "Spells: Cure, Barrier, Holy Ground" << endl << endl;
                cout << "["; Color(14); cout << "Conjuration"; Color(7); cout << "] Creation/Alteration Magic" << endl;
                cout << "Spells: Create Food, Escape, Double" << endl << endl;
                cout << "["; Color(12); cout << "Evocation"; Color(7); cout << "] Destructive Magic" << endl;
                cout << "Spells: Magic Missle, Fireball, Immolation" << endl << endl;

                
                system("pause");
            }

            if (ans == "3")
            {
                system("cls");
                cout << "The Celestial Flask" << endl;
                cout << "----------------" << endl;
                cout << "The Celestial flask is imbuned with power of the divine." << endl;
                cout << "Drinking a this potion can restore the health of the player," << endl;
                cout << "however, the maximum potiential is limited to 1/3 of its volume." << endl << endl;
                cout << "Using this flask restores 75% of the players health. The flask" << endl;
                cout << "has 3 charges which can be refilled at the temple for a price." << endl << endl;

                system("pause");
            }

            if (ans == "\033")
            {
                i = 1;
            }
    }
}