#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <sstream>
using namespace std;

std::vector<std::string> split(const std::string &str, char delim)
{
    // 分割後を入れる配列
    std::vector<std::string> result;
    // 入力ストリームに変換
    std::stringstream ss(str);
    // 一時保存
    std::string item;

    // ssからdelimが出るまで
    while (std::getline(ss, item, delim))
    {
        result.push_back(item);
    }
    return result;
}

int main()
{
    string s = "hello world";

    int N;
    cin >> N;

    s.erase(N - 1, 1);
    cout << s;
}