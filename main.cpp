#include <iostream>

#include "tree.h"
#include "pointer.h"

const int tree::N = 100;

int main() {

    setlocale(LC_ALL, "Russian");
    srand(80086);

    std::vector<int> f = {1, 2, 3, 4, 5, 5, 6, 7};
    std::vector<int> s = {2, 3, 5, 8};

    tree A('A', f);
    A.Show();
    A.remove(A.root, 7);
    A.Show();

    return 0;
}
