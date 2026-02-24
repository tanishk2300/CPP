#include<iostream>
using namespace std ;
int main(){
    int sum=0;
    int reading;
    

    while(true){
        cout<<"enter a number:"<<endl;
        cin>>reading;

        if(reading>=0){
        sum+=reading;
        cout<<"sum="<<sum<<endl;
    }
        else{
            break;
        }

    
    
}
cout<<"Final sum="<<sum;
return 0;

}