//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    map<int, char> mp;
    for(int i=0; i<n; i++)
    {
        if(mp.find(s[i]) != mp.end())
        {
            if(mp[s[i]] != m[i])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        else
        {
            mp[s[i]] = m[i];
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("/Users/vikash/Desktop/output.txt", "w", stdout);
    // #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}