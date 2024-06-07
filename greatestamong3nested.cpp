#include <iostream>
using namespace std;
    int main(){
        cout<<" This is the first program using nested if else"<<endl;
        int a;
        cout<<" Enter the 1st num:- ";
        cin>>a;

        int b;
        cout<<" Enter the 2nd num:- ";
        cin>>b;

        int c;
        cout<<" Enter the 3rd num:- ";
        cin>>c;

        if( a>b){

            if( a>c){
                cout<<" a is the greatest"<<endl;
            }
            else{
                cout<<" c is the greatest"<<endl;
            }

        }
        else{
            cout<<" c is the greatest"<<endl;
        }
        return 0;


    }