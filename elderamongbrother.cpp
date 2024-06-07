#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a code to check who is bigger than whom among the brothers"<<endl;
        int bittu;
        cout<<" enter the age of bittu:- ";
        cin>>bittu;

        int lucky;
        cout<<" Enter the age of lucky:- ";
        cin>>lucky;

        int sonu;
        cout<<" Enter the age of sonu:- ";
        cin>>sonu;

        if(bittu>lucky){

            if(bittu>sonu){
                cout<<" bittu bhaiya is the biggest among both the brothers"<<endl;
            }
            else{
                cout<<" lucky is the biggest"<<endl;

                  }
        }
            else{
                cout<<" sonu is the biggest"<<endl;
            }
            return 0;



        }
        
    