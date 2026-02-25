#include<iostream>
#include<cstdlib> //for rand() and srand()
#include<string>
#include<ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    int rollDie;
    for (int i=0;i<10;i++){
        rollDie =rand()%6+1;
        cout<<"roll"<<i+1<<"="<<rollDie<<endl;
    }
    return 0;
}