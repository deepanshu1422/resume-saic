#include<iostream>
using namespace std;

//

int fib(int n,int t,int c,int a,int b)
{
/*
if(t==0 || t==1){
  cout<<"1";
}else {
  fib(t)=fib(t) + fib(t-1);
}
  */
  int d;
  while(n!=t)
  {
    c=a+b;
    d=c;
    a=b;
    b=c;
    n++;
  }
  return d;
}
int main()
{
  int a=0;
  int b=1;
  int n=2;
  int t;
  int c;

  cout<<"Enter no. of terms";
  cin>>t;
cout<<a<<"\n"<<b;


  int ans =fib(n,t,c,a,b);
  cout<<ans;



 return 0;
}
