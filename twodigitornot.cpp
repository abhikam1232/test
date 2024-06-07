#include <iostream>
using namespace std;
int main()
{
    cout << " It is basiaclly a code to check whether it is two digit number or not" << endl;

    int num;
    cout << " Enter the number:- ";
    cin >> num;

    if (num > 9 and num < 100)
    {
        cout << " It is a two digit number guys we won" << endl;
    }
    else
    {
        cout << " It is not a two digit number guys we failed" << endl;
    }
    return 0;
}