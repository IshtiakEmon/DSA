#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key) {

    int low = 0;
    int high = n-1;

//  int mid= (low+ high)/2;
    int  mid =  low + (high -low)/2;

    /* OVERFLOW !!!!!

        INT_MAX = 2^31 -1;

        mid = (low + high) /2;
    if;
        low = 2^31 -1;
        high = 2^31 -1;

    then;
         mid = (low + high) /2;
    Now;
         Can mid hold the value ??
         = NO !!!
        mid cant hold the value;

    Now What;

        WHAT CAN WE DO NOW ??

        what if  ,
                    mid =  low + (high -low)/2;

        then the number become smaller to sum;

    */


    while(low <= high )
    {

        if(arr[mid]== key)
        {
            return mid;
        }

         if( arr[mid] < key)
         {
             low = mid+1;
         }

         if( arr[mid] > key)
         {
             high = mid -1;
         }

          mid =  low + (high -low)/2;


    }

    return -1;



    }



int main() {


   int a[6]={2,4,6,8,10,14};
   int ar[6]={5,8,9,15,18,35};
   int arr[6]={1,4,6,10,15,18};

   int ans = binarySearch(arr,6,18);
   cout<<ans<<endl;


}
