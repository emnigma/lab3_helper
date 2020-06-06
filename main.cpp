#include <iostream>

#include "tree.h"

const int tree::N = 100;

int main() {

    setlocale(LC_ALL, "Russian");
    srand(80086);

    std::vector<int> f = {1, 2, 3, 4, 5, 7};
    std::vector<int> s = {1, 2, 5, 7, 8, 9, 10};

    tree A('A', f);
    A.Show();

    A.removeByKey(1);



    return 0;
}
