#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;

int ng,nm;
while(t--)
{
cin>>ng>>nm;
int a[ng],b[nm],i;
for(i=0;i<ng;i++)
{
cin>>a[i];
}
for(i=0;i<nm;i++)
{
cin>>b[i];
}

sort(a,a+ng,greater<int>());
sort(b,b+nm,greater<int>());

if((a[0]>=b[0])
{
cout<<"Godzilla"<<endl;

}
else if (b[0]>a[0])
{
cout<<"MechaGodzilla"<<endl;


}

}
}

