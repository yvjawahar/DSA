#include<iostream>
#define max 60
using namespace std;
int a[max],top=-1;
int isfull()
{
    if(top==max)
      return 1;
    else
      return 0;
  }
void push(int data)
{
  top++;
  if(isfull())
  {cout<<"stack is full cant push....";
    return;
  }
  a[top]=data;
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is empty. Can't pop....";
        return;
    }
    cout<<"the popped element is "<<a[top];
    top--;
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
       cout<<a[i]<<" ";
}
int main()
{
    int choice,val;
    do
    {
    
    cout<<"enter ur choice 1-push 2-pop 3-display .......";
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<"enter the value u want to insert";
                cin>>val;
                push(val);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        default: exit(0);
        
    }
  }while(choice!=4);
}