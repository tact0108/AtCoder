#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int S;
    cin >> S;
    string N;
    int A = 0;
    for (int i = 0; i < S; i++)
    {
        cin >> N[i];
        if (S - 3 == i && N[i] == 't')
        {
            A++;
        }
        if (S - 2 == i && N[i] == 'e')
        {
            A++;
        }
        if (S - 1 == i && N[i] == 'a')
        {
            A++;
        }
    }

    if (A == 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
