//
// Created by eugen on 02.05.2019.
//

#include "Queue.h"

int Queue::size() {
    return st1.size() + st2.size();
}

bool Queue::empty() {
    return st1.empty() && st2.empty();
}

void Queue::offer(int value) {
    st1.push(value);
}

int Queue::remove() {
    if (st2.empty()) {
        while (!st1.empty()) {
            st2.push(st1.pop());
        }
    }
    return st2.pop();
}
