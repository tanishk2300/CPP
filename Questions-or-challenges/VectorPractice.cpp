#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> myarray; // it mean you creating a vector in string and the size of array is 5 .
   
    myarray.push_back("tanishk");
    myarray.push_back("yash");
    myarray.push_back("mohan");
    myarray.push_back("ram");
    myarray.push_back("raju");

    myarray.insert(myarray.begin(),"tannu"); // the begin work for make the tannu word in choise line .
    myarray.pop_back(); // this help to remobe the last word of array .
    for (const string& myarray:myarray){
        cout<<myarray<<endl;
    }
    return 0;

}