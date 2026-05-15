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
