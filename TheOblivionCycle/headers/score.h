void player_score(player hero_player)
{
    system("cls");
    cout << " PLAYER SCORE" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " NAME: " << left << setw(12); cout << hero_player.name;
    cout << "LEVEL: " << left << setw(4); cout << hero_player.level;
    cout << "EXP: " << left << setw(8); cout << hero_player.level;
    cout << "GOLD : " << left << setw(8); cout << hero_player.gold << endl;
    cout << " HP: " << right << setw(4); cout << hero_player.hp << "/";
    cout << left << setw(4); cout << hero_player.hp_max; cout << "     ";
    cout << "LUCK: " << left << setw(2); cout << hero_player.luck << endl;
    cout << "                                                   " << endl;
    cout << " WPN: SHORT SWORD      ATK: 1D8   TYP: SLASHING    " << endl;
    cout << " ARM: CHAIN MAIL       DEF: 6     TYP: MEDIUM      " << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

    string ans;
    ans = _getch();
	
}