#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node *next;
    Node(T val)
    {
        data=val;
        next=NULL;
    }
    
};
template<typename T>
class LinkedList{

    Node<T>*head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void insert(T val)
    {
        Node<T>*newnode = new Node<T>(val);
        if(head==NULL)
        {
            head = newnode;
        }
        else{
            Node<T>*temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void Display(){
        Node<T>*temp = head;
        while(temp){
            cout << temp->data <<" ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main(){

    LinkedList<int>list1;
    LinkedList<char>list2;
    list1.insert(10);
    list1.insert(20);
    list1.insert(30);
    list1.Display();
    
    list2.insert('A');
    list2.insert('B');
    list2.insert('C');
    list2.Display();
    
}