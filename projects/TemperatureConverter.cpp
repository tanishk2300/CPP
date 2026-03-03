#include<iostream>
#include<array>
using namespace std;
int main(){
    const int NumDays=7;
    array<double,NumDays>fahrenheittemp;
    for (int i=0;i<NumDays ;i++ ){
        cout <<"Enter the temperature in Fahrenheit "<<(i+1)<<":";
        cin>>fahrenheittemp[i];
    }
    cout<<"\n here are the temps converted to celcius:  "<<endl;
    for (double tempf:fahrenheittemp)
    {
        double tempC=(tempC-32)*5.0/9;
        cout<<"F"<<tempf<<"-->C:"<<tempC<<endl;

    }
    return 0;

}