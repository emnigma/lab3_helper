#include <iostream>

#include "tree.h"
#include "pointer.h"

const int tree::N = 100;

int main() {

    setlocale(LC_ALL, "Russian");
    srand(80086);

    std::vector<int> f = {1, 1, 2, 2, 2, 1, 1, 1};
    std::vector<int> s = {2, 2};

    tree A('A', f);
    A.Show();
    tree B('B', s);
    B.Show();

    auto C = tree::SUBST(3, A, B);
    C.Show();

    auto D = tree::MERGE(A, B);
    D.Show();

    auto E = tree::EXCL(A, B);
    E.Show();

//    auto F(A);//почему-то не работает, если не почините, то удалите

    tree F('F', f);
    F.ERASE(3, 5);
    F.Show();

    return 0;
}
