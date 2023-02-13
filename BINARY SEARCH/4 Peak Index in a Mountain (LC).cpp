/*
An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
*/


#include <bits/stdc++.h>
using namespace std;

#define lln long long int
#define ld long double
#define endl "\n";
#define sc(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define scd(n) scanf("%lf",&n);
#define pf(res) printf("%d\n",res);
#define pfl(res) printf("%lld\n",res);
#define pfd(res) printf("%lf\n",res);
#define f(i,a,b) for(int i=a; i <= b;i++)
#define F(i,a,b) for(int i=a; i < b;i++)



void solve(int arr[],int n) {

        int low = 0;
        int high = n-1;
        int mid = low+((high-low)/2);
        while(low < high)
        {
            mid = low+((high-low)/2);

            if(arr[mid] < arr[mid +1])
            {
                low = mid+1;
            }

            else
            {
               high = mid;

                /* cant do high = mid -1 what if mid == peak ! then you will never find
                 the solution
                */
            }
             mid = low+((high-low)/2);

        }
        cout<<mid<<endl;

}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

   int n;
   cin>>n;
   int arr[n];
   for(int i =0;i<n;i++)
   {
       cin>>arr[i];
   }
   solve(arr,n);




}
