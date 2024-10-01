#include <iostream>
using namespace std;
void swap(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}


int main() 
{
   int x,y;
   cout<<"Entre the value of x"<<endl;
   cin>>x;
   cout<<"Entre the value of y"<<endl;
   cin>>y;
   
   //befor swaping of the value
   cout<<"x="<<x<<"y="<<y<<endl;
   
   //after swaping of the value
   
   swap(x,y);
   
   cout<<"x="<<x<<"y="<<y<<endl;
   
    return 0;
}