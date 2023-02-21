#include <bits/stdc++.h>
using namespace std;

int counting(int n)
{
    if(n==1)return 1;

    cout<<n<<" ";

    counting(n-1);
    /* This will print  for n =5
        5 4 3 2 1 
        
        n n-1 n-2 .......3 2 1
        
        # To print the sequence  1 2 3 4 ..... n-2  n-1  n
        
        if(n == 0) return;
        counting(n-1)
        cout<<n<<" ";
       */
}

int main() {

    int n;
    cin>>n;
    cout<<"------------------"<<endl;
    int ans = counting(n);
    cout<<ans;

    return 0;
}
