#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a program to check which is the largest among the three numbers "<<endl;
        int a;
        cout<<" Enter the 1st num:- ";
        cin>>a;

        int b;
        cout<<" Enter the 2nd num:- ";
        cin>>b;

        int c;
        cout<<" Enter the 3rd num:- ";
        cin>>c;

        if ( a>b and a>c ){
            cout<<" a is the largest num";
        }
        else if( b>a and b>c){
            cout<<" b is the greatest number";
        }
        else{
            cout<<" c is the largest number";
        }
        return 0;
            }