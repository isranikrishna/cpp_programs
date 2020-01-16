#include<iostream>
using namespace std;
int main()
{
    int t;


   long long int n,d;
   cin>>t;
   while(t--)
   {
    cin>>n;
    long long int a[n];
    cin>>d;
    for(int i=0;i<n;cin>>a[i],i++);
    d=d%n;
    for(int i=d;i<n;i++)
        cout<<a[i]<<" ";

    for(int i=0;i<d;i++)
         cout<<a[i]<<" ";
   }
    return 0;

}
