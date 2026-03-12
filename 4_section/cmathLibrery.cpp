#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int powresult=pow(2,3);
    int sqrtresult=sqrt(25);
    int ceilresult=ceil(4.2);
    int floorresult=floor(4.2);
    int logresult=log2(512);

    cout<<"2^3 is"<<powresult<<endl;
    cout<<"sqrt of 25 is "<<sqrtresult<<endl;
    cout<<"ceiling of 4.2 is "<<ceilresult<<endl;
    cout<<"floor of 4.2 is "<<floorresult<<endl;
    cout<<"log of 512 is"<<logresult<<endl;
    
    return 0;
}