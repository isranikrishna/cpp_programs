#include<bits/stdc++.h>
using namespace std;
int main()
{
int g,b;
cin>>g>>b;


while((g!=-1)&&(b!=-1))

{
if(g==b)
{
cout<<1<<endl;
}
else if ((g>b)&&(b!=0))
{
cout<<g-b-1<<endl;
}
else if((g<b) && (g!=0))
{
cout<<b-g-1<<endl;
}
if((b==0)&&(g!=0))
{
    cout<<g;
}
if((g==0)&&(b!=0))
{
    cout<<b;
}
if((g==0)&&(b==0))
{

    cout<<0;
}
cin>>g>>b;
}
}
