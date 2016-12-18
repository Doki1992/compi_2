#include "ejecuta_visitor.h"
#include "QString"
#include "math.h"
#include"QDebug"
#include"mainwindow.h"
ejecuta_visitor::ejecuta_visitor(tabla_simbolos *ts)
{
    this->ts=ts;
}
QString ejecuta_visitor::visit_pintar_s1(produccion_pintar_s11 *pd)
{
    //qDebug()<<pd->pl->accept(this);
}

QString ejecuta_visitor::visit_pintar_or1(produccion_pintar_or1 *pd)
{

}

QString ejecuta_visitor::visit_pintar_p1(produccion_pintar_p1 *pd)
{

}

QString ejecuta_visitor::visit_principal1(produccion_principal1 *pd)
{
    pd->pl->accept(this);
    return"";
}

QString ejecuta_visitor::visit_ordenar1(produccion_ordenar1 *pd)
{

}

QString ejecuta_visitor::visit_sumarizar1(produccion_sumarizar1 *pd)
{

}

QString ejecuta_visitor::visit_ini1(produccion_ini1 *pd)
{
    pd->pi->accept(this);
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_ini2(produccion_ini2 *pd)
{
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo1(produccion_lienzo1 *pd)
{
    QString nombre_lienzo=pd->iden;
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo2(produccion_lienzo2 *pd)
{
    QString visibilidad=pd->pv->accept(this);
    QString nombre_lienzo=pd->iden;
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo3(produccion_lienzo3 *pd)
{
    QString extiende=pd->pe->accept(this);
    QString nombre_lienzo=pd->iden;
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo4(produccion_lienzo4 *pd)
{
    QString visibilidad=pd->pv->accept(this);
    QString nombre_lienzo=pd->id;
    QString extiende = pd->pe->accept(this);
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo5(produccion_lienzo5 *pd)
{
    pd->pd->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo6(produccion_lienzo6 *pd)
{
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_visibilidad1(produccion_visibilidad1 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_visibilidad2(produccion_visibilidad2 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_visibilidad3(produccion_visibilidad3 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_extiende1(produccion_extiende1 *pd)
{
    return pd->pl->accept(this);
}

QString ejecuta_visitor::visit_lista_nombre1(produccion_lista_nombre1 *pd)
{
    return pd->pl->accept(this)+pd->iden->accept(this);
}

QString ejecuta_visitor::visit_lista_nombre2(produccion_lista_nombre2 *pd)
{
    return pd->iden->accept(this);
}

QString ejecuta_visitor::visit_lista_instrucciones1(produccion_lista_instrucciones1 *pd)
{
    pd->pl->accept(this);
    pd->pi->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lista_instrucciones2(produccion_lista_instrucciones2 *pd)
{
    pd->pi->accept(this);
    return "";
}

QString ejecuta_visitor::visit_declaracion_variable1(produccion_declaracion_variable1 *pd)
{
    QString tipo=pd->pt->accept(this);

    return"";
}

QString ejecuta_visitor::visit_declaracion_variable2(produccion_declaracion_variable2 *pd)
{
    return"";
}

QString ejecuta_visitor::visit_declaracion_variable3(produccion_declaracion_variable3 *pd)
{
    return"";
}

QString ejecuta_visitor::visit_declaracion_variable4(produccion_declaracion_variable4 *pd)
{
    return"";
}

QString ejecuta_visitor::visit_tipo1(produccion_tipo1 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo2(produccion_tipo2 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo3(produccion_tipo3 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo4(produccion_tipo4 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo5(produccion_tipo5 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_asignacion2(produccion_asignacion2 *pd)
{
    return pd->pe->accept(this);
}

QString ejecuta_visitor::visit_lista_asignacion1(produccion_lista_asignacion1 *pd)
{

}

QString ejecuta_visitor::visit_lista_asignacion2(produccion_lista_asignacion2 *pd)
{
    QString id=pd->iden;
    QString valor=pd->pe->accept(this);
    return"";
}

QString ejecuta_visitor::visit_lista_asignacion3(produccion_lista_asignacion3 *pd)
{

}

QString ejecuta_visitor::visit_lista_asignacion4(produccion_lista_asignacion4 *pd)
{

}

QString ejecuta_visitor::visit_asignacion1(produccion_asignacion1 *pd)
{

}

QString ejecuta_visitor::visit_instruccion1(produccion_instruccion1*pd)
{

}

QString ejecuta_visitor::visit_instruccion2(produccion_instruccion2*pd)
{

}

QString ejecuta_visitor::visit_instruccion3(produccion_instruccion3*pd)
{
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_instruccion4(produccion_instruccion4*pd)
{
    pd->pc->accept(this);
    return"";
}

QString ejecuta_visitor::visit_instruccion5(produccion_instruccion5*pd)
{
    pd->pp->accept(this);
    return"";
}

QString ejecuta_visitor::visit_instruccion6(produccion_instruccion6*pd)
{

}

QString ejecuta_visitor::visit_instruccion7(produccion_instruccion7*pd)
{

}

QString ejecuta_visitor::visit_instruccion8(produccion_instruccion8*pd)
{

}

QString ejecuta_visitor::visit_instruccion9(produccion_instruccion9*pd)
{

}

QString ejecuta_visitor::visit_instruccion10(produccion_instruccion10*pd)
{

}

QString ejecuta_visitor::visit_instruccion11(produccion_instruccion11*pd)
{

}

QString ejecuta_visitor::visit_instruccion12(produccion_instruccion12*pd)
{
    pd->pe->accept(this);
    return "";
}

QString ejecuta_visitor::visit_instruccion13(produccion_instruccion13*pd)
{
    pd->pp->accept(this);
    return "";
}

QString ejecuta_visitor::visit_expresion_igual(Expresion_igual *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1==exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_diferente(expresion_diferente *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1!=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_y(Expresion_y *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 && e2.compare("true")==0){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_nand(expresion_nand *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 && e2.compare("true")==0){
        return "false";
    }else{
        return "true";
    }
}

QString ejecuta_visitor::visit_expresion_or(expresion_or *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 || e2.compare("true")==0){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_xor(expresion_xor *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare(e2)==0){
        return "false";
    }else{
        return "true";
    }
}

QString ejecuta_visitor::visit_expresion_nor(expresion_nor *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("false")==0 && e2.compare("false")==0){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_mayor(expresion_mayor *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1>exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_mayorq(expresion_mayorq *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1>=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_menor(expresion_menor *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1<exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_menorq(expresion_menoq *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1<=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_not(expresion_not *e)
{
    QString e1=e->exp1->accept(this);
    if(e1.compare("true")==0){
        return "false";
    }else{
        return "true";
    }
}

QString ejecuta_visitor::visit_expresion_parentesis(expresion_parentesis *e)
{
    return e->exp1->accept(this);
}

QString ejecuta_visitor::visit_expresion_potencia(expresion_potencia *e)
{
    QString e1=e->exp1->accept(this);//base
    QString e2=e->exp2->accept(this);//potencia
    int tot=pow(QString(e1).toDouble(),QString(e2).toDouble());
    return QString::number(tot);
}

QString ejecuta_visitor::visit_expresion_mas(expresion_mas *e)
{
QString a=e->exp1->accept(this);
QString b=e->exp2->accept(this);
int tot = a.toInt()+b.toInt();
int val=0;
return QString::number(tot);
}

QString ejecuta_visitor::visit_expresion_menos(expresion_menos *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    int tot = a.toInt()-b.toInt();
    int val=0;
    return QString::number(tot);
}

QString ejecuta_visitor::visit_expresion_por(expresion_por *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    int tot = a.toInt()*b.toInt();
    int val=0;
    return QString::number(tot);
}

QString ejecuta_visitor::visit_expresion_divi(expresion_divi *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    int tot = a.toInt()/b.toInt();
    int val=0;
    return QString::number(tot);
}

QString ejecuta_visitor::visit_expresion_masmas(expresion_masmas *e)
{
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos y le sumo uno
    return "";
}

QString ejecuta_visitor::visit_expresion_menosmenos(expresion_menosmenos *e)
{
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos y le resto uno
    return "";
}

QString ejecuta_visitor::visit_expresion_masigual(expresion_masigual *e)
{
    QString id=e->pe1->accept(this);//obtengo el valor a sumarle al valor actual
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos
    return "";
}

QString ejecuta_visitor::visit_expresion_menosigual(expresion_menosigual *e)
{
    QString id=e->pe1->accept(this);//obtengo el valor a sumarle al valor actual
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos
    return "";
}

QString ejecuta_visitor::visit_expresion_numero(expresion_numero *e)
{
    return e->num;
}

QString ejecuta_visitor::visit_expresion_iden(expresion_iden *e)
{
    return e->iden->accept(this);
}

QString ejecuta_visitor::visit_expresion_caracter(expresion_caracter *e)
{
    return e->car;
}

QString ejecuta_visitor::visit_expresion_decimal(expresion_decimal *e)
{
    return e->dec;
}

QString ejecuta_visitor::visit_expresion_true(expresion_true *e)
{
    return e->tr;
}

QString ejecuta_visitor::visit_expresion_false(expresion_false *e)
{
    return e->fa;
}

QString ejecuta_visitor::visit_expresion_cadenacomillas(expresion_cadenacomillas *e)
{
    return e->cad;
}

QString ejecuta_visitor::visit_ciclos1(produccion_ciclos1 *pd)
{
    if (pd->pe->accept(this)=="true"){
        pd->l1->accept(this);
    }else{
        pd->l2->accept(this);
    }
}

QString ejecuta_visitor::visit_ciclos2(produccion_ciclos2 *pd)
{

}

QString ejecuta_visitor::visit_ciclos3(produccion_ciclos3 *pd)
{

}

QString ejecuta_visitor::visit_ciclos4(produccion_ciclos4 *pd)
{

}

QString ejecuta_visitor::visit_ciclos5(produccion_ciclos5 *pd)
{

}

QString ejecuta_visitor::visit_ciclos6(produccion_ciclos6 *pd)
{

}

QString ejecuta_visitor::visit_lista_case1(produccion_lista_case1 *pd)
{

}
QString ejecuta_visitor::visit_lista_case2(produccion_lista_case2 *pd)
{

}
QString ejecuta_visitor::visit_lista_case3(produccion_lista_case3 *pd)
{

}

QString ejecuta_visitor::visit_lista_parametros1(produccion_lista_parametros1 *pd)
{

}

QString ejecuta_visitor::visit_lista_parametros2(produccion_lista_parametros2 *pd)
{

}

QString ejecuta_visitor::visit_lista_parametros3(produccion_lista_parametros3 *pd)
{

}

QString ejecuta_visitor::visit_parametro1(produccion_parametro1 *pd)
{

}

QString ejecuta_visitor::visit_declaracion_metodo1(produccion_declaracion_metodo1 *pd)
{

}

QString ejecuta_visitor::visit_declaracion_metodo2(produccion_declaracion_metodo2 *pd)
{

}

QString ejecuta_visitor::visit_declaracion_metodo3(produccion_declaracion_metodo3 *pd)
{

}

QString ejecuta_visitor::visit_declaracion_metodo4(produccion_declaracion_metodo4 *pd)
{

}


//nuevo
 QString ejecuta_visitor::visit_lista_c1(produccion_lista_corchetes_1*pd){

}

 QString  ejecuta_visitor::visit_lista_c2(produccion_lista_corchete_2*pd){

}

 QString ejecuta_visitor::visit_declarador_1(produccion_declarador_1*pd){

}

 QString ejecuta_visitor::visit_declarador_2(produccion_declarador_2*pd){

}

QString ejecuta_visitor::visit_declaracion_variable5(produccion_declaracion_variable5*pd) {

}



QString ejecuta_visitor::visit_declaracion_variable6(produccion_declaracion_variable6*pd) {

}


