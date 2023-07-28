#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;

struct SinhVien
{
	string msv, ten;
	double gpa{};

	/*SinhVien()
	{
		msv = "abcd";
		ten = "Nguyen Van A";
		gpa = 3.0;
	}

	SinhVien(string ma, string name, double diem)
	{
		msv = ma;
		ten = name;
		gpa = diem;
	}*/

	void PrintInfo()
	{
		cout << msv << " " << ten << " " << fixed << setprecision(2) << gpa << " " << endl;
	}

	void InputInfo()
	{
		cin >> msv;
		cin.ignore();
		getline(cin, ten);
		cin >> gpa;
	}

	bool operator < (const SinhVien other)
	{
		return gpa < other.gpa;
	}
};

struct Complex
{
	int a, b; // a + bi

	/*Complex operator + (const Complex other)
	{
		Complex sum;
		sum.a = a + other.a;
		sum.b = b + other.b;
		return sum;
	}*/

	friend Complex operator + (const Complex x, const Complex y)
	{
		Complex sum;
		sum.a = x.a + y.a;
		sum.b = x.b + y.b;
		return sum;
	}

	//insertion
	friend istream& operator >> (istream& in, Complex& x)
	{
		in >> x.a >> x.b;
		return in;
	}

	//extraction
	friend ostream& operator << (ostream& out, Complex& x)
	{
		out << x.a << " " << x.b;
		return out;
	}
};

int main()
{
	/*SinhVien a;
	a.InputInfo();
	a.PrintInfo();*/

	/*Complex a, b;
	cin >> a >> b;
	Complex c = a + b;
	cout << c << endl;*/

	int n; cin >> n;
	SinhVien ds[100];
	for (int i = 0; i < n; i++)
	{
		ds[i].InputInfo();
	}
	sort(ds, ds + n);
	for (int i=0;i<n;i++)
	{
		ds[i].PrintInfo();
	}
	return 0;
}