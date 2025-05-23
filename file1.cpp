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


    void peek()
    {
        if (top = NULL)
        {
            cout << "List is empaty, " << endl;
        }
        else
        {
            Node*current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpaty()
    {
        return top = NULL;
    }
};


int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
           cout << "Enter the value to push: ";
           cin >> value;
           stack.push (value);
           break;
        case 2:
           if (stack.isEmpaty())
           {
            stack.pop();
           }
           else
           {
            cout << "Stack is empaty.Cannot pop" << endl;
           }
           break;
        case 3:
           if (stack.isEmpaty())
           {
            stack.peek();
           }
           else
           {
            cout << "Stack is Empaty.NO top value" << endl;
           }
           break;
        case 4:
           cout << "Exiting program." << endl;
           break;      
        }
        cout << endl;
    }
    return 0;
}