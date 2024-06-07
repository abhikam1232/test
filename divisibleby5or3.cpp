#include <iostream>
using namespace std;
int main()
{
    cout << "This is a code to check whether that number is divisible by 5 or 3" << endl;
    int num;
    cout << " Enter any number:- ";
    cin >> num;

    if (num % 3 == 0 or num % 5 == 0)
    {
        cout << " It is divisible by 3 or 5";
    }
    else
    {
        cout << " It is not divisible by 3 or 5" << endl;
    }
    return 0;
}