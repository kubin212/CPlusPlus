#include <iostream>
#include <set>
#include <map>

using namespace std;

void SingleSet();
void MultiSet();
void ExampleMultiSet();
void SingleMap();
void ExampleMap();

int main()
{
	//SingleSet();
	//MultiSet();
	//ExampleMultiSet();
	//SingleMap();
	ExampleMap();

	cout << endl;
	return 0;
}

void SingleSet()
{
	int n; cin >> n;
	set <int> s;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		s.insert(x);
	}

	auto pos = s.find(9);
	for (auto it = pos; it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\n";

	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}

	cout << "\n";
	cout << s.count(5) << "\n";
	cout << s.size() << "\n";
}

void MultiSet()
{
	int n; cin >> n;
	multiset<int> ms;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		ms.insert(x);
	}
	ms.erase(1);
	for (int x : ms)
	{
		cout << x << " ";
	}
	cout << "\n";
}

void ExampleMultiSet()
{
	int n, k;
	cin >> n >> k;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	multiset<int> ms;
	for (int i = 0; i < n; i++)
	{
		ms.insert(arr[i]);
	}

	for (auto x : ms)
	{
		cout << x << " ";
	}
	//for (int i = k; i < n; i++)
	//{
	//	cout << *ms.rbegin() << " ";
	//	ms.erase(ms.find(arr[i - k]));
	//	//ms.insert(arr[i]);
	//}
	cout << "\n" << *ms.rbegin() << endl;
}

void SingleMap()
{
	//(key, value)
	map<char, int> mp;
	mp.insert({ 'A',1 });
	mp.insert({ 'B',2 });	
	mp.insert({ 'C',3 });
	for (pair<char, int> x : mp)
	{
		cout << x.first << "->" << x.second << "\n";
	}
	if (mp.find('A') != mp.end())
	{
		cout << "Found" << "\n";
	}
	else
	{
		cout << "Not found" << "\n";
	}
	mp.erase('C');
	cout << mp.size() << endl;

	cout << "\n";

}

void ExampleMap()
{
	map<int, int> mp;
	int n; cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i=0;i<n;i++)
	{
		if (mp[a[i]] != 0)
		{
			cout << a[i] << "->" << mp[a[i]] << endl;
			mp[a[i]] = 0;
		}
	}
}
