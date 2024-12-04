#include <iostream>
#include <vector>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector< std::vector<int> > list1(n, std::vector<int>(m));
    std::vector< std::vector<int> > list2(m, std::vector<int>(k));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> list1[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> list2[i][j];
        }
    }


    std::vector<std::vector<int>> C(n, std::vector<int>(k, 0));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++) {
                C[i][j] += list1[i][l] * list2[l][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
