#include<iostream>
#include<vector>
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
	int push(int x);
	int pop();
#ifdef DEBUG
	void display();
#endif
};

Stack::Stack()
{
	top = -1;
}

int Stack::push(int x)
{
	if (top == STACK_SZ) {
	   return ERR_STACK_FULL;
        }
	top++;
	arr[top] = x;
	return SUCCESS;
}

int Stack::pop()
{
	if (top == -1) {
	   return ERR_STACK_EMPTY;
	}
	int temp = arr[top];
	top--;	
	return temp;
}

#ifdef DEBUG
void Stack::display()
{
        cout << "\nreverse string is:";
	for (int i = top; i >= 0; i--) {
	cout<<arr[i];

	}
}
#endif

int main()
{
	
	vector<int> s1;
	int elem;

	char ch;
	cout<<"enter element: ";
	do{
	cin>>elem;
	s1.push_back(elem);
	cout<<"continue?";
	cin>>ch;
	}while(ch=='y' || ch=='Y');

	int top=s1.size();
	Stack s;
	for (int i = 0; i <= top; i++){ 
           s.push(s1[i]);
	}
	cout<<"\nvector s1 contains:";
	for(int i = 0; i < top; i++){
	cout<<s1[i];
	}
	s.pop();
	#ifdef DEBUG
	s.display();
	#endif 
	cout<<"\n";
}

