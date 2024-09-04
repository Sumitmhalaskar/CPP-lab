#include <iostream>
using namespace std;
class reactangle{
  public:
  int length;
  int breadth;
  
  public:
  reactangle(int l,int b){
    length = l;
    breadth = b;
  }
  int area(){
    return length * breadth;
  }
  
  void desplay(){
    cout<<"length:  "<<length<<"  "<<"bredth:  "<<breadth<<endl;
  }
};

int main (){
  reactangle r1(10,5);
  r1.desplay() ;
    cout<<"area:"<<r1.area()<<endl;
    reactangle r2=r1;
    r2.desplay();
  cout<<"area:"<<r2.area()<<endl;
}