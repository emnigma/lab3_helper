#include <iostream>

#include "tree.h"
#include "pointer.h"

const int tree::N = 100;

int main() {

    setlocale(LC_ALL, "Russian");
    srand(80086);
/*
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
*/

    std::vector<int> f1 = {1, 1, 2, 2, 2, 1, 1, 1};
    std::vector<int> s1 = {2, 2};
    tree A1('A', f1);
    tree B1('B', s1);

    std::vector<int> f2 = {1, 1, 2, 2, 2, 1, 1, 1};
    std::vector<int> s2 = {2, 2};

    tree A2('A', f2);
    tree B2('B', s2);

    std::vector<int> f3 = {1, 1, 2, 2, 2, 1, 1, 1};
    std::vector<int> s3 = {2, 2};

    tree A3('A', f3);
    tree B3('B', s3);

    std::vector<int> f4 = {1, 1, 2, 2, 2, 1, 1, 1};
    std::vector<int> s4 = {2, 2};

    tree A4('A', f4);
    tree B4('B', s4);


    auto and_ = tree::AND(A1, B1);
    and_.Show();

    auto minus = tree::MINUS(A2, B2);
    minus.Show();

    auto xor_ = tree::XOR(A3, B3);
    xor_.Show();

    auto or_ = tree::OR(A4, B4);
    or_.Show();

    return 0;
}
