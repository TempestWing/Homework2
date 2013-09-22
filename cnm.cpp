#include <iostream>
using namespace std;
long int C(int n)
{
 long int sum=0;
 if(n==1)
  sum=1;
 else
  sum=n*C(n-1);
 return sum;
}
int main()
{ long a=0;
  int n,m;
  cout<<"n"<<endl;
  cin>>n;
  cout<<"m"<<endl;
  cin>>m;
   if((n<0)||(m<0)||(n>m))
 {
	 cout<<"error";
 }
   else{
	 a=C(m)/C(n)/C(m-n);
	 cout<<"C(n)m="<<a;
   }
   system("pause");
   return 0;
}
