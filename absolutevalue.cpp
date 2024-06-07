#include <iostream>
using namespace std;
int main()
{
    cout << " It is a code to determine the absolute value of number" << endl;

    int num;
    cout << " Enter a number:- ";
    cin >> num;

    if (num >= 0)
    {
        cout << num;
    }
    else
    {
        cout << (-num);
    }
    return 0;
}