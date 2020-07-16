#include <bits/stdc++.h>
#include <iostream>

#define ll long long
#define ui unsigned int
#define pb push_back
#define vector<int> vi;
#define vector<vi> vvi;
#define vector<ll> vl;
#define vector<vl> vvl;
#define INF 1e9
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main(){

    ll test;
    cin >> test;
    while(test--){
        ll n;
        cin >> n;
        vl arr;
        for(ll i=0; i<n; i++){
            ll t;
            cin >> t;
            arr.pb(t);
        }
        sort(arr.begin(), arr.end());

        ll query;
        cin >> query;
        while(query--){
            ll x,y;
            cin >> x >> y;
            sum = x+y;
            ll getIndex = lower_bound(arr.begin(), arr.end(), sum) - arr.begin();   
            if(arr[getIndex] == sum){
                cout << "-1"<<"\n";
                continue;
            } 
            cout << getIndex << "\n";
        }
    }
    

return 0;
}