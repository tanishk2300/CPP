#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
    char usermove;
    char computermove;

    srand(time(nullptr));
    cout<<"welcome to rock,paper,scissors"<<endl;
    cout<<"enter your move R,P,C:"<<endl;
    cin>>usermove;

    int randnum=rand()%3;
    if (randnum==0){
        computermove='R';
    }
    else if (randnum==1){

        computermove='P';
    }
    else{
        computermove='S';
    }
    cout<<"you played :"<<usermove<<endl;
    cout<<"computer played :"<<computermove<<endl;

    if (usermove==computermove){
        cout<<"game tie"<<endl;
    }
    else if ((usermove=='R'&&computermove=='S')||(usermove=='S' && computermove=='P')||(usermove=='P'&&computermove=='R') ){
        cout<<"you win 🥇 "<<endl;

    }
    else{
        cout<<"computer win 🥇"<<endl;
    }



}
