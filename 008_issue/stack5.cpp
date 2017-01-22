#include<iostream>
using namespace std;
#define ERR_STACK_EMPTY 1
#define ERR_STACK_FULL 2
#define SUCCESS 0
#define STACK_SZ 20
#define DEBUG display

class Stack{
      private:
	char c[STACK_SZ];
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
	c[top]=*x;
	return SUCCESS;
}

char Stack::pop() 
{
	if (top == -1) {
	return ERR_STACK_EMPTY;
	}
	char temp = c[top];
	top--;
	return temp;
}

#ifdef DEBUG
void Stack::display()
{
	cout<<"\npopped values are:";
	for (int i = (top-7); i < (top+1); i++) {
        cout<<c[i];
	}
	cout<<"\n";
	for (int j = (top-12); j < 6; j++) {
     	cout<<c[j];
	}
}
#endif

int main()
{
	int i;
	char a[] = "happy";
	char b[] = "holiday";
	int top = (sizeof(a)/sizeof(a[0]))+(sizeof(b)/sizeof(b[0]));
	//int m = (sizeof(b)/sizeof(b[0]));
	char *p[top];
	Stack s;

	for (i = 0; i < top; i++) {
    	     p[i]=&a[i];
	}
     
	for (i = 0; i< top; i++) {
   	     p[i+(sizeof(a))] = &b[i];
	}

 	for (i=0;i<top;i++) {
	     s.push(p[i]);
 	}

	cout<<"pushed values are:"<<*p;
	cout<<"\n"<<*(p+sizeof(a));
	s.pop();
#ifdef DEBUG
	s.display();
#endif
}

















