/*
Stack implementation by singular linked list
Sample Output is given below
*/

#include <bits/stdc++.h>
using namespace std;

typedef struct Node Node;

struct Node
{
    int data;
    Node *next;
};
Node *head;

int isEmpty();

void Stack_Push(int item)
{
    Node *temp = new Node();
    temp->data = item;
    temp->next = head;
    head = temp;
}

void Stack_Pop()
{
    Node *temp;
    if (head == NULL)
    {
        cout << "Stack is empty, No item to pop";
        exit(1); //the code will terminate here
    }
    else
    {
        temp = head;
        head = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

void Stack_Display()
{
    Node *temp;
    if (head == NULL)
    {
        cout << "Stack is empty";
        exit(0); //the code will terminate here
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int Stack_Size()
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        ++size;
    }
    return size;
}

int isEmpty()
{
    if (head == NULL)
        return 1; //true
    else
        return 0; //false
}

int Stack_peek()
{
    if (!isEmpty())
        return head->data;
    else
        return 0;
}

int main()
{
    int input, size, popNo;
    input = size = popNo = 0;

    printf("\nStack is %s", isEmpty() ? "empty" : "full");

    cout << "\nSize of Stack: ";
    cin >> size;
    printf("Push elements in Stack_Push(): ");
    while (size)
    {
        cin >> input;
        Stack_Push(input);
        size--;
    }

    cout << "\nOutput of Stack: ";
    Stack_Display();

    cout << "\nHow many items you want to pop : ";
    cin >> popNo;
    while (popNo)
    {
        Stack_Pop();
        --popNo;
    }

    cout << "\nAfter Stack_Pop() Output of Stack: ";
    Stack_Display();
    cout << "\nTop item in Stack: " << Stack_peek();

    cout << "\nInsert '99' and '23' in Stack";
    Stack_Push(99);
    Stack_Push(23);

    cout << "\nOutput of Stack: ";
    Stack_Display();
    cout << "\nTop item in Stack: " << Stack_peek();

    cout << "\nSize of Stack: " << Stack_Size();
    printf("\nStack is now %s", isEmpty() ? "empty" : "full");

    return 0;
}

/* 
It will look like this
Stack is empty 
Size of Stack: 5
Push elements in Stack_Push(): 1 5 2 7 8

Output of Stack: 8 7 2 5 1       
How many items you want to pop : 3

After Stack_Pop() Output of Stack: 5 1
Top item in Stack: 5
Insert '99' and '23' in Stack
Output of Stack: 23 99 5 1
Top item in Stack: 23
Size of Stack: 4
Stack is now full

*/

