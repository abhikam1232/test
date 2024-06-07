#include <iostream>
using namespace std;
int main()
{
    cout << " This is a code to check whether u are eligible to get married or not" << endl;

    float age;
    cout << " Enter your age:- ";
    cin >> age;

    if (age >= 21)
    {
        cout << " You are eligible to get married " << endl;
    }
    else
    {
        cout << " You are not eligible to get married" << endl;
    }
    return 0;
}