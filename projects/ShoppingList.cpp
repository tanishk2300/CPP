#include<iostream>
#include<string>
#include<vector>
using namespace std ;

int main(){
    vector<string> shoppinglist;
    string item;

    cout<<"enter item for your shopping list (type 'done' to finish):"<<endl;
    getline(cin,item);

    while (item!="done"){
        shoppinglist.push_back(item);
        cout<<"Enter another item (or 'done' to finish):";
        getline(cin,item);
    }
    cout<<"\n your shopping list :"<<endl;
    for (string lisitem:shoppinglist){
        cout<<"-"<<lisitem<<endl;
    }



    return 0;
}
