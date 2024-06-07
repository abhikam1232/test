#include <iostream>
using namespace std;
    int main(){
        cout<<" This is prograam where we will use and condition"<<endl;
        int num;
        cout<<" Enter the number:- "<<endl;
        cin>>num;

        if ( num%5 == 0 and num%3 ==0){
            cout<<" It is divisible by 5 and 3"<<endl;
        }
        else{
            cout<<" It is not divisible by 5 and 3 "<<endl;
        }
        return 0;


    }