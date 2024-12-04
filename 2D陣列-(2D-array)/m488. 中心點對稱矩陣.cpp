#include <iostream>
#include <vector>
#include <sstream> // For std::istringstream
using namespace std;

int main() {
    int T; // 測試資料的數量
    cin >> T; // 讀取測試資料的數量
    cin.ignore(); // 忽略換行符

    for (int t = 1; t <= T; t++) {
        string line;
        getline(cin, line); // 讀取矩陣的維度行
        istringstream iss(line);
        string temp;
        int n;
        iss >> temp >> temp >> n; // 讀取 "N =" 和 n

        vector<vector<int>> M(n, vector<int>(n)); // 創建 n x n 的矩陣
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j]; // 讀取矩陣元素
            }
        }
        cin.ignore(); // 忽略換行符

        // 檢查是否中心點對稱
        bool isSymmetric = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (M[i][j] != M[n - 1 - i][n - 1 - j]) {
                    isSymmetric = false; // 如果不相等，則不是對稱的
                    break;
                }
            }
            if (!isSymmetric) break; // 提前退出
        }

        // 輸出結果
        cout << "Test #" << t << ": " << (isSymmetric ? "Symmetric." : "Non-symmetric.") << "\n";
    }

    return 0;
}
