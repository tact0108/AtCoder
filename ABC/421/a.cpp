#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N;
    cin >> N;
    string S[N];
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    int X;
    string Y;
    cin >> X >> Y;

    for (int i = 1; i <= N; i++)
    {
        if (i == X && S[i - 1] == Y)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
