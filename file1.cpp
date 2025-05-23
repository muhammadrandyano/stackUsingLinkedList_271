#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
    private :
    Node *top;

    public :
    Stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        if (isEmpaty()) 
        {
            cout << "Stack is empaty," << endl;
        }

        Node *temp = top;
        top = top->next;
        cout << "Popped value: " << temp->data << endl;
        delete temp;
    }
};