#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <bits/stdc++.h>

#define SIZE 15 //initializing a common size for all arrays

int stack[SIZE];
char user[SIZE];
int top = 0;

int pop()
{
    return stack[--top]; //This sentence returns a value back to where the function is called
}

void push(int n)
{
    stack[top++] = n; //Enters an element into the stack
}

int main()
{
start:
    int i = 0, cn = 0, pop1 = 0, pop2 = 0;
    char input;
    top = 0;
    printf("Please enter a valid postfix expression, each token separated by a space:-\n");
    gets(user); //getting the string from the user

    while (user[i] != '\0') //Reading the string token wise
    {
        int result = 0, l = 0;
        input = user[i];
        if ((input >= 48) && (input <= 57)) //checking for an number (ASCII 48 to 57)
        {
            for (int k = 0; user[i + k] != ' '; k++) //calculating decimal value of number
            {
                result = (result * 10) + user[i + k] - 48;
                l++;
            }
            i += l;
            push(result);
        }

        else if ((top != 0) && ((top % 2 == 0) || ((top - cn) % 2 == 0)) && ((input == '+') || (input == '-') || (input == '*') || (input == '/') || (input == '$') || (input == '^')))
        {
            pop1 = pop();
            pop2 = pop();
            switch (input)
            {
            case '+': //Adding
                result = pop2 + pop1;
                break;
            case '-': //subtracting
                result = pop2 - pop1;
                break;
            case '*': //multiplying
                result = pop2 * pop1;
                break;
            case '/':
                if (pop1 != 0) //dividing
                    result = pop2 / pop1;
                else
                    printf("Can't divide by zero");
                break;
            }

            push(result);
            cn++; //calculating position of computed result in stack
        }
        else if (input == ' ')
            ;
        else
        {
            printf("Invalid expression\n");
            goto start;
        }
        i = i + 1;                                          //incrementing i to traverse the input array
    }
    if (top == 1)                                           //print result only if a single result exists
        printf("Result = %d", pop());
    else
    {
        printf("Invalid expression\n");
        goto start;
    }
    return 0;
}