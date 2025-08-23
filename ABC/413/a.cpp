#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N, M, A;
    cin >> N >> M;
    int sinamono = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        sinamono += A;
    }
    if (sinamono <= M)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
