#include <iostream>
#include "../include/find_max.h"
using namespace std;

int find_max(int divider, int bound) {
    
    if (divider <= 0 || bound <= 0) {
        cout << "Ошибка: неверный ввод" << endl;
        return 1;
    }

    int max_n = 0;

    for (int i = 1; i <= bound; ++i) {
        if (i % divider == 0) {
            max_n = i;
        } 
    }
    
    if (max_n > 0) {
        cout << "Наибольшее число N: " << max_n << endl;
        return max_n;
    } else {
        cout << "Ошибка: такого числа нет" << endl;
        return 0;
    }
}
