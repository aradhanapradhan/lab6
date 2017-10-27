#include<iostream>
using namespace std;
int main()
{
   int a,*ptra; 
   float b,*ptrb;
   double c,*ptrc;
   long d,*ptrd;
   bool e,*ptre;
   char f,*ptrf;
   cout<<"size of variables";
   cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<" "<<sizeof(d)<<" "<<sizeof(e)   <<" "<<sizeof(f)<<endl;
   cout<<"size of pointers";
   cout<<sizeof(*ptra)<<endl;
   cout<<sizeof(*ptrb)<<endl;
   cout<<sizeof(*ptrc)<<endl;
   cout<<sizeof(*ptrd)<<endl;
   cout<<sizeof(*ptre)<<endl;
   cout<<sizeof(*ptrf)<<endl;
   return 0;
}

