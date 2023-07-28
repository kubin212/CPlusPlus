#include <iostream>

using namespace std;

bool nt(int n);
void InputArray(int Array[], int N);
void OutputArray(int Array[], int N);

int main()
{
	int a[100];
	int n;
	cin >> n;
	InputArray(a, n);
	OutputArray(a, n);
	for (int x : a) //For each
	{
		if (!nt(x))
		{
			continue;
		}
		else
		{
			cout << x << " ";
		}
	}
	return 0;
}

void OutputArray(int Array[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

void InputArray(int Array[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << "Insert element " << i << " : ";
		cin >> Array[i];
	}
}

bool nt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return n > 1;
}