#include<iostream>
using namespace std;
int counter=0;

void modifygloble(){
    counter++;
} 
int main(){
    cout<<"counter before:"<<counter<<endl;
    for(int i=0;i<100;i++){
        modifygloble();

    }
    cout<<"counter after: "<<counter<<endl;
    return 0;
}