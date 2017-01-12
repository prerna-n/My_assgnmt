
#include<iostream>
using namespace std;
#define ERR_STACK_EMPTY 1
#define ERR_STACK_FULL 2
#define SUCCESS 0
#define STACK_SZ 10
#define DEBUG display

class Stack{
    private:
        int arr[STACK_SZ];
        int top;
    
    public:
        Stack();
        int push(int);
        int pop();
#ifdef DEBUG
        void display();
#endif
};

Stack::Stack()
{
    top=-1;
}

int Stack::push(int x)
{
    if (top==STACK_SZ) {
        return ERR_STACK_FULL;
    }

    top++;
    arr[top]=x;
    return SUCCESS;
}

int Stack::pop()
{
    if (top==-1) {
        return ERR_STACK_EMPTY;
    }

    int temp=arr[top];
    top--;
    return temp;
}

#ifdef DEBUG
void Stack::display()
{
    cout<<"popped values are:";
    for (int i=top; i>=0; i--) {
        cout<<"\n"<<arr[i];
    }

}
#endif

int main()
{
    int array[]={11,23,4,5,33,65};
    int top=sizeof(array)/sizeof(array[0]);
    Stack s;
    cout<<"pushed values are:";
    for(int i=0; i<top; i++) {
        s.push(array[i]);
        cout<<"\n"<<array[i];
    }
    s.pop();
#ifdef DEBUG
    s.display();
#endif 
}
