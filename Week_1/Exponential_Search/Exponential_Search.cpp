#include<bits/stdc++.h>
using namespace std;

void binarySerach(int key , int arr[] , int lower , int upper , int temp)
{
    
   int mid ;
  

   while(lower<=upper)
   {
        
       mid =floor((lower+upper)/2);
       temp++; 

       if(arr[mid]==key)
       {
          cout<<"Present "<<temp<<"\n";   
          return;
       }
        if(key < arr[mid])
        {
            upper = mid-1;
        }
        else
        {
            lower= mid+1;
        }
       
       
   }
    
    cout<<"Not Present "<<temp<<"\n";
    
}
   void exponetionalSearch(int key , int arr[] , int size)
   {
      
       int upper = 1;
       int temp=1;

       if(arr[0] == key)
       {
         cout<<"Present "<<temp<<"\n";
         return;
       }
       while(upper < size && arr[upper] < key)
       {
            upper *=2;
            temp++;
       }
       
      binarySerach(key , arr ,upper/2 , min(upper,size-1) , temp);
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

         exponetionalSearch(key,arr,size);

    }

}