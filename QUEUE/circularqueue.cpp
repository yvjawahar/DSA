#include <bits/stdc++.h>
#define size 100 // Maximum size of the arr
using namespace std;
vector<int>arr(size,0); // Array to store the elements
int front = -1; // Index of the front element
int rear = -1; // Index of the rear element
void enqueue(int value)
{
    if ((front == 0 && rear == size-1) ||((rear+1) % size == front))
    {
        printf("\nQueue is Full");
        return;
    }
 
    else if (front == -1) 
    {
        front = rear = 0;
        arr[rear] = value;
    }
 
    else if (rear == size-1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }
 
    else
    {
        rear++;
        arr[rear] = value;
    }
}
int dequeue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return INT_MIN;
    }
 
    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;
 
    return data;
}

void displayqueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}
int main()
{
    while(1){
        cout<<"Enter 1-enqeueu 2-dequeue 3-display :\n";
        int x;
    cin>>x;
    switch (x)
    {
    case 1:
            cout<<"Enter the character to be enqueue: ";
            int ch;
            cin>>ch;
            enqueue(ch);
            break;
    case 2:
            int y;
            y=dequeue();
            if(y==INT_MIN)
            cout << "arr is empty. Cannot deque element." <<endl;
            else
            cout<<"The dearrd character is: "<<y;
            break;
    case 3:
            displayqueue();
            break;
    default:
            break;
    }
    }
    return 0;
}