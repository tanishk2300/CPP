#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    string alias;
    int age;
    int level;
    string favGadget;

    cout<<"enter your name:"<<endl;
    getline(cin,name);
    cout<<"enter secret alias: "<<endl;
    getline(cin,alias);
    cout<<"enter your age: "<<endl;
    cin>>age;
    cout<<"enter your level (out of /10): "<<endl;
    cin>>level;
    cin.get();
    cout<<"enter your favGadget: "<<endl;
    getline(cin,favGadget);
    cin.get();


    cout<<"========================"<<endl;
    cout<<"    SECRET AGENT ID     "<<endl;
    cout<<"========================"<<endl;
    cout<<"Your name: "<<name<<endl;
    cout<<"Your alias: "<<alias<<endl;
    cout<<"Your age: "<<age<<endl;
    cout<<"Your level: "<<level<<endl;
    cout<<"Your favGadget: "<<favGadget<<endl;
    cout<<"========================"<<endl;
    

    return 0;

}