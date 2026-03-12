#include<iostream>
using namespace std;

void somefunction(int aParam);
double myglobledouble=3.1415;

int main(){
    int localtomain=20;
    cout<<"local to main variable is :"<<localtomain<<endl;
    cout<<"the globle double(int main) is:"<<myglobledouble<<endl;

    somefunction(25);
    somefunction(30);
    somefunction(35);
    // cout<<localtomain<<endl;
    return 0;
};
void somefunction(int aParam){
    int mylocalnum=100;
    static int mystatic=500;
    mystatic++;


    cout<<"mylocalnum:"<<mylocalnum<<endl;
    cout<<"the parameter is:"<<aParam<<endl;
    cout<<"global double (in samefunction)is:"<<myglobledouble<<endl;
    cout<<"my static:"<<mystatic<<endl;
    // LocalToMain++;
}