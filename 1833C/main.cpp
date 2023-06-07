//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC target ("avx2")

#include <bits/stdc++.h>

#define fendl "\n"
#define sz(x) (int) size(x)

#define ll long long
#define pll pair<long, long>
#define vll vector<long long>

#define um unordered_map

#define debug(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

#define FOR(i, start, end) for(int i = start; i < end; ++i)
#define FORd(i, start, end) for(int i = start; i >= end; --i)

#define nonme ios::sync_with_stdio(false); cin.tie(nullptr);

/*
    Useful links
    https://codeforces.com/blog/entry/15547 Compiler options
    -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op
    C:\Program Files\CodeBlocks\share\CodeBlocks\templates\wizard\console\cpp\main.cpp <- to change this code

*/

using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

// ----------- ACTUAL PROGRAM START -----------

int main() {
    nonme;
    //setIO("cownomics");
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a (n);
        FOR(i, 0, n) {
            cin >> a[i];
        }
        int maxNum = a[0];
        int inf = 1e9+1;
        int minEven = inf;
        int minOdd = inf;
        FOR(i, 0, n) {
            maxNum = max(maxNum, a[i]);
            if (a[i] % 2 == 0) minEven = min(minEven, a[i]);
            else minOdd = min(minOdd, a[i]);
        }
        if (minEven == inf || minOdd == inf) {
            cout << "YES " << fendl;
        } else {
            if (minEven < minOdd) cout << "NO" << fendl;
            else cout << "YES" << fendl;
        }
    }
    return 0;
}
