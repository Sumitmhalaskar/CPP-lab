#include <iostream>
using namespace std;

int main() 
{
  int n,sum=0;
  cout<<"Entre the positive number"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  cout<<"the sum of the number from 1 to "<<n<<" "<<"is: "<<sum<<endl;
    return 0;
}