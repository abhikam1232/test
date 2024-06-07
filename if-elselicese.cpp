#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    cout << " Hello today we will check whether we are eligible to drive" << endl;
    cout << " I know that your name is Lalit & today we will take ur test" << endl;

    int age;
    cout << " Enter your age:- ";
    cin >> age;

    if (age >= 18)
        cout << " You are eligible to Drive " << endl;
    else
        cout << " You are not eligible to drive" << endl;
    return 0;
}
