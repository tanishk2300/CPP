#include<iostream>
using namespace std;
int main(){
    int number ;

    cout<<"enter your car number to cheak your penalty record :"<<endl;
    cin>>number;

    switch (number){
        case 02:
            cout<<"no penalty record ."<<endl;
            break;
        case 14:
            cout<<"2 penalty record . "<<endl;
            break;
        default:
        cout<<"you are safe ."; 
        break;  
    }
    return 0;
}