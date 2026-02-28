#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>myintarray{};
    myintarray[0]=1;
    myintarray[1]=21;
    myintarray[2]=13;
    myintarray[3]=15;
    myintarray[4]=11;
    for(int a:myintarray){
        cout<<a<<endl;
    }
    cout<<"size of array"<<myintarray.size()<<endl;
    return 0;
}