#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// Функция для нахождения среднеарифметического значения элементов каждого столбца матрицы
void findColumnAverages(float matrix[N][N], float columnAverages[N]) {
    for (int j = 0; j < N; j++) {
        float sum = 0.0;
        for (int i = 0; i < N; i++) {
            sum += matrix[i][j];
        }
        columnAverages[j] = sum / N;
    }
}

int main() {
    float m[N][N];
    float columnAverages[N];
    int i, j;

    srand(static_cast<unsigned int>(time(0)));

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = static_cast<float>(rand()) / RAND_MAX * 100; // Случайное число от 0 до 100
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << setw(8) << setprecision(5) << m[i][j];
        }
        cout << endl;
    }

    findColumnAverages(m, columnAverages);

    for (j = 0; j < N; j++) {
        cout << "Среднеарифметическое значение в столбце " << j + 1 << ": " << columnAverages[j] << endl;
    }

    return 0;
}
