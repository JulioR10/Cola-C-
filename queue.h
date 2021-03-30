#ifndef QUEUE_H
#define QUEUE_H

#include "elementocola.h"

class Queue {
public:
    Queue();

    int size() const;
    bool empty() const;

    TipoDato& front() const;
    TipoDato& back() const;

    void push(const TipoDato& dato);
    void pop();
protected:
    std::shared_ptr<ElementoCola> _front = nullptr;
    std::shared_ptr<ElementoCola> _back = nullptr;
};

#endif // QUEUE_H
