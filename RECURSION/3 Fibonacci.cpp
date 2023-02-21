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
    int first = 0;
    int second =1;
    cout<<first<<" "<<second<<" ";
    int ans = 0;

    for(int i =1 ;i<=10;i++)
    {
        int ans = first + second ;
        cout<<ans<<" ";

        first = second;

        second = ans ;
    }


*/
