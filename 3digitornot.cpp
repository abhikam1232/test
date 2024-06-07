#include <iostream>
using namespace std;
int main()
{
    cout << " This is to check whether that number is three digit or not" << endl;
    int num;
    cout << " Enter the number:- ";
    cin >> num;

    if (num > 99 and num < 1000)
    {
        cout << " It is a three digit number" << endl;
    }
    else
    {
        cout << " It is not a three digit number";
    }
}