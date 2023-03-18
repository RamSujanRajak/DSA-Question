#include<iostream>
using namespace std;

// class demo
// { 
//   private:
//     int a ;
//     int b ;


//   public:
//      void seta(int x){
//         a=x;
//      }
//      int geta(){
//         return a;
//      }  
//      void setb(int y){
//         b=y;
//      }
//      int getb(){
//         return b;
//      }  
//      void show(){
//         cout<<"a = "<<a<<" & b = "<<b<<endl;
//      } 

//      //constructor
//      // here we use const key word becouse we dont want to chage objects value in farther
//      demo operator +(const demo& ob2);
//      void operator ++(int);
// };

// demo demo :: operator +(const demo& ob2){
//     demo temp;
//     temp.a = a+ob2.a;
//     temp.b = b+ob2.b;
//     return temp;
// }

// void demo :: operator ++(int){
//     ++a;
//     a++;
// }

// int main()
// {
//   demo ob1;
//   demo ob2;
//   demo res;
//   ob1.seta(15);
//   ob1.setb(25);
//   ob1.show();

//   ob2.seta(35);
//   ob2.setb(45);
//   ob2.show();
//   res = ob1 + ob2;
//   res.show();
//   ++res;
//   res.show();

//     return 0;
// }

// shalow copy and deep copy
// class a{
    
//     public:
//     int *p;
//     void show(){
//         cout<<"it is class A : "<<*p<<endl;
//     }
//     a(){
//         p=new int;
//     }
//     a(a& ob){
//         p=new int;
//         *p = *(ob.p);
//     }
    
// };
// class b : public a{

//     display();
//     public:
//      void show(){
//         cout<<"it is class b"<<endl;
//     }
//     void brake(){
//         cout<<"breaking..."<<endl;
//     }
// };

// int main()
// {
//     a ob;
//     *(ob.p) = 25;
//     ob.show();

//     a ob2 = ob;
//     ob2.show(); 

//     *(ob.p) = 45;
//     ob1.show();
//     ob2.show();
    
//     return 0;    
// }



// the Virtual Function
// #include <iostream>
// using namespace std;

// class base1 {

// public:
	
// 	virtual void display()
// 	{
// 		cout << "Called virtual Base Class function" <<
// 				"\n\n";
// 	}

// 	void print()
// 	{
// 		cout << "Called base1 print function" <<
// 				"\n\n";
// 	}
// };


// class child1 : public base1 {

// public:
// 	void display()
// 	{
// 		cout << "Called child1 Display Function" <<
// 				"\n\n";
// 	}

// 	void print()
// 	{
// 		cout << "Called child1 print Function" <<
// 				"\n\n";
// 	}
// };

// int main()
// {
	
// 	base1* base;

// 	child1 child;

// 	base = &child;

    //why here we use arow -> we us
        //because here we are try to acces base class member by
        //passing refrence of base class (base = &child;)
	//base->base1::display();
//     base->display();2

// 	base->print();
// }
