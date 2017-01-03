#include<iostream>
using namespace std;
int array[5]={};
int array2[5]={};
int x,i,j;
template <class T>
class stack
{
public:
void push();
void pop();

};
template<class T>
void stack<T>::push()
{
  for(i=0;i<=4;i++)
  {
  cout<<"enter a value to push"<<endl;
  cin>>x;
  array[i]=x;
  }
}
template<class T>
void stack<T>::pop()
{
  if(i==0)
  {
    cout<<"empty stack!";
   }
  else
  {
   cout<<"popped values are:";
   for(i=4;i>=0;i--) 
    {
      cout<<array[i];
     }

   }
}
int main()
{
 stack <int> a;
 int ch=i;
 while(ch!=3)
 {
  cout<<"enter a choice:";
  cin>>ch;
  switch(ch)
  {
   case 1: a.push();
           break;
   case 2:a.pop();
           break;
   }
 }
return 0;
}



:wq
:e

