#include<iostream>
using namespace std;

class node
{
   public:
       int data;
       node* next;

       node(int data){
         this->data = data;
         this->next = NULL;
       }

       ~node()
       {
           int value = this->data;
           if(this->next!=NULL)
           {
               delete next;
               this->next=NULL;
           }
           cout<<"memory is free for the node"<<value<<endl;
       }
};

void print(node* &head , int d)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

void insertattail(node* &tail, int d)
{
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp -> next;
}
void inseratmiddile(node* tail, node* head, int position, int d)
{
    //if user insert at start
    if(position == 1)
    {
        insertathead(head,d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt<position-1)
    {
        temp = temp -> next;
        cnt++;
    }
    //insert at last postion
    if(temp->next= NULL)
    {
        insertattail(tail,d);
        return;
    }

    //creating a node for d
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp->next;
    temp -> next = nodetoinsert;
}
void deletenode(int postion , node* &head)
{
    if(postion==1)
    {
        node* temp = head;
        head = head -> next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* pree = NULL;
        int cnt = 1;
        while(cnt<postion){
            pree = curr;
            curr= curr-> next;
            cnt++;
        }
        pree->next = curr->next;
        curr->next = NULL;
        delete curr ;
    }
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    insertattail(tail, 20);
    print(head);

    insertattail(tail, 30);
    print(head);

    insertattail(tail, 40);
    print(head);

    inseratmiddile(tail,head,3, 22);
    print(head);

    deletenode(3, head);
    print(head);

}
