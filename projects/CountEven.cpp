#include<iostream>
using namespace std;

int counteven( int arr[],int size);
int main(){
    int myarray[]={12,13,5,6,7,22,4,9};
    int numeven=counteven(myarray,8);
    cout<<"number of even element:"<<numeven<<endl;
    return 0;

}
int counteven(int arr[],int size){
    int count=0;
    for (int i=0; i<size;i++){
        if (arr[i]%2==0){
            count++;

        }
    }
    return count;
    
}