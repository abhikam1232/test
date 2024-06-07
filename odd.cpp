#include <iostream>
using namespace std;
int main()
{
    cout << " This is a user define code to check whether it is odd" << endl;
    int num;
    cout << " Enter the number whichever u want:- " << endl;
    cin >> num;

    if (num % 2 != 0)
        cout << " it is odd";

    return 0;
}