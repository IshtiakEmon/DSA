#include <bits/stdc++.h>
using namespace std;

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

void print(int *a,int n)
{
      for(int i = 0 ;i<n;i++)
    {
        cout<<a[i]<< " ";
    }

}
int main() {

    int n;
    cin>>n;

    int *a = new int [n];

     // input

    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    insertion_sort(a,n);
    print(a,n);




}

