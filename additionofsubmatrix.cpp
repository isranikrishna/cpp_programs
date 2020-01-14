#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int n,m,i,j,x1,y1,x2,y2;
while(t--)
{

cin>>n>>m;
long long int c[n][m],sum=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cin>>c[i][j];
}
}
cin>>x1>>y1>>x2>>y2;

for(i=x1-1;i<=x2-1;i++)
{
for(j=y1-1;j<=y2-1;j++)
{
sum = sum+ c[i][j];
}

}

cout<<sum<<endl;
}
return 0;
}
