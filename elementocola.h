#ifndef ELEMENTOCOLA_H
#define ELEMENTOCOLA_H


#include <memory>
#include "tipodato.h"

class ElementoCola
{
public:
    TipoDato dato;
    std::shared_ptr <ElementoCola> next = nullptr;
    std::shared_ptr <ElementoCola> prev = nullptr;
public:
    ElementoCola(const TipoDato & dato);
};

#endif // ELEMENTOCOLA_H
