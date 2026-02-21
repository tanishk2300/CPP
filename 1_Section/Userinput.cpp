#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;
    string name;
    cout<<"enter your age :"<<endl;
    cin>>age;
    cout<<age<<endl;
    cout<<"enter your name:"<<endl;
    cin.get();//It waits until you press Enter.
    getline(cin,name);
    cout<<"your name :"<<name<<endl;
// here both are diff codes ______________________
    string yourname;
    string location;
    int initial_score;
     
    cout<<"enter your name:";
    // cin>>yourname;
    getline(cin,yourname);
    cout<<"enter your location: ";
    // cin>>location;
    getline(cin,location);
    cout<<"initial_score:";
    cin>>initial_score;
    cin.get();



    cout<<"Hello , "<<yourname<<endl<<"we heard you are from "<<location<<endl<<"your original score is "<<initial_score<<",but with five points added,"<<endl<<"your score is "<<(initial_score+5)<<endl;

    



    return 0;

}