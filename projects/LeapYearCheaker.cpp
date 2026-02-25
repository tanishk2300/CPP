#include<iostream>
using namespace std;
int main (){

    int startYear;
    int endYear;

    cout<<"enter startyear:"<<endl;
    cin>>startYear;

    cout<<"enter endyear"<<endl;
    cin>>endYear;
 
    for (int year=startYear;year<=endYear;year++){
        if ((year%4==0 && year%100!=0)||(year %400==0))
        cout<<year<<"this year is leap year."<<endl;

        else{
            cout<<year<<"this is not a leap year."<<endl;
        }
    }
    return 0;

}