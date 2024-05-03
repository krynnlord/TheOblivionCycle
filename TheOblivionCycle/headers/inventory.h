void inventory()
{
	print_inventory();
    cout << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " ["; Color(14); cout << potion.qty; Color(7); cout << "]POTION" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << " [1]Weapons [2]Armor [3]Spells [4]Score [5]Exit" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;

	string ans;
	ans = _getch();

}