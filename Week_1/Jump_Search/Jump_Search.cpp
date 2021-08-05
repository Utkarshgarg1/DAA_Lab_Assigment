#include<bits/stdc++.h>
using namespace std;


void jumpSearch(int size , int arr[] , int key)
{
    
     int step = sqrt(size);
     int prev = 0;
     int count = 0;

     while(arr[min(step,size)-1] < key)
     {
          count++;

        if(prev >= size)
        {
           cout<<"Not Present "<<count<<"\n";   
           return ;
        }
         prev = step;
         step += sqrt(size);


     }

     while(arr[prev] < key)
     {
        prev++;
        count++;

         if(prev == min(step,size))
         {
            cout<<"Not Present "<<count<<"\n";   
            return ;
         }
         
     }

      if(arr[prev] == key)
      {
             cout<<"Present "<<count<<"\n";   
            return ;
      }   

            cout<<"Not Present "<<count<<"\n";   
            return ;
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

         jumpSearch(size,arr,key);

        
    }
    
}