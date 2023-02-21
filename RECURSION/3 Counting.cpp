#include <bits/stdc++.h>
using namespace std;

int counting(int n)
{
    if(n==1)return 1;

    cout<<n<<" ";

    counting(n-1);
}

int main() {

    int n;
    cin>>n;
    cout<<"------------------"<<endl;
    int ans = counting(n);
    cout<<ans;

    return 0;
}
