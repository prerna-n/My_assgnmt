#include<iostream>
#include<string>
#define len 500
using namespace std;

char *p="implementing stack using char *";
int i;
class stack
{
	
		int top;
		char*q[len];
	public:
		stack();
		void push();
		void display();
};

stack::stack()
{
	top=-1;
}

void stack::push()
{

		top++;
		q[top]=p;
	
}

void stack::display()
{
	cout<<q[top];
	
}

int main()
{
stack s;
s.push();
s.display();
}
