#include <bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }

    int smaller = factorial(n-1);

    int bigger = n * smaller;

    return bigger;

    /* we can write line 13 - 17 in a single line.
        return bigger
    =   n* smaller  [bigger = n * smaller]
    =   n* factorial(n-1)  [ smaller = factorial(n-1) ]

    */
 //  return n* factorial(n-1);
}

int main() {


    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;

}
