#include <bits/stdc++.h>
#include <string.h>
#define SIZE 4

using namespace std;

int TOP = 0;
struct Stack
{
    int top = 0;
    int Stack_ar[SIZE];
};

void Stack_Push(Stack *s, int item)
{
    if (s->top < SIZE)
    {
        s->Stack_ar[s->top] = item;
        s->top = s->top + 1;
    }
}

int Stack_Pop(Stack *s)
{
    int item;
    if (s->top == 0)
    {
        cout << "Stack is empty \n";
        return 0;
    }
    else
    {
        s->top = s->top - 1;
        item = s->Stack_ar[s->top];
    }
    return item;
}

int isEmpty(Stack *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int Stack_Size(Stack *s)
{
    size_t length = sizeof(s->Stack_ar) / sizeof(int);
    return length;
}

void Display(Stack *s)
{
    int i;
    cout << "\nForward order: ";
    for (i = s->top-1; i >= 0; i--)
    {
        cout << s->Stack_ar[i] << " ";
    }

    cout << "\nBackward order: ";
    for (i = 0; i < s->top ; i--)
    {
        cout << s->Stack_ar[i] << " ";
    }
}

int main()
{
    Stack st1;
    int input, size, popNo;
    size = SIZE;
    printf("\nStack is %s" , isEmpty(&st1)? "empty":"full");

    cout << "\nInput in stack: ";
    while (size)
    {
        cin >> input;
        Stack_Push(&st1, input);
        size--;
    }
    Display(&st1);
    cout << "\nHow many items you want to pop: ";
    cin >> popNo;
    while (popNo)
    {
        Stack_Pop(&st1);
        --popNo;
    }

    cout << "Size of Stack: " << Stack_Size(&st1);
    printf("\nStack is %s" , isEmpty(&st1)? "empty":"full");

    cout << "\nOutput of Stack ";

    Display(&st1);

    printf("\nStack is %s" , isEmpty(&st1)? "empty":"full");

    return 0;
}