#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a program to check whether it is profit or loss"<<endl;
        int cost;
        cout<<" Enter the cost prize:- ";
        cin>>cost;

        int selling;
        cout<<" Enter the selling prize:- ";
        cin>>selling;

        if ( cost < selling){
            cout<<" It is basically a profit"<<endl;
            cout<<" The profit is about:- ";
            cout<< selling - cost <<endl;

        }

        else if ( cost > selling){
            cout<<" it is a loss";
            cout<<" Now the loss is about:- ";
            cout<<cost - selling <<endl;

        }
        else{
            cout<<" No profit no loss";
        }
        return 0;
    }