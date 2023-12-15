#include <iostream>
#include <vector>
#include <cmath>

int main() {
    // Исходная матрица
    std::vector<std::vector<int>> matrix = { {1, 2, 3},
                                            {-4, 5, -6},
                                            {7, -8, 9} };

    // Поиск строки с максимальной по абсолютной величине суммой элементов
    int maxSum = 0;
    int maxSumRow = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        int currentSum = 0;
        for (int j = 0; j < matrix[i].size(); ++j) {
            currentSum += std::abs(matrix[i][j]);
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxSumRow = i;
        }
    }

    // Замена всех элементов найденной строки на 9999
    for (int j = 0; j < matrix[maxSumRow].size(); ++j) {
        matrix[maxSumRow][j] = 9999;
    }

    // Вывод результата
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}