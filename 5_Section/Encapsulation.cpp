#include<iostream>
#include<string>

using namespace std ;

//-----------------------HOUSE CLASS   
class house {
    private:
    int numberofstories;
    int numberofwindow;
    string color;

    public:
    void setnumberstories(int numberofstories){

        this->numberofstories=numberofstories;
    }
    void setnumberofwindow(int numberofwindow){

        this->numberofwindow=numberofwindow;
    }
    void setcolor(string color){

        this->color=color;
    }
    
    int getnumberofstories()const{
        return numberofstories;
    }
    int getnumberofwindow()const{
        return numberofwindow;

    }
    string getcolor()const{
        return color;

    }


};
// -----------------------PROTOTYPE.
void printhousedata(house house);
// -----------------------MAIN FUNCTION.
int main(){
house myhouse;
house yourhouse;

myhouse.setnumberstories(2);
myhouse.setnumberofwindow(4);
myhouse.setcolor("blue");


yourhouse.setnumberstories(3);
yourhouse.setnumberofwindow(6);
yourhouse.setcolor("red");
printhousedata(myhouse);
printhousedata(yourhouse);
   return 0; 
}
void printhousedata(house house){
    cout<<"the house is "<<house.getcolor()<<" and has "<<house.getnumberofstories()<<" stories and "<<house.getnumberofwindow()<<" window ."<<endl;

}