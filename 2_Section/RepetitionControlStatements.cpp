#include<iostream>
using namespace std;

int main(){
    int count=0;
//while loop 
    while (count<10)
    {
        cout<<"hello"<<endl;
        count++;
    }
// do while loop 
    int counter2=100;
    do
    {
        cout<<"counter2 :"<<counter2<<endl;
        counter2++;
    } while (counter2<10);
// for loop 
    for (int i=0;i<10;i++)
    {
        cout<<"number:"<<i<<endl;
    }

//sentinel-controlled repetition 
    int input;
    cout<<"enter a non-negative integer :"<<endl;
    while(input>=0){

        cout<<"you entered :"<<input<<endl;
        cout<<"enter another number or negative to quit :"<<endl;
        cin>>input;


    }
    return 0;
};
