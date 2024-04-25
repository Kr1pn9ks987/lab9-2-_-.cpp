// lab9(2)_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    const int rows = 3; 
    const int cols = 4; 

    int array[rows][cols] = {
        {1, 2, -3, 4},
        {5, -6, 7, 8},
        {9, 10, 11, 12}
    };

    int sum_positive_rows = 0;
    for (int i = 0; i < rows; ++i) {
        int row_sum = 0;
        for (int j = 0; j < cols; ++j) {
            row_sum += array[i][j];
            if (array[i][j] < 0) {
                row_sum = 0; 
                break; 
            }
        }
        sum_positive_rows += row_sum; 
    }
    cout << "Сума елементів у тих рядках, які не містять від’ємних елементів: " << sum_positive_rows << endl;

    cout << "Мінімальні елементи у кожному рядку:" << endl;
    for (int i = 0; i < rows; ++i) {
        int min_element = array[i][0];
        for (int j = 1; j < cols; ++j) {
            if (array[i][j] < min_element) {
                min_element = array[i][j];
            }
        }
        cout << "Рядок " << i + 1 << ": " << min_element << endl;
    }

    return 0;
}