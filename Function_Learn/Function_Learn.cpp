// Function_Learn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;

void hello(int x);
void SwapNum(int& a, int& b);
void PrintList(int myList[]);
int MaxEl(int myArray[]);
int Max2ndEl(int myArray[]);

int main()
{
    int arr[] = { 1, 2, 3, 4 };
    //PrintList(arr);
    cout << Max2ndEl(arr) << "\n";
    return 0;
}

void hello(int a)
{
    cout << a << "\n" << endl;
}

void SwapNum(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void PrintList(int List[])
{
    for (int i = 0; i < sizeof(List); i++)
    {
        cout << List[i] << "\n";
    }
}

int MaxEl(int Array[])
{
    int max = 0;
    for (int i = 0; i < sizeof(Array); i++)
    {
        if (max < Array[i])
        {
            max = Array[i];
        }
    }
    return max;
}

int Max2ndEl(int Array[])
{
    int max = MaxEl(Array);
    int max2 = 0;
    for (int i = 0; i < sizeof(Array); i++)
    {
        if (Array[i] == max) continue;
        else
        {
            if (max2 < Array[i])
                max2 = Array[i];
        }
    }
    return max2;
}
