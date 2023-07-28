#include <iostream>

using namespace std;

void InputArray2D(int Array[][50], int Row, int Column);
void OutputArray(int Array[][50], int Row, int Column);

int main()
{
	int arr[50][50];
	int n, m;
	cin >> n >> m;
	InputArray2D(arr, n, m);
	OutputArray(arr, n, m);
	return 0;
}

void InputArray2D(int Array[][50], int Row, int Column)
{
	cout << "Input 2D Array: \n";
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Column; j++)
		{
			cin >> Array[i][j];
		}
	}
}

void OutputArray(int Array[][50], int Row, int Column)
{
	cout << "Output 2D Array: \n";
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Column; j++)
		{
			cout << Array[i][j] << " ";
		}
		cout << "\n";
	}
}
