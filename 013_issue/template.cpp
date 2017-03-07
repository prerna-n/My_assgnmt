#include<iostream>
#include<string.h>
using namespace std;
#define ERR_STACK_EMPTY 1
#define ERR_STACK_FULL 2
#define SUCCESS 0
#define STACK_SZ 10
#define DEBUG display


template <class T>
class Stack{
      private:
	  T values[STACK_SZ];
   	  int top;
     
      public:
	   Stack();
	   int push(T);
	   T pop();
#ifdef DEBUG
	void display();
#endif
};

template <class T>
Stack<T>::Stack()
{
	top = -1;
}

template <class T>
 int Stack<T>::push(T x)
{
	if (top == STACK_SZ) {
	   return ERR_STACK_FULL;
        }
	top++;
	values[top] = x;
	return SUCCESS;
}

template <class T>
 T Stack<T>::pop()
{
	if (top == -1) {
	  return ERR_STACK_EMPTY;
	}
	T temp = values[top];
	top--;	
	return temp;
}

#ifdef DEBUG
template <class T>
void Stack<T>::display()
{
  cout << "\npopped elements are:";
	for (int j = top+1; j >= 0; j--) {
	cout << "\n" << values[j];
	}
}
#endif

int main()
{
	cout << "Stack Operations using Template!!";	
	Stack<int> s1;
	Stack<char> s2;
	int b[6];    
    unsigned int i;
for(i = 0;i <= 5;i++){
	cout << "\n\nenter integer value to be pushed:";
	cin >> b[i];
	s1.push(b[i]);
    }
  
	char a[10]={0};
	cout << "\nenter a string to be pushed:";
	cin >> a;
	
for(i = 0;i <= strlen(a);i++){
	 
	s2.push(a[i]);
    }
   	
	s1.pop();
	s1.display();

	s2.pop();
	s2.display();
	cout << "\n";
}

