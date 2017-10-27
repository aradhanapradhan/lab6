#include<iostream>
using namespace std;
int main()
{
  int a,b;
  int *p;
  cout<<"enter the value of a and b";
  cin>>a>>b;
  p=&a;
  b=*p;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<*p<<endl;
  p=&b;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<*p<<endl;
}


