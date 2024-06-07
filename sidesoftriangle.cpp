#include <iostream>
using namespace std;
int main()
{
    cout << " It is a program to dtermine whether it is valid triangle or not" << endl;
    int a;
    cout << " Enter the 1st side:- ";
    cin >> a;

    int b;
    cout << " Enter the 2nd side:- ";
    cin >> b;

    int c;
    cout << " Enter the 3rd side:- ";
    cin >> c;

    if (a + b > c and b + c > a and c + a > b)
    {
        cout << " Now it is a valid triangle" << endl;
    }
    else
    {
        cout << " It is not a valid triangle" << endl;
    }
    return 0;
}