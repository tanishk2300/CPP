#include<iostream>
using namespace std;
int main(){
    const int array_size=5;
    int myarray[array_size];

    myarray[0]=12;
    myarray[1]=21;
    myarray[2]=9;
    myarray[3]=90;
    myarray[4]=32;

    for (int i=0;i<array_size;i++){
        cout<<myarray[i]<<endl;

    }
    return 0;
}