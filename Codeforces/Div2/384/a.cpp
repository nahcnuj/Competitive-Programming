#include <bits/stdc++.h>

using ll = long long;
using Pii = std::pair<int, int>;
using Pll = std::pair<ll, ll>;

const ll INF = (ll)1e11;

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    cout << (s[a-1] == s[b-1] ? 0 : 1) << endl;

    return 0;
}
