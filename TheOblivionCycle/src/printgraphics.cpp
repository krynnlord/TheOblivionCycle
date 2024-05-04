#include "../headers/functions.h"

void print_village()
{
    system("cls");    
    Color(6); 
    
string line1 =R"( _____         ____     _______________   ________      _________)";
string line2 =R"(|o o o|_______|    |___|  The Village  | | # # #  |____|o o o o  |  /\)";
string line3 =R"(|o o o|  * * *|: ::|. .|               |o| # # #  |. . |o o o o  | //\\)";
string line4 =R"(|o o o|* * *  |::  |. .| []  []  []  []|o| # # #  |. . |o o o o  |((||)))";
string line5 =R"(|o o o|**  ** |:  :|. .| []  []  []    |o| # # #  |. . |o o o o  |((||)))";
string line6 =R"(|_[]__|__[]___|_||_|__<|____________;;_|_|___/\___|_.|_|____[]___|  ||)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_blacksmith()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(|_|    ==||==     |_|      ||      |_|   \  -----   /  |_||/|)";
string line2 =R"(|_|      ||       |_|      ||      |_|    \   |    /   |_|/||)";
string line3 =R"(|_|      ||       |_|     [||]     |_|     \  |   /    |_||/|)";
string line4 =R"(|_|      \/       |_|      ||      |_|      \____/     |_|/||)";
string line5 =R"(|_|___ WEAPONS ___|_|      ||      |_|______ ARMOR ____|_||/|)";
string line6 =R"(|_|_|_|_|_|_|_|_|_|_|______||______|_|_|_|_|_|_|_|_|_|_|_|/||)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_castle()
{
    system("cls");    
    Color(6); 
    
string line1 =R"([______]                   The Castle                     [______])";
string line2 =R"( |    |       [_______]                    [_______]       |    |)";
string line3 =R"( |    [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]    |)";
string line4 =R"( |             |     |/'    ____..____    '\|     |             |)";
string line5 =R"(  \  []        |     |    /'    ||    '\    |     |        []  /)";
string line6 =R"(   |      []   |     |   |o     ||     o|   |     |  []       |)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_stones()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(          :`.---------`.          .-----------.)";
string line2 =R"(          '.|_.------..'          :`.----------`.  .-----.._)";
string line3 =R"(           | ||    | ||           `.|__.------..' |`--..__.'|)";
string line4 =R"(           | ||__..| ||-._ ___    | | |.... | ||-.|`--.._ |.'----.)";
string line5 =R"(    _ .:::/ / |    | ||   ___  `--| | |  _  | ||  | | | | |\      `.)";
string line6 =R"(  .` `.  -'.|_|    `.||  /`.  `.  '.|_\     `.|/  | | | | ||`.      `.)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_inn()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(      *** | ^^  ^^ |---------------------------| ^^  ^^ |--)";
string line2 =R"(     *****| []  [] |    INN    _____    INN    | []  [] | |)";
string line3 =R"(    *******        |          /_____\          |      * | |)";
string line4 =R"(   *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |)";
string line5 =R"(  ***********]  [] |  []  []  |  |  |  []  []  | ===***** |)";
string line6 =R"( *************     |         @|__|__|@         |/ |*******|)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_provisions()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(|_|      ||       |_|      ||      |_|       ||        |_||/|)";
string line2 =R"(|_|     /  \      |_|      ||      |_|      /  \       |_|/||)";
string line3 =R"(|_|    /    \     |_|     [||]     |_|     /    \      |_||/|)";
string line4 =R"(|_|   (______)    |_|      ||      |_|    (______)     |_|/||)";
string line5 =R"(|_|____ ITEMS ____|_|      ||      |_|____ POTION _____|_||/|)";
string line6 =R"(|_|_|_|_|_|_|_|_|_|_|______||______|_|_|_|_|_|_|_|_|_|_|_|/||)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_temple()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(|/  |      |       ,' ', |      :::      | ,' ',       |      |/  |)";
string line2 =R"(|/  |     ( )     (:.___)\_____:::::_____/(:.___)     ( )     |/  |)";
string line3 =R"(|===|     |=|   |  |(_)|__)-------------(__|(_)|  |   |=|     |===|)";
string line4 =R"(|/  |     |:|   |_.----|  ____ TEMPLE ___  |----._|   |:|     |/  |)";
string line5 =R"(|/  |     |:|   | | __ | [,-------------,] | __ | |   |:|     |/  |)";
string line6 =R"(|/  |     |:|   | |/  \| [|    _.-._    |] |/  \| |   |:|     |/  |)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_title()
{
    system("cls");    
    Color(4); 
    
string line1 =R"( _____ _             ___  _     _ _       _                ____           _)";
string line2 =R"(|_   _| |__   ___   / _ \| |__ | (_)_   _(_) ___  _ __    / ___|   _  ___| | ___)";
string line3 =R"(  | | | '_ \ / _ \ | | | | '_ \| | \ \ / / |/ _ \| '_ \  | |  | | | |/ __| |/ _ \)";
string line4 =R"(  | | | | | |  __/ | |_| | |_) | | |\ V /| | (_) | | | | | |__| |_| | (__| |  __/)";
string line5 =R"(  |_| |_| |_|\___|  \___/|_.__/|_|_| \_/ |_|\___/|_| |_|  \____\__, |\___|_|\___|)";
string line6 =R"(                                                               |___/)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_options()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(  ____  _____ _______ _____ ____  _   _  _____)";
string line2 =R"( / __ \|  __ \__   __|_   _/ __ \| \ | |/ ____|)";
string line3 =R"(| |  | | |__) | | |    | || |  | |  \| | (___)";
string line4 =R"(| |  | |  ___/  | |    | || |  | | . ` |\___ \)";
string line5 =R"(| |__| | |      | |   _| || |__| | |\  |____) |)";
string line6 =R"( \____/|_|      |_|  |_____\____/|_| \_|_____/)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_createhero()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(  _____ _____  ______       _______ ______   _    _ ______ _____   ____)";
string line2 =R"( / ____|  __ \|  ____|   /\|__   __|  ____| | |  | |  ____|  __ \ / __ \)";
string line3 =R"(| |    | |__) | |__     /  \  | |  | |__    | |__| | |__  | |__) | |  | |)";
string line4 =R"(| |    |  _  /|  __|   / /\ \ | |  |  __|   |  __  |  __| |  _  /| |  | |)";
string line5 =R"(| |____| | \ \| |____ / ____ \| |  | |____  | |  | | |____| | \ \| |__| |)";
string line6 =R"( \_____|_|  \_\______/_/    \_\_|  |______| |_|  |_|______|_|  \_\\____/)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_gameinfo()
{
    system("cls");    
    Color(6); 
    
string line1 =R"(________   _ ______ ____ ______  __  __       _______ _____ ____  _   _)";
string line2 =R"(|_   _| \ | |  ____/ __ \|  __ \|  \/  |   /\|__   __|_   _/ __ \| \ | |)";
string line3 =R"(  | | |  \| | |__ | |  | | |__) | \  / |  /  \  | |    | || |  | |  \| |)";
string line4 =R"(  | | | . ` |  __|| |  | |  _  /| |\/| | / /\ \ | |    | || |  | | . ` |)";
string line5 =R"( _| |_| |\  | |   | |__| | | \ \| |  | |/ ____ \| |   _| || |__| | |\  |)";
string line6 =R"(|_____|_| \_|_|    \____/|_|  \_\_|  |_/_/    \_\_|  |_____\____/|_| \_|)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_rlm()
{
    system("cls");    
    Color(3); 
    
string line1 =R"( _____  _      __  __   _____               _            _   _)";
string line2 =R"(|  __ \| |    |  \/  | |  __ \             | |          | | (_))";
string line3 =R"(| |__) | |    | \  / | | |__) | __ ___   __| |_   _  ___| |_ _  ___  _ __  ___)";
string line4 =R"(|  _  /| |    | |\/| | |  ___/ '__/ _ \ / _` | | | |/ __| __| |/ _ \| '_ \/ __|)";
string line5 =R"(| | \ \| |____| |  | | | |   | | | (_) | (_| | |_| | (__| |_| | (_) | | | \__ \)";
string line6 =R"(|_|  \_\______|_|  |_| |_|   |_|  \___/ \__,_|\__,_|\___|\__|_|\___/|_| |_|___/)";

cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl ;
Color(7);
}

void print_spellbook()
{
    system("cls");
    Color(3);

    string line1 = R"(     __)";
    string line2 = R"(    (`/\)";
    string line3 = R"(    `=\/\ __...--~~~~~-._   _.-~~~~~--...__)";
    string line4 = R"(     `=\/\     SPELL     \ /     BOOK      \\)";
    string line5 = R"(      `=\/                V                 \\)";
    string line6 = R"(      //_\___--~~~~~~-._  |  _.-~~~~~~--...__\\)";
    string line7 = R"(     //  ) (..----~~~~._\ | /_.~~~~----.....__\\)";
    string line8 = R"(    ===(     )==========\\|//====================)";
    string line9 = R"(        \___/           `---`)";




    cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl;
    cout << line7 << endl << line8 << endl << line9 << endl;
    Color(7);

}

void print_score()
{
    
    system("cls");
    Color(10);
    
    string line1 = R"(      ,)";
    string line2 = R"(  ,   |\ ,__)";
    string line3 = R"(  | \  \ /  `.       _    _ ______ _____   ____)";
    string line4 = R"(   \ `-.:.    `\    | |  | |  ____| __  \ / __ \)";
    string line5 = R"(    `-.__`\=====|   | |__| | |__  | |__) | |  | |)";
    string line6 = R"(      /=`'/  ^ _\   |  __  |  __| |  _  /| |  | |)";
    string line7 = R"(    .'   /\    .=)  | |  | | |____| | \ \| |__| | )";
    string line8 = R"(   .-'  ' | '-(/_|  |_|  |_|______|_|  \_\\____/)";
    string line9 = R"( .'  __(  \  .'`)";
    string line10 = R"(/_.'`  `.  |`)";
    string line11 = R"(         \ |)";
    string line12 = R"(          |/)";

    cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl;
    cout << line7 << endl << line8 << endl << line9 << endl << line10 << endl << line11 << endl << line12 << endl;
    Color(7);
}

void print_inventory()
{

    system("cls");
    Color(10);

    string line1 = R"( ___ _   ___     _______ _   _ _____ ___  ______   __   (-))";
    string line2 = R"(|_ _| \ | \ \   / / ____| \ | |_   _/ _ \|  _ \ \ / / .-'-'-.)";
    string line3 = R"( | ||  \| |\ \ / /|  _| |  \| | | || | | | |_) \ V /  |-...-|)";
    string line4 = R"( | || |\  | \ V / | |___| |\  | | || |_| |  _ < | |   |___|_|)";
    string line5 = R"(|___|_| \_|  \_/  |_____|_| \_| |_| \___/|_| \_\|_|   `-...-')";

    cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl;
    Color(7);
}

void print_weapons()
{

    system("cls");
    Color(12);

    string line1 = R"(__        _______    _    ____   ___  _   _ ____     (__)";
    string line2 = R"(\ \      / / ____|  / \  |  _ \ / _ \| \ | / ___|   __) \)";
    string line3 = R"( \ \ /\ / /|  _|   / _ \ | |_) | | | |  \| \___ \  ( __=-|)";
    string line4 = R"(  \ V  V / | |___ / ___ \|  __/| |_| | |\  |___) |  \\ `)/ )";
    string line5 = R"(   \_/\_/  |_____/_/   \_\_|    \___/|_| \_|____/    \\ ()";
    
    cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl;
    Color(7);
}

void print_armor()
{

    system("cls");
    Color(5);

    string line1 = R"(    _    ____  __  __  ___  ____    |`-._/\_.-`|)";
    string line2 = R"(   / \  |  _ \|  \/  |/ _ \|  _ \   |    ||    |)";
    string line3 = R"(  / _ \ | |_) | |\/| | | | | |_) |  |___o()o___|)";
    string line4 = R"( / ___ \|  _ <| |  | | |_| |  _ <   \   o\/o   /)";
    string line5 = R"(/_/   \_\_| \_\_|  |_|\___/|_| \_\   \   ||   /)";

    cout << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl;
    Color(7);
}