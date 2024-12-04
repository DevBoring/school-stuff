#include <iostream>
#include <vector>

int main() {
    int row, column;
    std::cin >> row >> column;

    std::vector< std::vector<int> > list1(row, std::vector<int>(column));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cin >> list1[i][j];
        }
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            std::cout << list1[j][i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
