//
// Created by eugen on 02.05.2019.
//

#ifndef UNTITLED17_QUEUE_H
#define UNTITLED17_QUEUE_H


#include "Stack.h"

class Queue {
private:
    Stack st1;
    Stack st2;
public:
    int size();
    bool empty();
    void offer(int);
    int remove();
};


#endif //UNTITLED17_QUEUE_H
