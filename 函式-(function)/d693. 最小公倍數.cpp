#include <iostream>
#include <vector>
#include <algorithm> // for __gcd(a, b)
using namespace std;

// 計算最小公倍數的函數
long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b; // LCM(a, b) = (a * b) / GCD(a, b)
}

int main() {
    int n;
    while (true) {
        cin >> n; // 讀取 N
        if (n == 0) {
            break; // 當 N 為 0 時結束程式
        }

        vector<int> numbers(n); // 使用 vector 儲存 N 個正整數
        for (int i = 0; i < n; i++) {
            cin >> numbers[i]; // 讀取 N 個正整數
        }

        long long result = numbers[0]; // 初始化結果為第一個數
        for (int i = 1; i < n; i++) {
            result = lcm(result, numbers[i]); // 計算 LCM
        }

        cout << result << "\n"; // 輸出結果
    }
    return 0;
}
