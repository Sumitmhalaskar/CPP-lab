#include <iostream>

using namespace std;
class reactangle{
  public:
  int length;
  int breadth;
  
  public:
  
  reactangle(){
    length = 0;
    breadth = 0;
  }
  public:
  reactangle(int l,int b){
    length = 10;
    breadth = 5;
  }
  
  int area(){
    return length * breadth;
  }
  
  void desplay(){
    cout<<"length: "<<length<<" "<<"breadth: "<<breadth<<endl;
  }
  
};

int main() 
{
    reactangle r1;
    r1.desplay();
    cout<<"area : "<<r1.area()<<endl;
    reactangle r2(10,5);
    r2.desplay();
   cout<<"area: "<< r2.area();
    return 0;
}