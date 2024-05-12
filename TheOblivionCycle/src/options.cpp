#include "../headers/functions.h"

extern int intro_sequence;
extern int music_setting; // 1-on 0-off
extern int music_vol; //0 mut 100 full
extern int music_track;
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
    Color(6); cout << "- +"; Color(7); cout << "";
    cout << " Music Volume: [";
    
    // Print Volume HPbar
    bar_ticks += music_vol / 5;
    while (bar_ticks > 0)
    {
        vol_bar += ":";
        bar_ticks -= 1;
    }
    vol_line = vol_bar;
    Color(2); cout << left << setw(20); cout << vol_line; Color(7); cout << "] " << endl;
    cout << "("; Color(6); cout << "3"; Color(7); cout << ") Music Player" << endl;
    cout << "("; Color(6); cout << "4"; Color(7); cout << ") Information" << endl << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1") 
        if (intro_sequence == 1) { intro_sequence = 0; }
        else { intro_sequence = 1; }
    if (ans == "3")
    {
        music_player();
    }


    if (ans == "2")
        if (music_setting == 1) 
        { 
            music_setting = 0;
            mciSendString(L"close MyFile", NULL, 0, 0);
        }
        else 
        { 
                music_setting = 1;
                stream_music(music_track);
        }

    if (ans == "4")
        { 
        print_gameinfo();
        Color(6); cout  << "\n\nGame:"; Color(7); cout << " The Oblivion Cycle, Part I: The Shimmering Gate" << endl;
        Color(6); cout << "Version:"; Color(7); cout<< " .01" << endl;
        Color(6); cout << "Copyright:"; Color(7); cout << " RLM Productions"; cout << endl;
        Color(6); cout << "Author:" ; Color(7); cout << " Richard Miller"; cout << endl;
        Color(6); cout << "Music:"; Color(7); cout << " Alkakrab - Itch.io"; cout << endl;

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
        if (music_vol == 100)
        {
            mciSendString(L"setaudio MyFile volume to 1000", NULL, 1, 0);

        }
        if (music_vol == 80)
        {
            mciSendString (L"setaudio MyFile volume to 800", NULL, 1, 0);

        }
        if (music_vol == 60)
        {
            mciSendString(L"setaudio MyFile volume to 600", NULL, 1, 0);

        }
        if (music_vol == 40)
        {
            mciSendString(L"setaudio MyFile volume to 400", NULL, 1, 0);

        }
        if (music_vol == 20)
        {
            mciSendString(L"setaudio MyFile volume to 200", NULL, 1, 0);

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
        if (music_vol == 0)
        {
            mciSendString(L"setaudio MyFile volume to 0", NULL, 1, 0);

        }
        if (music_vol == 80)
        {
            mciSendString(L"setaudio MyFile volume to 800", NULL, 1, 0);

        }
        if (music_vol == 60)
        {
            mciSendString(L"setaudio MyFile volume to 600", NULL, 1, 0);

        }
        if (music_vol == 40)
        {
            mciSendString(L"setaudio MyFile volume to 400", NULL, 1, 0);

        }
        if (music_vol == 20)
        {
            mciSendString(L"setaudio MyFile volume to 200", NULL, 1, 0);

        }
    }



    if (ans == "0") { return 1; }

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
                cout << "Drinking this potion can restore the health of the player," << endl;
                cout << "however, the you can only withstand 1/3 of its volume at a time." << endl << endl;
                cout << "Using this flask restores 75% of the players health. The flask" << endl;
                cout << "has 3 charges which can be refilled at the temple for a price." << endl << endl;

                system("pause");
            }
            if (ans == "4")
            {
                system("cls");
                cout << "Enemy Types" << endl;
                cout << "----------------" << endl;
                cout << "The world of Astoria is crawling with denziens of another world." << endl;
                cout << "These enemies sometimes share common characteristics, such as," << endl;
                cout << "enraged animals, or the army of the undead." << endl;
                cout << "Knowledge in the types of enemies could provide a substantial advantage" << endl;
                cout << "during combat." << endl << endl;

                system("pause");
            }

            if (ans == "5")
            {
                system("cls");
                cout << "Quests" << endl;
                cout << "----------------" << endl;
                cout << "As a player character you will be asked to fufill special tasks." << endl;
                cout << "Quests are given by the King who resides in the castle. Upon completion" << endl;
                cout << "of a quest, the player recieves a reward. This is usually experience points," << endl;
                cout << "and or gold." << endl << endl;
                cout << "If you forget which quest you are on, simply open the Character screen and look" << endl;
                cout << "at the current quest." << endl << endl;

                system("pause");
            }
            if (ans == "6")
            {
                system("cls");
                cout << "Trinkets" << endl;
                cout << "----------------" << endl;
                cout << "Trinkets are usuful gadgets or trophies that supplement the player's." << endl;
                cout << "combat in some way. There are trinkets that help increase damage, and some" << endl;
                cout << "that help with defense. " << endl << endl;
                cout << "Be sure to try different combinations of trinkets to gain an edge against" << endl;
                cout << "your opponent. It may very well save your life!" << endl << endl;

                system("pause");
            }

            if (ans == "\033")
            {
                i = 1;
            }
    }
}

void check_music_vol()
{
    if (music_vol == 0)
    {
        mciSendString(L"setaudio MyFile volume to 0", NULL, 1, 0);
    }
    if (music_vol == 20)
    {
        mciSendString(L"setaudio MyFile volume to 200", NULL, 1, 0);
    }
    if (music_vol == 40)
    {
        mciSendString(L"setaudio MyFile volume to 400", NULL, 1, 0);
    }
    if (music_vol == 60)
    {
        mciSendString(L"setaudio MyFile volume to 600", NULL, 1, 0);
    }
    if (music_vol == 80)
    {
        mciSendString(L"setaudio MyFile volume to 800", NULL, 1, 0);
    }
    if (music_vol == 100)
    {
        mciSendString(L"setaudio MyFile volume to 1000", NULL, 1, 0);
    }
}

void music_player()
{
    int keep = 1;
    while (keep == 1)
    {
        string music_text;
        if (music_track == 1) { music_text = "Elven Ruins"; }
        if (music_track == 2) { music_text = "To Oblivion"; }
        if (music_track == 3) { music_text = "Mysterious Gate"; }
        if (music_track == 4) { music_text = "Cryptic Walls"; }
        if (music_track == 5) { music_text = "Bard's Story"; }
        if (music_track == 6) { music_text = "Shimmering Lights"; }
        if (music_track == 7) { music_text = "The Iron Wall"; }
        if (music_track == 8) { music_text = "Lullaby"; }
        if (music_track == 9) { music_text = "Spiraling Descent"; }
        if (music_track == 10) { music_text = "Distant Stars"; }
        if (music_track == 11) { music_text = "Judgement"; }
        if (music_track == 12) { music_text = "Ascendancy"; }

        print_music_player();
        int bar1; for (bar1 = 0; bar1 < 60; bar1++) { cout << "-"; } cout << endl;
        cout << "Currently Selected: " << music_text << endl;
        bar1; for (bar1 = 0; bar1 < 60; bar1++) { cout << "-"; } cout << endl;
        cout << endl;
        cout << "[1] Elven Ruins          [7] The Iron Wall" << endl;
        cout << "[2] To Oblivion          [8] Lullaby" << endl;
        cout << "[3] Mysterious Gate      [9] Spiraling Descent" << endl;
        cout << "[4] Cryptic Walls        [a] Distant Stars" << endl;
        cout << "[5] Bard's Story         [b] Judgement" << endl;
        cout << "[6] Shimmering Lights    [c] Ascendancy" << endl << endl;
        cout << "[0] Back" << endl;

        string ans;
        ans = _getch();

        if (ans == "1") { music_track = 1; stream_music(music_track); }
        if (ans == "2") { music_track = 2; stream_music(music_track); }
        if (ans == "3") { music_track = 3; stream_music(music_track); }
        if (ans == "4") { music_track = 4; stream_music(music_track); }
        if (ans == "5") { music_track = 5; stream_music(music_track); }
        if (ans == "6") { music_track = 6; stream_music(music_track); }
        if (ans == "7") { music_track = 7; stream_music(music_track); }
        if (ans == "8") { music_track = 8; stream_music(music_track); }
        if (ans == "9") { music_track = 9; stream_music(music_track); }
        if (ans == "a") { music_track = 10; stream_music(music_track);}
        if (ans == "b") { music_track = 11; stream_music(music_track);}
        if (ans == "c") { music_track = 12; stream_music(music_track);}
        if (ans == "0") { keep=0; }

        
    }
}

void stream_music(int music_selected)
{
    if (music_selected == 1)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/01.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 2)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/02.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 3)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/03.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 4)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/04.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 5)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/05.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 6)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/06.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 7)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/07.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 8)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/08.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 9)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/09.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 10)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/10.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 11)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/11.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    if (music_selected == 12)
    {
        mciSendString(L"close MyFile", NULL, 0, 0);
        mciSendString(L"open data/music/12.mp3 alias MyFile", NULL, 0, 0);
        mciSendString(L"play MyFile repeat", NULL, 1, 0);
    }
    
    
    
    check_music_vol(); // last step
}