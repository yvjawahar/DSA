#include<iostream>
using namespace std;
class node
{
   int x;
   node *succ;
   node *prev;	
   public:
   node *head=nullptr;
  void insertEnd(int a)
  {
  	node *nn=new node();
  	nn->x=a;
  	nn->succ=nullptr;
  	nn->prev=nullptr;
  	if(head==nullptr)
  	{
  		head=nn;
  		return;
  	}
  	node *temp=head;
  	while(temp->succ!=nullptr)
  	{
  		temp=temp->succ;
    }
    temp->succ=nn;
    nn->prev=temp;
  }
  void deleteEnd()
  {
     node *temp=head;
	 node *prev=nullptr;
	 while(temp->succ!=nullptr)
	 {
             prev=temp;
			 temp=temp->succ;
	 }
	 prev->succ=nullptr;
	 delete(temp);
  }
  void display()
  {
	node *temp=head;
	while(temp!=nullptr){
		cout<<temp->x;
		temp=temp->succ;
	}
  }
};
int main()
{
	int n,a;
	node p;
	cout<<"enter the value of n \n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  cin>>a;
	  p.insertEnd(a); 
	}
	p.display();
	p.deleteEnd();
	p.deleteEnd();
	p.display();
}
