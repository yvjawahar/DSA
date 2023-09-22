#include "bits/stdc++.h"
using namespace std;
class node
{
private:
int data;
node *next;
public:
  node *head=NULL;
  void insertbeg(int val)
  {
   node *newnode= new node();
   newnode->data=val;
   newnode->next=NULL;
   if(head==NULL)
     head=newnode;
   else
   {
       newnode->next=head;
       head=newnode;
   }
   
  }
  void insertend(int val)
  {
   node *newnode= new node();
   node *temp=head;
   newnode->data=val;
   newnode->next=NULL;
   if(head==NULL)
     head=newnode;
   else
   { 
        while(temp->next!=NULL)
          temp=temp->next;
        temp->next=newnode;
   }
   
  }
  void insertmiddle(int val)
  {
   node *newnode= new node();
   node *temp=head;
   int element;
   cout<<"enter the element after which you want to insert this";
   cin>>element;
   newnode->data=val;
   newnode->next=NULL;
   if(head==NULL)
     head=newnode;
   else
   { 
        while(temp->next!=NULL&&temp->data!=element)
          temp=temp->next;
        if(temp->next!=NULL)
        {
       newnode->next=temp->next;
          temp->next=newnode;
     }
     else
      temp->next=newnode;
   }
   
  }
  void deletebeg()
  {
      if(head==NULL)
      {
        cout<<"list is empty";
        return;
      } 
      node *temp=head;
      cout<<temp->data<<" is deleted";
      head=head->next;
      delete(temp);
  }
  void deleteend()
  {
      if(head==NULL)
      {
         cout<<"list is empty";
         return;
      }
      node *temp=head,*prev=NULL;
      while(temp->next!=NULL)
      {
        prev=temp;
      temp=temp->next;
    }
      cout<<temp->data<<" is deleted";
      prev->next=NULL;
      delete(temp);
  }
  void display()
  {
      node *temp=head;
      while(temp!=NULL)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }
};
int main()
{ 
  int choice,value;
  node obj;
  do
  { cout<<"enter the choice 1-insert in the beg, 2-end 3-middle ins 4-deletebeg 5-deleteend 6-display"<<endl;
  cin>>choice;
  switch(choice)
  {
  case 1:
     cout<< "enter the element to be inserted";
     cin>>value;
     obj.insertbeg(value);
     break;
  case 2:
      cout<< "enter the element to be inserted";
     cin>>value;
     obj.insertend(value);
     break;
  case 3:
      cout<< "enter the element to be inserted";
     cin>>value;
     obj.insertmiddle(value);
     break;
  case 4:
      obj.deletebeg();
      break;
case 5:
    obj.deleteend();
     break;
case 6:
       obj.display();
       break;
  }
  } while(choice!=8);
}