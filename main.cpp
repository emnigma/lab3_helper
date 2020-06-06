#include <iostream>

#include "tree.h"
#include "pointer.h"

const int tree::N = 100;

int main() {
/*
    setlocale(LC_ALL, "Russian");
    srand(80086);

    std::vector<int> f = {1, 1, 1, 1, 2, 1, 1, 1, 1, 4};
    std::vector<int> s = {1, 2, 5, 7, 8, 9, 10};

    tree A('A', f);
    A.Show();
*/
    std::vector<int> f = {1, 2, 3};
    tree A('A', f);
    std::vector<pointer<node>> keys;
    keys.emplace_back(1, A.getElementByKey(1));
    keys.emplace_back(2, A.getElementByKey(2));
    keys.emplace_back(3, A.getElementByKey(3));
    keys.emplace_back(1, A.getElementByKey(1));

    return 0;
}
