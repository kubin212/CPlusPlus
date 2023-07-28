#include <iostream>
#include <string>

using namespace std;

// 1D Array
void InputArray1D(int Array[], int N);
void OutputArray1D(int Array[], int N);
void InputArray2D(int Array[][10], int Row, int Column);
void OutputArray2D(int Array[][10], int Row, int Column);
void CreatePrefix1D(int Array[], int Prefix[], int N);
int QuerySumfromLtoR1D(int Prefix[], int Left, int Right);
void CreatePrefix2D(int Array[][10], int Prefix[][10], int Row, int Column);
int QuerySumRectangle2D(int Prefix[][10], int Row1, int Row2, int Column1, int Column2);

int main()
{
	/* Query on 1D Array */
	/*int a[100], prefix[100];
	int n; cin >> n;
	InputArray1D(a, n);
	CreatePrefix1D(a, prefix, n);
	OutputArray1D(a, n);
	OutputArray1D(prefix, n);
	int q; cin >> q;
	while (q--)
	{
		int l, r; cin >> l >> r;
		cout << QuerySumfromLtoR1D(prefix, l, r) << "\n";
	}*/

	/* Query on 2D Array */
	int arr[10][10], pre[10][10];
	int row, col; cin >> row >> col;
	InputArray2D(arr, row, col);
	OutputArray2D(arr, row, col);
	CreatePrefix2D(arr, pre, row, col);
	OutputArray2D(pre, row, col);
	int query; cin >> query;
	while (query--)
	{
		int r1, r2, c1, c2;
		cin >> r1 >> r2 >> c1 >> c2;
		cout << QuerySumRectangle2D(pre, r1, r2, c1, c2) << "\n";
	}

	cout << endl;
	return 0;
}

void InputArray1D(int Array[], int N)
{
	for (int i = 0; i < N; i++)
	{
		//cout << "Insert element " << i << " : ";
		cin >> Array[i];
	}
}

void OutputArray1D(int Array[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

void InputArray2D(int Array[][10], int Row, int Column)
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

void OutputArray2D(int Array[][10], int Row, int Column)
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

void CreatePrefix1D(int Array[], int Prefix[], int N)
{
	Prefix[0] = { 0 };
	for (int i = 1; i <= N; i++)
	{
		Prefix[i] = Prefix[i - 1] + Array[i];
	}
}

int QuerySumfromLtoR1D(int Prefix[], int Left, int Right)
{
	int sum = Prefix[Right] - Prefix[Left - 1];
	return sum;
}

void CreatePrefix2D(int Array[][10], int Prefix[][10], int Row, int Column)
{
	for (int i = 0; i <= Row; i++)
	{
		for (int j = 0; j <= Column; j++)
		{
			if (i == 0 || j == 0)
			{
				Prefix[i][j] = 0;
			}
			else
			{
				Prefix[i][j] = Prefix[i - 1][j] + Prefix[i][j - 1] - Prefix[i - 1][j - 1] + Array[i][j];
			}
		}
	}
}

int QuerySumRectangle2D(int Prefix[][10], int Row1, int Row2, int Column1, int Column2)
{
	int sum = Prefix[Row2][Column2] - Prefix[Row1 - 1][Column2] - Prefix[Row2][Column1 - 1] + Prefix[Row1 - 1][Column1 - 1];
	return sum;
}