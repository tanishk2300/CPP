#include<iostream>
using namespace std;
int sumvalue(int num);
void countdownfrom(int num);
int main(){
    // countdownfrom(10);
    // for (int i=10;i>=0;i--){
    //     cout<<i<<endl;
    // }
    int totalsum=sumvalue(10);
    cout<<"the sum is"<<totalsum<<endl;

    return 0;
}
void countdownfrom(int num ){
    if (num>=0){
        cout<<num<<endl;
        countdownfrom(num-1);
        
    }
}
int sumvalue(int num){
    if (num>1){
        return num+sumvalue(num-1);

    }
    return num;//base case 

}