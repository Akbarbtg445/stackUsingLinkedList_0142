#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
    private:
    Node*top;

    public:
    Stack()
    {
        top = NULL; 
    }

    // push operation: Insert an element onto the top of the stack
    int push (int value)
    {
        Node*newNode = new Node(); //1.Alocote memory for the new node
        newNode->data = value; // 2. assign value
        newNode->next = top;//3. Set the next pointer of the new node to the current
        top = newNode;//4. Update the top pointer to the new node
        cout << "push value:" << value << endl;
        return value; 
    }
};