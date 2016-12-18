#ifndef PRODUCCION_PARAMETRO1_H
#define PRODUCCION_PARAMETRO1_H
#include"produccion_parametro.h"
#include"produccion_tipo.h"
class produccion_parametro1:public produccion_parametro
{
public:
    produccion_tipo*pt;
    QString id;
    produccion_parametro1(produccion_tipo*pt, QString id);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_PARAMETRO1_H
