#include<iostream>
using namespace std;
int main(){
    int age ;
    char gender;
    cout<<"enter your gender:"<<endl;
    cin>>gender;

    cout<<"enter your age:"<<endl;
    cin>>age;
// here we are using the operators .
    if((age>=18) &&(gender=='f' || gender=='F') )
    {

        cout<<"you are able to drive: "<<endl;
    }
    else if((age<=18)&&(gender=='m' || gender=='M')) {
        cout<<"you cant able to drive:"<<endl;


    }
    

    
    return 0;
}