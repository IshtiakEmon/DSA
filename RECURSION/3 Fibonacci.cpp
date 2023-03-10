#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);

}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}

/* 
    // The Basic way to print the fibonacci series  0 1 1 2 3 5 8 13 21 .................n 
    
    int range;
    cin>>range;
    
    int first = 0;
    int second =1;
    
    cout<<first<<" "<<second<<" ";
    
    int ans = 0;

    for(int i =1 ;i<=range ;i++)
    {
        int ans = first + second ;
        cout<<ans<<" ";

        first = second;
        second = ans ;
    }

*/
