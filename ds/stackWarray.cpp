#include <iostream>
using namespace std;
int top = -1; 
int size = 10;
int stack[10];
void push(int i)
{
    if (top < 10)
    {
        top++;
        stack[top] = i;
    }
    else
    {
        cout << "Stack  Overflow.";
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        top--;
    }
}
void peek()
{
    cout << stack[top] << endl;
}
void print()
{
    if (top == -1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        cout << "Stack elements: \n";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << endl;
        }
    }
}
int main()
{
    int s;
    int inp;
    while (s != 9)
    {
        cout << "\nSelect an option:";
        cout << "\n1 - push\n2 - pop\n3 - peek\n4 - print\n";
        cout << "9 - to quit\n";
        cin >> s;
        if (s == 1)
        {
            cout << "Enter a number to push: ";
            cin >> inp;
            push(inp);
        }
        if (s == 2)
        {
            pop();
        }
        if (s == 3)
        {
            peek();
        }
        if (s == 4)
        {
            print();
        }
    }
    return 0;
}
