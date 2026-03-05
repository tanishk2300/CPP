#include<iostream>
using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addthese(int num1 , int num2);
int square(int n);



int main(){
    int num1=120;
    int num2=500;
    printHello();
    printNumber(100);

    int someData =giveMe10();
    cout<<someData<<endl;

    int totalvalue=addthese(num1,num2);
    cout<<totalvalue<<endl;

    printNumber(addthese(num1,50));

    cout<< square(7)<<endl;

    return 0;
}



void printHello(){
    cout<<"hello"<<endl;
}
void printNumber(int a){
    cout<<"the number is "<<a<<endl;
}
int giveMe10(){
    return 10;
}
int addthese(int num1,int num2){
    return num1+num2;

}
int square(int n){
    return n * n;

}
