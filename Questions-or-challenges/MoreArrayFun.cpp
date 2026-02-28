#include<iostream>
using namespace std;
int main(){
    const int arraysize=10;
    int myarray[arraysize];
    for (int i=0;i<10;i++){
        myarray[i]=i+1;

    }
    for (int number:myarray){
        cout<<number<<endl;
    }
    return 0;
}
