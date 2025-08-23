#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N, L, R, X, Y;
    cin >> N >> L >> R;
    int a = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        if (X <= L && Y >= R)
        {
            a++;
        }
    }
    cout << a << endl;
}
