#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
    const int num_movie=5;
    vector <string> MovieName;
    vector <int> rating ;
    string temptitle;
    int temprating;
    for(int i=0; i<num_movie;i++){
        cout<<"Enter the title of the movie "<<(i+1)<<":";
        getline(cin,temptitle);
        cout <<"enter the rating for \""<< temptitle<<"\"(1-10):";
        cin>>temprating;
        cin.get();
        MovieName.push_back(temptitle);
        rating.push_back(temprating);
    }
    cout <<"here are some movie rating :\n";
    for (int i=0;i<num_movie;i++){
        cout <<"your rated\""<<MovieName[i]<<"\"a"
        <<rating[i]<<"/10."<<endl;    }

    return 0;

}