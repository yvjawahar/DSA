#include <bits/stdc++.h>
#define MAX 100 // Maximum size of the arr
using namespace std;


vector<int>arr(MAX,0); // Array to store the elements
int front = -1; // Index of the front element
int rear = -1; // Index of the rear element

bool isEmpty() {
    return front== -1;
}

bool isFull() {
    return rear == MAX-1;
}

void enqueue(int value) {
    if (isFull()) {
      cout << "arr is full. Cannot enarr element." <<endl;
        return;
    }

    if (isEmpty()) {
        front = 0; // Initialize front index
    }

    rear++;
    arr[rear] = value;
}

int dequeue() {
    if (isEmpty()) {
 
        return INT_MIN;  //no elements to dearr
    }

    int x=arr[front]; //storing the dearrd element

    if (front == rear) {
        // If the last element is dearrd, reset front and rear indices
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    return x;
}

void displayqueue() {
    if (isEmpty()) {
        cout << "arr is empty." <<endl;
        return;
    }

    cout<<"arr elements:";
    for (int i = front; i <= rear; i++) {
        cout<<arr[i]<< " ";
    }
   
}

int main() {
    
    
    while(1){
        cout<<"Enter 1-enarr 2-dearr 3-display :\n";
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
