#include <iostream>
using namespace std;
class stack
{
public:
    int top = -1;
    int size = 10;
    int arr[10];
    void push(int i);
    void pop();
    void peek();
    void print();
};

inline void stack ::push(int i)
{
    if (top < 10)
    {
        top++;
        arr[top] = i;
    }
    else
    {
        cout << "Stack  Overflow.";
    }
}
inline void stack ::pop()
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
inline void stack ::peek()
{
    cout << arr[top] << endl;
}
inline void stack ::print()
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
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    stack k;
    k.push(3);
    k.push(9);
    k.pop();
    k.push(324);
    k.push(678);
    k.pop();
    k.push(678);
    k.push(234);
    k.pop();
    k.push(890);
    k.push(123);
    k.pop();
    k.push(567);
    k.push(2345);
    k.pop();
    k.push(35653);
    k.push(45624);
    k.pop();
    k.push(4532);
    k.push(941);
    k.pop();
    k.print();
    return 0;
}
