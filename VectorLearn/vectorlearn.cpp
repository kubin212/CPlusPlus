#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> v = { 1, 2, 3, 4, 5 };
	v.push_back(6);
	//v.pop_back();
	cout << v.size() << "\n";
	cout << v.back() << "\n";
	cout << v.front() << "\n";
	cout << v[v.size() - 1] << "\n";

	/*for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}*/

	for (auto i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}

	cout << endl;
	return 0;
}