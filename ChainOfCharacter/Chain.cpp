#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	int n; cin >> n; //remain Enter
	cin.ignore();
	string s = "Neymar Jr";
	getline(cin, s);

	/*for (char x : s)
	{
		cout << x << " ";
	}*/

	stringstream ss(s);
	string tmp;
	int cnt = 0;
	while (ss >> tmp)
	{
		cout << tmp << endl;
	}
	cout << endl;
	return 0;
}