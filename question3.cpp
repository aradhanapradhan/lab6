#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  //print array using normal index method//
  cout<<"enter the values";
  for(int i=0;i<10;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<10;i++)
  {
    cout<<arr[i]<<endl;
  }
  //print array using pointer method//
  int *arrp[10];
  for(int j=0;j<10;j++)
  {
    arrp[j]=&arr[j];
  }
  for(int j=0;j<10;j++)
  {
    cout<<*arrp[j]<<endl;
  }
  return 0;
}
  
    
