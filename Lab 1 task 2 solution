#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector <pair <int, int>> res;

    if (a > 0 && c > 0) //одеваемся в синий комплект
        res.push_back(make_pair(b + 1, d + 1));

    if (b > 0 && d > 0) //одеваемся в красный комплект
        res.push_back(make_pair(a + 1, c + 1));

    if (a > 0 && b > 0) //выбираем все комплекты и любой носок
        res.push_back(make_pair(max(a, b) + 1, 1));

    if (c > 0 && d > 0) //выбираем любой комплект и все носки
        res.push_back(make_pair(1, max(c, d) + 1));

    int ans1 = -1, ans2 = -1, mini = 1e9;

    for (int i = 0; i < res.size(); i++) {
        if (res[i].first + res[i].second < mini) {
            mini = res[i].first + res[i].second;
            ans1 = res[i].first;
            ans2 = res[i].second;
        }
    }

    cout << ans1 << "\t" << ans2;

    return 0;
}
