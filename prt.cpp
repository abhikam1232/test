#include <iostream>
using namespace std;
int main()
{
    cout << " This is a program to find Simple Intrest " << endl;

    float P;
    cout << " Enter the Principle:- ";
    cin >> P;
    cout << endl;

    float R;
    cout << " Enter the Rate of Intrest:- " << endl;
    cin >> R;
    cout << endl;

    float T;
    cout << " Enter the time Period:- ";
    cin >> T;
    cout << endl;

    cout << " The simple intrest:- " << endl;
    cout << (P * R * T) / 100 << endl;
    cout << endl;
    return 0;
}