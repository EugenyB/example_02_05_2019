#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    while (! stack.empty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;
    Queue queue;
    for (int i = 1; i < 100; ++i) {
        queue.offer(i);
    }
    while (!queue.empty()) {
        cout << queue.remove() << " ";
    }
    cout << endl;
    return 0;
}