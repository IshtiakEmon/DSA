#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr , int s, int e)
{
    int mid = (s+e)/2;

    // creating new 2 arrays

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values to the new array

     // copying the first half starting from 0 to mid
    int mainIndex = s;

    for(int i =0 ;i<len1;i++)
    {
        first[i]= arr[mainIndex++];
    }

    // copying the other half starting from mid + 1 to end

    mainIndex = mid+1;

    for(int i = 0 ;i<len1;i++)
    {
        second[i]= arr[mainIndex++];

    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 =0;
    mainIndex = s;
    while(index1 <len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else{

            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while(index2 < len2)
    {

        arr[mainIndex++]= second[index2++];
    }

    delete []first;
    delete []second;

}

void mergesort(int *arr , int s, int e)
{
    if(s>=e)return;

    int mid = (s+e)/2;

    //sorting left part

    mergesort(arr,s,mid);

    // sorting right part

    mergesort(arr,mid+1,e);

    // Merge

    Merge(arr,s,e);


}

void printArray(int *arr , int s,int e)
{
    for(int i = s ;i<e;i++)
    {
        cout<<arr[i]<< " ";
    }cout<<endl;
}


int main() {

    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Before Sorting"<<endl;
    printArray(arr,0,n);
    mergesort(arr,0,n-1);
    cout<<"Array After Sorting"<<endl;
    printArray(arr,0,n);


    return 0;
}
