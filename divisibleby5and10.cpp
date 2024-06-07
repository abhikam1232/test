#include <iostream>
using namespace std;
int main()
{
    cout << " This is a code to check whether it is divisible by 5 as well as 10 " << endl;

    int num1;
    cout << " Enter the number:- ";
    cin >> num1;

    if (num1 % 5 == 0)
    {
        cout << " It is divisible by 5" << endl;  
    }
    else
    {
        cout << " It is not divisible by 5" << endl;
    }
    cout << endl;

    int num2;
    cout << " Enter the 2nd number:- ";
    cin >> num2;

    if (num2 % 10 == 0)
    {
        cout << " It is divisible by 10" << endl;
    }
    else
    {
        cout << " It is not divisible by 10" << endl;
    }
    return 0;
}