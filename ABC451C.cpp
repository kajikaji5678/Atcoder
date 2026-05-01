#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    vector<int> now;

    for (int i = 0; i < Q; i++) {
        int a, h;
        cin >> a >> h;
        if (a == 1) {
            now.push_back(h);
            sort(now.begin(), now.end());
        } else {
            now.erase(remove_if(now.begin(), now.end(), [h](int x) {
                return x <= h;
            }), now.end());
        }

        cout << now.size() << endl;
    }
}

// 結果 TLE ただし一部AC
// 敗因　毎回ソートしてたから


