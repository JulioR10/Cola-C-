#include "queue.h"

Queue::Queue()
{

}

int Queue::size() const
{

}

bool Queue::empty() const
{

}

// Removes the first element from the queue
TipoDato& Queue::front() const{
    // TODO: Exactly the same implementation
    //       as DoubleLinkedList::front
}

// Removes the first element from the queue
TipoDato& Queue::back() const{
    // TODO: Exactly the same implementation
    //       as DoubleLinkedList::back
}

// Inserts an element, it will become the latest in the queue
void Queue::push(const TipoDato &dato)
{
    // TODO: Exactly the same implementation
    //       as DoubleLinkedList::push_back

}

// Removes the first element from the queue
void Queue::pop() {
    // TODO: Exactly the same implementation
    //       as DoubleLinkedList::pop_front
    if (_front != _back) {
        // Take the element before the latest one
        auto prevprev = _back->prev;
        // The next element now is 'nullptr'
        prevprev->next = nullptr;

        // Update the value of 'back'
        _back = prevprev;
    } else { // If there is only one element in the list
        this->clear(); // Just clear the list
    }
}
