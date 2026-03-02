#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main (){
    vector<int> somevec;
    vector<string> anothervec(3);
    somevec.push_back(1); 
    somevec.push_back(2); 
    somevec.push_back(3); 
    cout<<"somevec size"<<somevec.size()<<endl;
    anothervec[0]="john";
    anothervec[1]="dio";
    anothervec[2]="amily";

    anothervec.push_back("alice");
    for (int val:somevec){
        cout<<val<<endl;
    }
    cout<<endl;
    for (string name:anothervec ){
        cout<<name<<endl;
    }
    cout<<"front and back of anothervac:"<<endl;
    cout<<"front"<<anothervec.front()<<endl;
    cout<<"back"<<anothervec.back()<<endl;

    anothervec.pop_back();
    anothervec.insert((anothervec.begin()),"don");
    cout<<"\n after modification "<<endl;
    cout<<"front"<<anothervec.front()<<endl;
    cout<<"back"<<anothervec.back()<<endl;

    return 0;
}