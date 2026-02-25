#include<iostream>
using namespace std;
int main(){
    char package;
    int numDevices;
    int TotalCost=0;

    int devicesOver=0;
    const int includeA=1;
    const int includeB=3;
    const int includeC=5;

    const int baseA=9;
    const int baseB=14;
    const int baseC=20;
    
    const int extraA=6;
    const int extraB=4;
    const int extraC=2;

    cout<<"welcome to the streaming subscription calculator!"<<endl;
    cout<<"enter your package(A,B or C)";
    cin>>package;

    cout<<"enter number of simultaneous devices user:";
    cin>>numDevices;

    if (package=='A'){
        TotalCost+=baseA;
        if (numDevices>includeA)
        {
            devicesOver=numDevices-includeA;
            TotalCost+=devicesOver*extraA;
        }
    }
    else if (package=='B'){
        
        TotalCost+=baseB;
        if (numDevices>includeB)
        {
            devicesOver=numDevices-includeB;
            TotalCost+=devicesOver*extraB;
        }
    }
    else if (package=='C') {
        
        TotalCost+=baseC;
        if (numDevices>includeC)
        {
            devicesOver=numDevices-includeC;
            TotalCost+=devicesOver*extraC;
        }
    }
    else{
        cout<<"Invalid package selection;"<<endl;
        return 0;
    }
    cout <<"your total cost for the month is : $"<<TotalCost<<endl;
    return 0;

}
