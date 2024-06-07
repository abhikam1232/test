#include <iostream>
using namespace std;
    int main(){
        cout<<" This is the program to determine their result accordint to the marks"<<endl;

        int marks;
        cout<<" Enter the marks";
        cin>>marks;

        if(marks>= 81 and marks<=100){
            cout<<" Congratulations your child has got very good"<<endl;
        }
        else if(marks>=61 and marks<= 80){
            cout<<" Wow, your child has got good marks and grades"<<endl;
        }
        else if( marks>=41 and marks<=60){
            cout<<" Your child has got average marks"<<endl;
        }
        else{
            cout<<" so sry try again ur child has Failed"<<endl;
        }
        return 0;

        
    }