//
// Created by Professional on 06.06.2020.
//

#ifndef HABR_POINTER_H
#define HABR_POINTER_H

template <class T> struct pointer {
    const T* p;
    int data; // нужно, чтобы понимать указатель на какой из элементов мы имеем ввиду

    pointer(int src_data, T* src_p) {
        data = src_data;
        p = src_p;
    }
};

#endif //HABR_POINTER_H
