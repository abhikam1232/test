#include <iostream>
using namespace std;
    int main(){
        cout<<" This is a program to find 3 Areas od shape"<<endl;
        cout<<" First is a circle::"<<endl;
        float r;
        cout<<" Enter the radius:- ";
        cin>>r;

        cout<<" The Area for Circle is:- "<<endl;
        cout<<"------------------------------"<<endl;
        cout<<3.14*r*r<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<endl;

        cout<<" Now next is Triangle "<<endl;

        float b;
        cout<<" Enter the base:- ";
        cin>>b;

        float h;
        cout<<" Enter the height:- ";
        cin>>h;

        cout<<" Now the Area for triangle is:- "<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<(b*h)/2<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<endl;

        cout<<" Now this is to find the Area of Rectangle:- "<<endl;
        float l;
        cout<<" Enter the length:- ";
        cin>>l;

        float b2;
        cout<<" Enter the height:- ";
        cin>>b2;

        cout<<" Now the Area for Rectangle is:- "<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<(l*b2)<<endl;
        cout<<"------------------------------------"<<endl;
        return 0;



    
    }