#include <iostream>
 using namespace std;
 
 //function with a 2 int  parameter
 int sum(int num1,int num2){
   return num1 + num2;
 }
 
 //function with a 2 double poaramneter
 int sum(double num1,double num2){
   return num1 + num2;
 }
 //function with 3 int parameter
 int sum(int num1,int num2,int num3){
   return num1 + num2 + num3 ;
 }
 
 int main(){
   cout<<"sum 1 ="<<sum(4,7)<<endl;
   cout<<"sum 2 ="<<sum(2.444,8.4322)<<endl;
   cout<<"sum 3 ="<<sum(2,4,7)<<endl;
 }