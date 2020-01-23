#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
long long int n,i,c=0,temp=0;
while(t--)
{
c=0,temp=0;
cin>>n;
long long int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
if(a[i]>=i+4)
{
c=-99999;
cout<<"Too chaotic"<<endl;
continue;
}
}
for(i=0;i<n;i++)
{


 if((a[i]!=i+1)&&(a[i]<=i+3)&&(a[i]>i+1))
{


c=c+a[i]-(i+1);
}
}
if(c>0)
{
cout<<c<<endl;
}
}
}
