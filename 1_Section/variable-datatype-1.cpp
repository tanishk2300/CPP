#include<iostream>
using namespace std;
int main(){
    int myint;  //declaration 
    myint=10;   // initialization
    int x=10;   //copy initialization (assignment)
    int y(10);  //direct initialization 
    int z{10};  //uniform (brace) initialization 

    int ok=3.22;
    int bad{0.09};

    double pi=3.14;// widening conversation (no loss of data )
    double stateTaxRate=0.06; //state_Tax_Rate is a camel hump character 

    double mydouble=3.12242433;

    cout<<myint<<endl;
    cout<<mydouble<<endl;



    

    return 0;
}