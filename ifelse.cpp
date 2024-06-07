#include <iostream>
using namespace std;
int main()
{
    cout << " This is a program to check whether it is even or odd" << endl;

    int num;
    cout << " Enter the number:- ";
    cin >> num;

    if (num % 2 == 0)
        cout << " It is an even number " << endl;
    else
        cout << " It is a odd number " << endl;
    return 0;
}