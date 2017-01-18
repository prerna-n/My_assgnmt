#include<iostream>
using namespace std;
#define ERR_STACK_EMPTY 1
#define ERR_STACK_FULL 2
#define SUCCESS 0
#define STACK_SZ 10
#define DEBUG display

class Stack{
      private:
	char arr[STACK_SZ];
	int top;
     
      public:
	Stack();
	char push(char *x);
	char pop();
#ifdef DEBUG
	void display();
#endif
};

Stack::Stack()
{
	top = -1;
}

char Stack::push(char *x)
{
	if (top == STACK_SZ) {
	   return ERR_STACK_FULL;
        }
	top++;
	arr[top] = *x;
	return SUCCESS;
}

char Stack::pop()
{
	if (top == -1) {
	   return ERR_STACK_EMPTY;
	}
	char temp = arr[top];
	top--;	
	return temp;
}

#ifdef DEBUG
void Stack::display()
{
	cout<<"popped values are:";
	for (int i = top; i >= 0; i--) {
	cout<<"\n"<<arr[i];
	}

}
#endif

int main()
{
	char a[] = "characters";
	int top = sizeof(a)/sizeof(a[0]);
	char *p[top];
	
	for (int i = 0; i < top; i++) 
	    p[i] = &a[i];
        Stack s;
        cout<<"\n"<<"Pushed values are:";
	
       
       for (int  i = 0; i < top; i++){
           s.push(p[i]);
       cout<<"\n"<< *p[i];
        }
	s.pop();
#ifdef DEBUG
	s.display();
#endif 
}

