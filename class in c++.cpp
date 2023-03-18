#include<iostream>
using namespace std;

// int main()
// {
//     for(int i=0; i++<100; i++)
//     {
//         cout<<i;
//     }
// }


/*
//class
class hero
{
    int health;
};

int main()
{
    // yaha per ek object bana
    hero h1;
    cout<<"size :"<<sizeof(h1)<<endl;

    return 0;

}*/

//when class of the object are public
 class hero
{
    /*public:
    int health;
    char level;
    static int odc;*/
    private:
     int fare;
    public:
    hero (){
        fare = 40;
     //cout<<"constractor call suscesfull"<<endl;
    }
    //hero(int fare){ this->fare = fare;}
    void setfare(int d){fare += d*10;}
    int getfare(){return fare;}
};
//inisilation of static data member
//int hero :: odc = 0;

int main()
{
    // yaha per ek object bana static vala
    hero hr;
    /*hr.health=10;
    hr.level='m';
    hero :: odc = 4;
    cout<<"health is :"<<hr.health<<endl;
    cout<<"level is :"<<hr.level<<endl;
    cout<<"odc is "<< hr.odc<<endl;
*/
    int d;
    cout<<"enter the distance traveled by user: ";
    cin>>d;
    cout<<hr.getfare()<<endl;
    hr.setfare(d);
    cout<<"total bill: "<<hr.getfare()<<endl;
    return 0;

}
