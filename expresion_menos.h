#ifndef EXPRESION_MENOS_H
#define EXPRESION_MENOS_H
#include "produccion_expresion.h"

class expresion_menos:public produccion_expresion
{
public:
    expresion_menos(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_MENOS_H
