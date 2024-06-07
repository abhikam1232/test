#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a program to check which is the smallest among the 3 number:"<<endl;
        int a;
        cout<<" Enter the 1st number:- ";
        cin>>a;

        int b;
        cout<<" Enter the 2nd number:- ";
        cin>>b;

        int c;
        cout<<" Enter the 3rd number:- ";
        cin>>c;

        if ( a<b and a<c){
            cout<< " a is the smallest";
        }
        else if ( b<a and b<c){
            cout<<" b is the smallest";
        }
        else{
            cout<<" c is the smallest number";
        }
        return 0;    
        }