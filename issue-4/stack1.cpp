
#include<iostream>
using namespace std;
#define ERR_STACK_EMPTY 1
#define ERR_STACK_FULL 2
#define STACK_SZ 10
#define DEBUG display

class Stack{
     int arr[STACK_SZ];
     int top;
     public:
     Stack();
     int push(int);
     int pop();
     #ifdef DEBUG
     int display();
     #endif
    };

Stack::Stack()
  {
   top=-1;
  }

int Stack::push(int x)
  {
   if(top==STACK_SZ)
   {
    return 2;
   }

   top++;
   arr[top]=x;
  }

int Stack::pop()
 {
  if(top==-1)
   {
    return 1;
   }
  int temp=arr[top];
  top--;
  return temp;
 }

#ifdef DEBUG
int Stack::display()
 {
  cout<<"popped values are:";
  for(int i=top;i>=0;i--)
  {
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
  for(int i=0;i<top;i++)
  {
    s.push(array[i]);
    cout<<"\n"<<array[i];
  }
  s.pop();
#ifdef DEBUG
   s.display();
#endif 
}
