#include<iostream>
using namespace std;
int arr[10]={3,2,32,4,55,23,45,55,32,1};
int stack[10],i;
void push();
void display();
int main()
{
  push();
 display();
}

void push()
{

  
    for(i=0;i<=9;i++)
       {
          stack[i]=arr[i];

         }
  
  
}
      
void display()
{
   for(i=0;i<=9;i++)
 {
   cout<<stack[i];
 }
}
