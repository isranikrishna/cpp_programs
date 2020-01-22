#include<bits/stdc++.h>
using namespace std;

int main()
 {
 int n;
 cin>>n;

 while (n)
 {

 int arr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }

 stack <int> s;

 int a=1;
 int check  = true ;
 for(int i=0;i<n;i++)
 {
   while(!s.empty()&& s.top()==a)
      {
        a++;
        s.pop();
      }
      if(arr[i]==a)
         {
          a++;
         }
         else if(!s.empty() && arr[i]>s.top())
            {
              check = false ;
              break;
            } else {
                    s.push(arr[i]);
                    }
                    }
                    if(check ==true) {
                      cout<<"yes"<<endl;
                      }
                      else {
                        cout<< "no"<<endl;
                        }


        cin>>n;
        }

 return 0;

 }
