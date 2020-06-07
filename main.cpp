#include <iostream>

#include "tree.h"
#include "pointer.h"

const int UNIVERSUM_SIZE = 26; //for visual debug

const int tree::N = 100;

std::vector<int> random_vector(int size) {
    std::vector<int> res;
    res.reserve(size);
    for (int i = 0; i < size; i++) {
        int item = rand() % UNIVERSUM_SIZE + 1;
        while(std::find(res.begin(), res.end(), item) != res.end())
            if (std::find(res.begin(), res.end(), item) != res.end())
                item = rand() % UNIVERSUM_SIZE + 1;
        res.push_back(item);
    }
    return res;
}


int main() {

    setlocale(LC_ALL, "Russian");
    srand(80086);

    auto a = random_vector(5);
    auto b = random_vector(6);
    auto c = random_vector(7);
    auto d = random_vector(4);
    auto e = random_vector(3);
    auto f = random_vector(10);


    tree A('A', a);
    A.Show();
    tree B('B', b);
    B.Show();
    tree C('C', c);
    C.Show();
    tree D('D', d);
    D.Show();
    tree E('E', e);
    E.Show();


    tree AxorB = tree::XOR(A, B),
         AxorBminusC = tree::MINUS(AxorB, C),
         AxorBminusCorD = tree::OR(AxorBminusC, D),
         AxorBminusCorDandE = tree::AND(AxorBminusCorD, E);

    AxorB.Show();
    AxorBminusC.Show();
    AxorBminusCorD.Show();
    AxorBminusCorDandE.Show();


    auto subst = tree::SUBST(3, A, B);
    subst.Show();

    auto merge= tree::MERGE(A, B);
    merge.Show();

    tree erase('E', f);
    erase.ERASE(4, 7);
    erase.Show();

    return 0;
}
