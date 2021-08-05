#include<bits/stdc++.h>
using namespace std;


void binarySearch(int arr[] , int key , int left , int right , int temp)
{
    int mid;
    if(left <= right)
    {

     mid = floor((left+(right-left)/2));
    temp++;

    if(arr[mid] == key)
    {
      cout<<"Present "<<temp<<"\n";
      return;
    }
    if(key < arr[mid])
      return binarySearch( arr , key , left , mid-1,temp);

      return binarySearch( arr , key , mid+1 , right,temp);

    }

    cout<<"Not Present "<<temp<<"\n";


}

int main()
{
    
    int t , size , key , iterations ;
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

        binarySearch(arr,key,0,size-1,0);

    }
    

}