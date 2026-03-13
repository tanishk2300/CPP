#include<iostream>
#include<array>
using namespace std;

int productArray(array <int,6>myarray);
void productarray(array<int ,6>myarray,int&result);
int main (){
    array<int,6>number{1,2,3,4,5,6};
    // int result=productArray(number);
    // cout<<"the product of the array element is: "<<result<<endl;

    int finalproduct;
    productarray(number,finalproduct);
    cout << "the product of the array element (by reference)is :"<<finalproduct<<endl;

    return 0;
}
int productArray(array <int,6>myarray){
    int product=1;
    for (int num:myarray){
        product*=num;
        
    }
    return product;
}
void productarray(array<int ,6>myarray,int&result){
    result=1;

    for (int num :myarray){
        result*=num;
    }
}