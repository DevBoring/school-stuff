#include <iostream>
#include <vector>
#include <algorithm> // for std::gcd
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }
    long long result = numbers[0]; // 初始化結果為第一個數
    for (int i = 1; i < n; i++) {
        result = __gcd(result, numbers[i]);
    }
    cout << result << "\n";

    return 0;
}
