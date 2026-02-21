#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=3;

    int sum=a+b;
    int sub=a-b;
    int product=a*b;
    double quotent=a/b;
    int remainder=a%b;


    cout<<"sum="<<sum<<endl;
    cout<<"sub="<<sub<<endl;
    cout<<"product="<<product<<endl;
    cout<<"quotent="<<quotent<<endl;
    cout<<"remainder="<<remainder<<endl;


    int result=10;
    result+=15;// result = result +15
    cout<<"result="<<result<<endl;
    // += add and assign 
    // -= sub and assign 
    // *= multiply and assign 
    // /= divide and assign 
    // %= modulus and assign 

    int mylist=5;
    // increment decorator +1
    mylist++;
    cout<<mylist<<endl;

    // decrement decorator -1
    mylist--;
    cout<<mylist<<endl;

    int mynum=10;
    mynum+=5;
    mynum*=2;
    mynum*=2;
    mynum*=2;

    cout<<"final value="<<mynum<<endl;

    return 0;

}