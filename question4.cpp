#include <iostream>
using namespace std;
int main()
{
   char a[8]={'a','r','a','d','h','a','n','a'};
   char *p;int i;
   p=a;
   for(i=0;i<8;i++)
   {
   	 cout<<a[i];
   }
   for(i=0;i<8;i++)
   {
   	 cout<<*(p+i);
   }
	return 0;
}