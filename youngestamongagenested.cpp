#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a program to determine youngest age among three people"<<endl;
        int ram;
        cout<<" Enter the age of ram:- ";
        cin>>ram;

        int sham;
        cout<<" Enter the age of sham:- ";
        cin>>sham;

        int ajay;
        cout<<" Enter the age of ajay:- ";
        cin>>ajay;

        if( ram<sham){

            if(ram<ajay){
                cout<<"ram is the smallest"<<endl;
            }
            else{
                cout<<" ajay is the smallest"<<endl;

            }
        }
            else{
                cout<<"sham is the smallest"<<endl;
            }
            return 0;

            

        }
        


    