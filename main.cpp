#include <iostream>

#include "tree.h"
#include "pointer.h"

const int UNIVERSUM_SIZE = 26; //for visual debug

const int tree::N = 100;

const int MAX_SIZE = 20;

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

    for (int c_size = 10; c_size < MAX_SIZE; c_size+=2) {
        auto a = random_vector(c_size);
        auto b = random_vector(c_size);
        auto c = random_vector(c_size);
        auto d = random_vector(c_size);
        auto e = random_vector(c_size);
        auto f = random_vector(c_size);

        tree A('A', a);
        tree B('B', b);
        tree C('C', c);
        tree D('D', d);
        tree E('E', e);
        tree erase('e', f);

        tree AxorB = tree::XOR(A, B),
                AxorBminusC = tree::MINUS(AxorB, C),
                DandE = tree::AND(D, E),
                AxorBminusCorDandE = tree::AND(AxorBminusC, DandE);

        auto subst = tree::SUBST(0, A, B);

        auto merge = tree::MERGE(A, B);

        erase.ERASE(3, 4);
    }
    return 0;
}
