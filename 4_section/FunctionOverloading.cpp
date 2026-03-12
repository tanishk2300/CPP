#include<iostream>
#include<string>

using namespace std;
int getresult(int num1,int num2);
string getresult(string str1 ,string str2);
int getresult(int num);
int main(){
    int resultnum =getresult(30,20);
    string nameresult =getresult("john","baugh");
    int cuberesult=getresult(5);
    cout<<"result num is "<<resultnum<<endl;
    cout<<"name result is "<<nameresult<<endl;
    cout<<"cube result is "<<cuberesult<<endl;
    return 0;

}
int getresult(int num1,int num2){
    return num1*num2;

}
string getresult(string str1,string str2){
    return str1+" "+str2;
}
int getresult(int num){
    return num*num*num;
}
