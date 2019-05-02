//
// Created by eugen on 02.05.2019.
//

#ifndef UNTITLED17_STACK_H
#define UNTITLED17_STACK_H


class Stack {
private:
    int sz = 0;
    int arr[1000];
public:
    void push(int);
    int pop();
    int size();
    bool empty();
};


#endif //UNTITLED17_STACK_H
