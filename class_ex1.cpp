#include<iostream>
using namespace std;

class hero
{
    int fare;
    public:
    hero (){
        fare = 40;
    }
    hero(int fare){
        this->fare = fare;
    }
    void setfare(int d){fare += d*10;}
    int getfare(){return fare;}
};

int main()
{

    //hero hr;
    int d,cd;
    cout<<"enter your cab distance"<<endl;
    cin>>cd;
    cout<<"enter the distance traveled by user: ";
    cin>>d;

    if(d<=5){
        hero hr;
        hr.setfare(d);
        cout<<"total bill: 1"<<hr.getfare()<<endl;
    }
    else{
        hero hr(40 + (cd - 5) * 10);
        hr.setfare(d);
        cout<<"total bill: "<<hr.getfare()<<endl;
    }

    return 0;

}
