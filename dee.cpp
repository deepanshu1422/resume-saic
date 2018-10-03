#include<iostream>
using namespace std;

int Plrint(int n){
if(n==0)
return 0;
else
{cout<<n;
return Plrint(n-1);
}
}

int main()
{
int n=4;
Plrint(n);
return 0;
}
