#include <iostream>
using namespace std;
int main()
{
    cout << " This is a program to check whether it is even or odd" << endl;

    int num;
    cout << " Enter the number:- " << endl;
    cin >> num;

    if (num % 2 == 0)
        cout << " It is an Even number" << endl;

    if (num % 2 != 0)
        cout << " It is basically an odd number" << endl;
    return 0;
}