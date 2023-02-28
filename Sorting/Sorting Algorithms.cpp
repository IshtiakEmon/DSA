#include <bits/stdc++.h>
using namespace std;

void Merge(int*arr , int s,int e)
{
    int mid =(s+e)/2;

    int len1 = mid- s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainindex = s;

    for(int i = 0;i<len1;i++)
    {
        first[i]= arr[mainindex++];

    }
    mainindex = mid+1;

    for(int i =0; i<len2;i++)
    {
        second[i] = arr[mainindex++];
    }

    mainindex = s;
    int index1 =0 ;
    int index2 =0;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1]< second[index2])
        {
            arr[mainindex++] = first[index1++];
        }else
        {

            arr[mainindex++] = second[index2++];
        }
    }

    while(index1< len1)
    {
        arr[mainindex++] = first[index1++];
    }
    while(index2<len2)
    {
        arr[mainindex++]= second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr ,int s,int e)
{
    if(s>=e)return;

    int mid= (s+e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    Merge(arr,s,e);
}

void insertion_sort(int *a, int n)
{
    for(int i = 1 ;i < n; i++)
    {
        int value = a[i];
        int j = i-1;

        while(j>=0 )
        {

           if(a[j] > value )
           {
                swap(a[j],a[j+1]);
                j--;

           }else{break;}
        }
        value = a[i+1];
    }

}

void Bubble(int *arr ,int n)
{
    for(int i = 1 ; i< n ;i++) // Rounds
    {
        for(int j =0; j<n-1;j++) // Comparing
        {
            if(arr[j+1] < arr[j])
            {
                swap (arr[j+1],arr[j]);
            }
        }
    }
}

void Selection(int *arr ,int n)
{

    for(int i = 0; i<n-1;i++)
    {
         int mini = i;

        for(int j = i+1; j < n ; j++ )
        {
            if(arr[j] < arr[mini])
            {

                mini = j ;

            }
        }
         swap ( arr[mini] , arr[i]);

    }
}

int partition(int *arr, int s,int e)
{
    int pivot = arr[s];
    int cnt = 0;
    // counting elements < pivot

    for(int i =s+1;i<=e;i++)
    {
        if(arr[i]<= pivot){cnt++;}
    }

    //place pivot at right position

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    // left and right part

    int i = s, j =e;
    while(i< pivotIndex && j> pivotIndex)
    {
        while(arr[i] <= pivot){
            i++;
        }
          while(arr[j] > pivot){
            j++;
        }

        if(i< pivotIndex && j> pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
return pivotIndex;


}
void quicksort(int *arr,int s ,int e)
{
    if(s>=e)return;

    // partition

    int p = partition(arr,s,e);

    // left part sort

    quicksort(arr,s,p-1);

    // right part sort

    quicksort(arr,p+1,e);

}


void printArray(int *arr , int n)
{
    for(int i = 0  ;i<n;i++)
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
    printArray(arr,n);


  //   mergeSort(arr,0,n-1);
  //   insertion_sort(arr,n);
   //  Bubble(arr,n);
 //  Selection(arr,n);
    quicksort(arr,0,n-1);


    cout<<"Array After Sorting"<<endl;
    printArray(arr,n);

}
