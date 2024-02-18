#include <iostream>
using namespace std;


class Stack
{
    public:
    Stack();
    ~Stack();
    void push(int value);
    void pop();
    int peep();
    bool empty();
    void display();

    private:
    int* array;
    int current;

};

Stack:: Stack()
{
    array = new int[10];
    current  =0;
}

Stack::~Stack()
{

}

void Stack::push(int value)
{
    if(current == 9)
    {
        cout << "Stack is full";
        return;
    }
    else
    {
        array[current] = value;
        current++;
        return;
    }
}

int Stack:: peep()
{
    if(current < 0)
    {
        cout << "Stack is already empty";
        return -1;
    }
    else
    {
        return array[current-1];
    }
}

void Stack:: pop()
{
    if(current <=0)
    {
        cout << "Stack is empty nothing to pop";
    }
    else
    {
        array[current] = 0;
        current--;
    }
}

bool Stack:: empty()
{
    return current<=0 ? true:false;
}

void Stack:: display()
{
    for(size_t i=0; i< current; i++)
    {
        cout << array[i] <<"/n";
    }
}

int main() {
    std::cout << "hello";
    Stack s1;
    int choice;
   
    while(1){
    cout << "\n Choice : \n 1)Push \n 2)Pop \n 3)Peep \n 4)Display\n ";
    cin >> choice;
    if(choice == 1)
    {
        int val;
        cout << "Enter number to push : \n";
        cin >> val;
        s1.push(val);
    }
    else if(choice == 2)
    {
        s1.pop();
    }
    else if(choice == 3)
    {
        int val = s1.peep();
        cout << val;
    }
    else
    {
        cout << "Choice 4";
        s1.display();
    }
    }
    return 0;
}



