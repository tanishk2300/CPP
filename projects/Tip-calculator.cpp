#include<iostream>
using namespace std;

int main(){
    double billAmount;
    double tipPercentage;
    double tipAmount;
    double totalamount;
    
    
    
    cout<<"enter your bill amount :"<<endl;
    cin>>billAmount;
    cout<<"enter your tip persentage you would like to leave :"<<endl;
    cin>>tipPercentage;

    tipAmount=billAmount*(tipPercentage/100);
    totalamount=tipAmount+billAmount;

    cout<<"you should tip : "<<tipAmount<<endl;
    cout<<"total amount your pay with tip : "<<totalamount<<endl;


    return 0;

}