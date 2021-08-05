#include<bits/stdc++.h>
using namespace std;

void binarySearch(int size ,int arr[],int key)
{
   
   int left = 0;
   int right = size;
   int mid;
   int temp=0;

   while(left<right)
   {
      
       mid = floor((left+right)/2);
       temp++;

       if(key == arr[mid])
       {
           cout<<"Presnt "<<temp<<"\n";
           return;
          
       }

       else if(key < arr[mid])
       {
           right = mid-1;
       }

       else
       {
           left = mid+1;
       }

     

   }
  
    cout<<"Not Presnt "<<temp<<"\n";
          

}

int main()
{
    
    int t , size , key ;
    cin >> t;

    while (t--)
    {
        cin >> size;
        int arr[size];

        for(int i = 0 ; i < size ; i++)
        {
            cin >> arr[i];
        }

        cin >> key;

         binarySearch(size,arr,key);

      
    }
    

}