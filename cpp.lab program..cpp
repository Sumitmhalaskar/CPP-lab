#include <iostream>
using namespace std;

int add(int a,int b){
  return a+b;
}

double add(double a,double b){
  return a+b;
}

int main() 
{
    int result=add(10,20);
    cout<<"The sum 10 and 20 is a "<<result<<endl;
    double intresult=add(9.2,8.7);
    cout<<"The sum of a 9.2 and 8.7 is a "<<intresult<<endl;
    return 0;
}