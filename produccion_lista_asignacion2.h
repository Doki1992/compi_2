#ifndef PRODUCCION_LISTA_ASIGNACION2_H
#define PRODUCCION_LISTA_ASIGNACION2_H
#include"produccion_lista_asignacion.h"
#include"produccion_expresion.h"
class produccion_lista_asignacion2:public produccion_lista_asignacion
{
public:
    produccion_expresion*pe;
    QString iden;
    produccion_lista_asignacion2(QString iden,produccion_expresion*pe);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_ASIGNACION2_H
