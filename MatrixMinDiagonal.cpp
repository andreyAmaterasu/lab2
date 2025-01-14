#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// Функция для нахождения минимума на главной диагонали матрицы
float findMinDiagonal(float matrix[N][N]) {
    float minVal = matrix[0][0];
    for (int i = 1; i < N; i++) {
        if (matrix[i][i] < minVal) {
            minVal = matrix[i][i];
        }
    }
    return minVal;
}

int main() {
    float m[N][N];
    int i, j;

    srand(static_cast<unsigned int>(time(0)));

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = static_cast<float>(rand()) / RAND_MAX * 100;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << setw(8) << setprecision(5) << m[i][j];
        }
        cout << endl;
    }

    float minVal = findMinDiagonal(m);
    cout << "Минимум на главной диагонали матрицы: " << minVal << endl;

    return 0;
}
