#include<iostream>
#include<string>
#define len 100
using namespace std;
char arr[100]="my first assignment in stack",i;
class stk
{

   	int top;
   	char p[len];
   	public:
	stk ();
	void push();
   	void display();
   	
   };
   stk::stk()
   {
   	top=-1;
   }

    
	void stk::push ()
	{
		
	  	if(top==len-1)
	  	{ 
	  	  cout<<"stack is full";
		  }
		  else
		  {
		  	for(i=0;i<=len-1;i++)
		  	{
		  	 top++;
		  	 p[top]=arr[i];
	       	}
		  }
	}

	void stk::display()
	{
		for(top=0;top<=(len-1);top++)
		{
		   // cout<<"\n array elements are:";
			cout<<p[top];
		}
	}


int main()
{
	stk s;
	s.push();
	s.display();
}
