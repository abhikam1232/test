#include <iostream>
using namespace std;
int main()
{
    cout <<endl<<endl<<endl;
    cout << " This is a code to check whether it is divisible by 5 or not" << endl;

    int num;
    cout << " Enter the number:- ";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << " It is divisible by 5" << endl;
        cout<<" Congrtulations!!!";
    }
    else
    {
        cout << " It is not divisible by 5" << endl;
    }
    return 0;
}