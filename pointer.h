//
// Created by Professional on 06.06.2020.
//

#ifndef HABR_POINTER_H
#define HABR_POINTER_H

template <class T> struct pointer {
    const T* p;

    pointer(T* src) {
        p = src;
    }
};

#endif //HABR_POINTER_H
