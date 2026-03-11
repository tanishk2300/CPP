#include<iostream>
using namespace std;
void valuechange(int& somenum);
int main (){
    int mynumber;
    mynumber=100;
    cout<<"before changing number:"<<mynumber<<endl;

    valuechange(mynumber);
    cout<<"after changing the value:"<<mynumber<<endl;

    return 0;
}
void valuechange(int& somenum){ // '&' this is use to change the value of main .
    somenum=120;
}
// parameter passing 