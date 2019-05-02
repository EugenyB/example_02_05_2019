//
// Created by eugen on 02.05.2019.
//

#include "Stack.h"

void Stack::push(int value) {
    arr[sz++] = value;
}

int Stack::pop() {
    return arr[--sz];
}

int Stack::size() {
    return sz;
}

bool Stack::empty() {
    return sz==0;
}
