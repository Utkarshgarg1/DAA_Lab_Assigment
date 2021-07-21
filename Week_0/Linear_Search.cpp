#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll;

int main(){

   ll t;
   cout<<"Enter total number of total testcase: ";
   cin>>t;

   while(t--)
   {
      int size=0 , comp=0 , key;
      bool ans=false;
      cout<<"Enter size of your array: ";
      cin >> size;
      int arr[size];
      cout<<"Enter key element: ";
      cin>>key;

      for(int i=0;i < size;i++)
      {
         cout<<"enter array element: ";
         cin>>arr[i];
      }

      for(comp=0;comp< size;comp++)
      {
          if(key==arr[comp])
          {
              ans=true;
              break;
          }
      }

      if(ans)
      {
          cout<<"Element is present"<<"\n";
          cout<<"total comparison is: "<<comp+1;
      }
      else
      {
          cout<<"Element not found"<<"\n";
          cout<<"total comparison is: "<<size;
      }

      cout<<"\n";
   }
   
}