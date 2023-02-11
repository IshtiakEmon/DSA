#include <bits/stdc++.h>
using namespace std;


#define ar array
#define ll long long
#define ld long double
#define f(i,a,b) for(int i =a;i<b;i++)





int firstOccurance(int arr[],int n,int key) {

    int low = 0;
    int high = n-1;
    int mid = low + (high - low)/2;
    int pos =-1;

    while(low<=high)
    {
        if(arr[mid] == key )
        {
          pos = mid;
          high = mid -1;

        }

        if(arr[mid]< key)
        {
            low = mid +1;
        }
        else{

            high = mid-1;
        }

        mid = low+(high -low)/2;
    }
    return pos;

}


int lastOccurance(int arr[],int n,int key)
{
    int low = 0;
    int high = n-1;
    int mid = low + (high - low)/2;
    int pos =-1;

    while(low<=high)
    {
        if(arr[mid] == key )
        {
          pos = mid;
          low = mid +1;
        }

        if(arr[mid] > key)
        {
            high = mid -1;
        }
        else{
            low = mid +1;
        }

        mid = low+(high -low)/2;
    }
    return pos;
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int t;
cin>>t;
while(t--)
{


  int n,k;
  cin>>n>>k;

  int arr[n];
  f(i,0,n)
  {
      cin>>arr[i];
  }



  int ans = firstOccurance(arr,n,k);

  int ans2 = lastOccurance(arr,n,k);

  cout<<ans2 - ans +1<<endl;


}
}

