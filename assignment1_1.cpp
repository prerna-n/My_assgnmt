#include<iostream>
using namespace std;
int arr[10]={2,33,43,4,5,6,7,42,90,10},i;
class stk
{

   	int top;
   	int p[10];
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
		
	  	if(top==9)
	  	{ 
	  	  cout<<"stack is full";
		  }
		  else
		  {
		  	for(i=0;i<=9;i++)
		  	{
		  	 top++;
		  	 p[top]=arr[i];
	       	}
		  }
	}

	void stk::display()
	{
		for(top=9;top>=0;top--)
		{
		    cout<<"\n array elements are:";
			cout<<p[top];
		}
	}


int main()
{
	stk s;
	s.push();
	s.display();
}
