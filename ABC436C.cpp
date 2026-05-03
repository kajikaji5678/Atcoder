#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 上記はほぼテンプレで高速化するので書いとくべし

    int n, m;
    cin >> n >> m;

    set<pair<int, int>> st;
    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;

        bool ok = true;

        // 周囲3*3をチェックする
        for (int x = r - 1; x <= r + 1; x++)
        {
            for (int y = c - 1; y <= c + 1; y++)
            {
                if (st.count({x, y}))
                {
                    ok = false;
                }
            }
        }

        if (ok)
        {
            st.insert({r, c});
            ans++;
        }
    }

    cout << ans << endl;
}