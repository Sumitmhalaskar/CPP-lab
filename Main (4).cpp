#include <iostream>
 using namespace std;
 
 class Time{
     public:
     int hourse;
     int minutes ;
     int second;
     
     public:
     Time(){
         hourse = 0;
         minutes = 0;
         second = 0;
         }
         public:
         Time(int h,int m,int s){
             hourse = h;
             minutes = m;
             second = s;
         }
          
          void desplay(){
              cout<<"Time is :"<<hourse<<":"<<minutes<<":"<<second<<endl;
          }
     
     
 };

int main()
{
    Time t1;
    t1.desplay();
    Time t2(10,40,23);
    t2.desplay();
    return 0;
}