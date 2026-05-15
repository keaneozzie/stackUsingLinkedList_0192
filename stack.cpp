#include <iostream>
using namespace std;
            

// Node class representing a single node in the Linked List
class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    node *top; //pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; //initialize the stack with a null top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        node *newNode = new node(); 
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        node *temp = top;
        if (isEmpty())
        { 
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Popped value: " << temp->data << endl;
        top = temp->next;
        delete temp;
    }


    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    