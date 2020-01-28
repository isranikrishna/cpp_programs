#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n],i,c=1,b[n],j;
for(i=0;i<n;i++)
{
cin>>a[i];
}

for(i=n-1;i>=0;i--)
{
c=0;
for(j=i;j>=0;j--)
{
    if(a[j]>a[i])
    {
        break;
    }


else if((a[i]>=a[j]))
{
c++;
}
}
b[i]=c;
}
for(i=0;i<n;i++)
{
    cout<<b[i]<<" ";
}
cout<<endl;
}
}

