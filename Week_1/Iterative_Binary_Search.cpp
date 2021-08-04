#include<bits/stdc++.h>
using namespace std;

int binarySearch(int size ,int arr[],int key)
{
   
   int left = 0;
   int right = size;
   int mid = (left+right)/2;

   while(left<right)
   {
       if(key == arr[mid])
       {
           return mid+1;
       }

       else if(key < arr[mid])
       {
           right = mid-1;
       }

       else
       {
           left = mid+1;
       }

       mid = floor((left+right)/2);

   }
  
   return 0;

}

int main()
{
    
    int t , size , key , position;
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

        position = binarySearch(size,arr,key);

        if(position)
        {
            cout<<"Present "<<position<<"\n";
        }
        else
        {
            cout<<"Not Present"<<"\n";
        }
    }
    

}