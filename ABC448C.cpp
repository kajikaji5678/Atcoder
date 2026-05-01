#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    // Nは数字列の大きさで
    // Qは処理回数
    int N, Q;
    cin >> N >> Q;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        int a;
        cin >> v[i];
    }

    vector<pair<int, int>> vp;

    for (int i = 0; i < N; i++) {
        vp.push_back({v[i], i});
    }

    // 小さい順のリストを作る
    sort(vp.begin(), vp.end());

    for (int i = 0; i < Q; i++) {
        int K;
        cin >> K;
        // 消去されたインデックスを記録する箱を作成
        set<int> removed;
        
        for (int j = 0; j < K; j++) {
            int x;
            cin >> x;
            removed.insert(x - 1);
        }

        for (auto [val, idx] : vp) {
            if (!removed.count(idx)) {
                cout << val << endl;
                break;
            }
        }
    }
}


