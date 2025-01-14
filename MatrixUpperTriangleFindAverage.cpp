#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// Функция для нахождения среднеарифметического значения элементов верхнетреугольной части матрицы
float findAverageUpperTriangle(float matrix[N][N]) {
    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) { // Обратите внимание на условие j >= i
            sum += matrix[i][j];
            count++;
        }
    }
    return sum / count;
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

    float average = findAverageUpperTriangle(m);
    cout << "Среднеарифметическое значение элементов верхнетреугольной части матрицы: " << average << endl;

    return 0;
}
