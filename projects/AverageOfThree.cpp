#include<iostream>
using namespace std;
double average (double a,double b,double c);

int main (){
    double result=average(9.33,34.44,3.33);
    cout<<"the average is "<<result<<endl;
    return 0;
}

double average(double a,double b, double c)
    {    
        return (a+b+c)/3;
    }
