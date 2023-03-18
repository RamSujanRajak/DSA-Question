#include<iostream>
using namespace std;

// multilevel inheritace 
// class animal
// {  
//     public:
//     void run(){
//         cout<<"The Function is Running "<<endl;
//     }
// };

// class lion: public animal{
    
//     public:
//     void walk(){
//         cout<<"class lion Function is walk "<<endl;
//     }
// };

// class bird : public lion{
//     public:
//     void fly(){
//         cout<<"class bird Function is fly "<<endl;
//     }
// };

// int main()
// {

//     lion l
//     animal l;
//     bird l;
//     l.run();
//     l.walk();
//     l.fly();

//     return 0;

// }

//hererical  inheritace 
// class animal
// {  
//     public:
//     void run(){
//         cout<<"The Function is Running "<<endl;
//     }
// };

// class lion: public animal{
    
//     public:
//     void walk(){
//         cout<<"class lion Function is walk "<<endl;
//     }
// };

// class bird : public lion{
//     public:
//     void fly(){
//         cout<<"class bird Function is fly "<<endl;
//     }
// };

// class dog : public bird{
//     public:
//     void bark(){
//         cout<<"class dog Function is bark"<<endl;
//     }
// };

// int main()
// {

    //lion l
    //animal l;
    //bird l;
//     dog l;
//     l.run();
//     l.bark();
    // l1.walk();
//     l.fly();

//     return 0;

// }


//multilevel inheritance
// class animal
// {  
//     public:
//     void run(){
//         cout<<"The Function is Running "<<endl;
//     }
// };

// class lion{
    
//     public:
//     void fly(){
//         cout<<"class lion Function is walk "<<endl;
//     }
// };

// class bird : public lion,public animal{
//     public:
//     void fly(){
//         cout<<"class bird Function is fly "<<endl;
//     }
// };


// int main()
// {

    //lion l
    //animal l;
//     bird l;
//     l.run();
//     l.lion :: fly();
    // l.walk();
//     l.fly();

//     return 0;

// }


// hybrid inheritance
class animal
{  
    public:
    void run(){
        cout<<"The Function is Running "<<endl;
    }
};

class bird: virtual public animal{
    
    public:
    void walk(){
        cout<<"class bird Function is fly "<<endl;
    }
};

class cat : virtual public animal{
    public:
    void fly(){
        cout<<"class cat Function is bite "<<endl;
    }
};

class dog : public bird, public cat{
    public:
    void bark(){
        cout<<"class dog Function is bark"<<endl;
    }
};

int main()
{

    //lion l
    //animal l;
    //bird l;
    dog l;
    l.run();
    // l.bark();
    // l.walk();
    // l.fly();

    return 0;

}