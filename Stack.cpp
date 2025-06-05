#include <iostream>
using namespace std;

//stack Node
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
    Node*top;// pointer to the top node of the stack

    public:
    Stack()// intilaze the stack node of the stack
    {
        top = NULL; // pointer to the top node of the stack
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
    //is Empty operation: check if the stack is Empty
    bool isEmpty()
    {
        return top== NULL;// Return true if the top pointer is NULL, indicating an empty st
    }
    // pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;// if the stack is empty, print a mesage and return
        }
        cout << "Propped value:" << top->data << endl;
        top = top->next; //update  the top pointer to the next node 
    }
    //peek/Top operation: Retrive the value of the top most element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
            return;// if the stuck is empty, print a message and return
        }
        else
        {
            Node*current = top;
            while (current != NULL)
            {
                cout << current->data << ""<< endl;
                current = current->next;
            }
            cout << endl;
        }// Return the value of the top node
    }
};
int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while(choice !=4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Enter the value to push:";
            cin >> value;
            stack.push(value);// push the entred value onto the stack
            break;
            case 2:
            stack.pop();// pop the topmost element from the stack
            break;
            case 3:
            stack.peek();
            break;

            case 4:
            cout << "Exiting program." << endl;
            break;
            default:
            cout << "invalid Choice. Try Again." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}