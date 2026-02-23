#include<iostream>
using namespace std;

int main(){
    bool isRaining=false;
    bool iswarm=true;
    cout<<boolalpha<<endl;
    cout<<"isRaining and iswarm="<<(isRaining && iswarm)<<endl; // and operators 
    cout<<"isRaining or iswarm="<<(isRaining || iswarm)<<endl;  // or operator
    cout<<"not isRaining="<<(!isRaining)<<endl;   // not operator 
    
    return 0;

}