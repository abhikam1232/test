#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a program to determine whether it is four digit number or not"<<endl;
        int num;
        cout<<" Enter the number:- ";
        cin>>num;

        if ( num>999 and num< 9999){
            cout<< " It is a basically  a four digit number:- ";
        }
        else{
            cout<<" This is not a four digit number"<<endl;
        }
        return 0;
    }