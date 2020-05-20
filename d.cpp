#include<iostream>
using namespace std;
////
//2*10
int i=0;
int res=0;
int ddc(int a,int d)
{
  if(i==d)
  return res;

  if(i!=d)
  {res+=a;
  i++;
  //cout<<a;
return  ddc(a,d);

  }
//  return a;
}



int main()
{
  int a,b,d;

  cin>>a;
  cin>>b;
  d=b;
int p=  ddc(a,d);
  cout<<p;
  return 0;
}
