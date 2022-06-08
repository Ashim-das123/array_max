#include <bits/stdc++.h>
using namespace std;
int large(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[0])
        {
           max = a[i]  ;
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = large(a,n);
    cout<<ans<<endl;

    return 0;
}