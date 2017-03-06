#include<iostream>
#include<string.h>
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
	char peek();
	int GetOperatorWeight();
	int HasHigherPrececdence();
#ifdef DEBUG
	void display();
#endif
};

Stack::Stack()
{
	top = -1;
}

char Stack::peek()
{
    return arr[top];
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
	for (int i = top; i >=0; i--) {
	cout<<arr[i];
	}

}
#endif

int GetOperatorWeight(char op)
{
    int weight = 0;
    
    switch(op)
    {
	case '+':
            weight = 1;
            break;
        case '-':
            weight = 1;
            break;
        case '*':
            weight = 2;
            break;
        case '/':
            weight = 2;
            break;
	case '^':
	    weight = 3;
	    break;
    }
    return weight;
}


int main()
{
	char a[10];
	int temp=0;
	cout<<"enter infix expression"<<endl;
	cin>>a;	
	int top = strlen(a);
	int w1,w2;
	char *p[top];
	char operator_arr[10];
	Stack s;
	for (int i = 0; i <= top; i++){ 
	     
	if(a[i] >='a' && a[i]<='z'){
	cout<<a[i];
	}
	else if(a[i]=='*' || a[i]=='/' || a[i]=='+' || a[i]=='-' || a[i]=='^'){
	w1=GetOperatorWeight(a[i]);
	w2=GetOperatorWeight(s.peek());
	while(w2 >= w1){
	operator_arr[temp++] = s.pop();
	operator_arr[temp]='\0';
	cout<<operator_arr;
	w2 = GetOperatorWeight(s.peek());
	 break;
     }	 
     	p[i] = &a[i];
        s.push(p[i]);
       
        }
	}
//	operator_arr[temp]='\0';
//	cout<<operator_arr;
	s.display();
 }


