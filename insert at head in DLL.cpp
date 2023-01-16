#include<iostream>
using namespace std;

class node{

  public:
      int data;
      node* prev;
      node* next;

      //constructor
      node(int d){
      this->data =d;
      this-> prev = NULL;
      this -> next = NULL;
      }
};

void print(node* head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int getlegth(node* head)
{
        int len = 0;
        node* temp = head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
}
void insertathead(node* &head, int d)
{
    node* temp = new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    print(head);
/*
    cout<<"lenth is:"<<getlegth(head)<<endl;

    insertathead(head,11);
    print(head);

    insertathead(head,13);
    print(head);

    insertathead(head,23);
    print(head);
    */
    return 0;
}


















