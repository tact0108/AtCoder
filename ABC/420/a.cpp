#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if (X + Y > 12)
    {
        cout << (X + Y) - 12 << endl;
    }
    else
    {
        cout << X + Y << endl;
    }
}