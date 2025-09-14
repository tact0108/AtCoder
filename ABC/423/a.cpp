#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int X, C;
    cin >> X >> C;
    int cnt = X / (1000 + C);
    int ans = cnt * 1000;

    cout << ans << endl;
}
