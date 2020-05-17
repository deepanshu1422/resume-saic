#include<iostream>
using namespace std;
..
int i=0;
int a[30];
int ddc(int a[])
{
  if(a[i]>a[i+1])
{  a[i+1]=a[i];
  i++;
  ddc(a);
}
  return a[i];
}



int main()
{
int j,n;
std::cout << "Enter no. of values you wanna Enter" << '\n';
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
j=ddc(a);
cout<<j;
return 0;
}
