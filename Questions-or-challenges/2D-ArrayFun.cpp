#include<iostream>
using namespace std;
int main (){
    int myarray[2][3]=//here 2or 3 is for the array should be 2*3=6 element .
    {{2,3,4},
    {9,6,7}
    };
/*
Row 0 → [ myarray[0][0]  myarray[0][1]  myarray[0][2] ]
Row 1 → [ myarray[1][0]  myarray[1][1]  myarray[1][2] ]
*/
    cout<<myarray[0][2]<<endl;
    myarray[1][0]=5;// this change the element which belongs on '[1][0]' location .
    cout <<myarray[1][0]<<endl;
    for (int row=1;row>=0;row--){
        for (int col=2;col>=0;col--)
        cout<<myarray[row][col];
    }   

    return 0;
}