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


//Approach 1
void Merge(int *a ,int*b,int*c,int n,int m) {

    int i =0 ,j= 0,k =0;

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
    }

    while(i<n){c[k++]= a[i++];}
    while(j<m){c[k++]=b[j++];}
}

//Approach 2
void MergeINT_MAX(int *a ,int*b,int*c,int n,int m) {

    int i =0 ,j= 0,k =0;

    a[n]=b[m]=INT_MAX;

    while(i<=n && j<=m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
    }
}


void print(int*c,int sz)
{
    for(int i =0;i<sz;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);


 int n,m;
 cin>>n>>m;
int sz =  n+m;

 int*a = new int[n];
 int*b = new int[m];
 int*c = new int[sz];

 for(int i = 0 ;i<n;i++)
 {
     cin>>a[i];
 }

 for(int i = 0 ;i<m;i++)
 {
     cin>>b[i];
 }

    Merge(a,b,c,n,m);
    print(c,sz);


}
