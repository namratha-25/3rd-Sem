#include<bits/stdc++.h>
using namespace std;
class Queue{
  private:
     int front,rear,arr[100];
   public:
     Queue() {
        front = -1;
        rear =-1;
     }
     
     bool isEmpty(){
     return front==-1;
     }

     bool isFull(){
        return rear==99;
     }
      void Enqueue(int x)
      {
        if(isEmpty())
        {
            front=0;
           
            arr[++rear]=x;
        }
        if(!isFull())
        {
            arr[rear++] = x;
        }
      }
      void Dequeue()
      {
        if(!isEmpty())
        front++;
      }
      int peek()
      {
        return (isEmpty())?-1: arr[front];
       

      }
      void display()
      {
        if(!isEmpty())
        {
            for(int i=front;i<rear;i++)
            {
                cout << arr[i]<<endl;
            }
        }
      }

};
int main()
{
    Queue Q1;
    Q1.Enqueue(10);
    Q1.Enqueue(20);
    Q1.Enqueue(30);
    // Q1.Dequeue();
    // cout << Q1.peek() << endl;

    // Q1.display();
   cout<< Q1.isEmpty() <<endl;
    cout<<Q1.isFull() << endl;
}