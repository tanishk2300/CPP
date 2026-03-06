#include<iostream>
using namespace std;
void threetimeN (int input,int& output){
    output=input*3;
}
int main(){
    int myinput=50;
    int myoutput;
    threetimeN(myinput ,myoutput);
    cout<<"after threetimeN , my output is "<<myoutput<<endl;
    return 0;
}