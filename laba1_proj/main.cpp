#include <iostream>
#include "include/find_max.h"

using namespace std;

int main() {
    int divider;
    int bound;
    cout << "Введите делитель и границу: ";
    cin >> divider >> bound;

    find_max(divider, bound);

    return 0;
}
