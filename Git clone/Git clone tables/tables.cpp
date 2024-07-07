#include <iostream>
using namespace std;
    int main(){
        // This is a program to print the table of 2,4,6,8,10
        cout<<endl<<endl;
        cout<<" This is the table of 2"<<endl;
        for (int i=2; i<=20; i=i+2){
            cout<<" "<<i<<"";
        }

        cout<<" This is the table of 4"<<endl;
        for (int i=4; i<=40; i=i+4){
            cout<<" "<<i<<"";
        }

        cout<<" This is a table of 6"<<endl;
        for (int i=6; i<=60; i=i+6){
            cout<<" "<<i<<"";
        }

        cout<<" This is the table of 8"<<endl;
        for (int i=8; i<=80; i=i+8){
            cout<<" "<<i<<"";
        }

        cout<<" This is the table of 10"<<endl;
        for (int i=10; i<=100; i=i+10){
            cout<<" "<<i<<"";
        }
        return 0;
    }