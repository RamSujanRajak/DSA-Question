#include<iostream>
using namespace std;

class node{

 public:
     int data;
     node* next;

    node(int data){
     this->data=data;
     this->next=NULL;
   }
};

//Q1 inser a data in head
void insertathead(node* &head , int d)
{
    //new node created
    node* temp = new node(d);
    temp->next=head;
    head=temp;
}
void print(node* &head)
{
    node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<< " " ;
        temp = temp ->next;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(10);

    node* head = node1;
    print(head);

    insertathead(head, 12);
    print(head);

    insertathead(head, 15);
    print(head);

    cout<< node1-> data<<endl;
    cout<< node1-> next<<endl;
}

class node{
   int data ;
   node* next;

 node(int data){
    this->data=data;
    this->next=NULL;
 }

};
int head(node* &head){

}
