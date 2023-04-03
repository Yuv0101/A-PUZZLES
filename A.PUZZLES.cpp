#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()


using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;

    ll arr[1000];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+m);

    ll ans=arr[n-1]-arr[0];

    for(int i=1;i<=m-n;i++)
    {
        if(arr[i+n-1]-arr[i]<ans)
        ans=arr[i+n-1]-arr[i];
    }
    cout<<ans<<endl;
}
