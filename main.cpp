// cd "C:\Users\я\OneDrive\Desktop\CPP\" ; if ($?) { g++ main.cpp -o main } ; if ($?) { .\main }
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> parent(n+1), color(n+1);
    for(int i=1; i<=n; i++)cin >> parent[i];
    for(int i=1; i<=n; i++)cin >> color[i];
    bool flag=true;
    for(int i=2; i<=n; i++) if (color[parent[i]]==color[i]) flag=false;
    if (flag) cout << "good";
    else cout << "bad";
}   

int32_t main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    } 
    return 0;
}