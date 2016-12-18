#-------------------------------------------------
#
# Project created by QtCreator 2016-12-14T11:35:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proyecto1_201325560
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    scanner.cpp \
    parser.cpp \
    ejecuta_visitor.cpp \
    produccion_pintar_or1.cpp \
    produccion_pintar_p1.cpp \
    produccion_pintar_s1.cpp \
    produccion_principal1.cpp \
    produccion_ordenar1.cpp \
    produccion_sumarizar1.cpp \
    produccion_ini1.cpp \
    produccion_ini2.cpp \
    produccion_lienzo1.cpp \
    produccion_visibilidad1.cpp \
    produccion_visibilidad2.cpp \
    produccion_visibilidad3.cpp \
    produccion_lienzo2.cpp \
    produccion_lienzo3.cpp \
    produccion_lienzo4.cpp \
    produccion_lienzo5.cpp \
    produccion_lienzo6.cpp \
    produccion_extiende1.cpp \
    produccion_lista_nombre1.cpp \
    produccion_lista_nombre2.cpp \
    produccion_lista_instrucciones1.cpp \
    produccion_lista_instrucciones2.cpp \
    produccion_declaracion_variable1.cpp \
    produccion_declaracion_variable2.cpp \
    produccion_declaracion_variable3.cpp \
    produccion_declaracion_variable4.cpp \
    produccion_tipo1.cpp \
    produccion_tipo2.cpp \
    produccion_tipo3.cpp \
    produccion_tipo4.cpp \
    produccion_tipo5.cpp \
    produccion_asignacion1.cpp \
    produccion_asignacion2.cpp \
    produccion_lista_asignacion1.cpp \
    produccion_lista_asignacion2.cpp \
    produccion_lista_asignacion3.cpp \
    produccion_lista_asignacion4.cpp \
    produccion_instruccion1.cpp \
    produccion_instruccion2.cpp \
    produccion_instruccion3.cpp \
    produccion_instruccion4.cpp \
    produccion_instruccion5.cpp \
    produccion_instruccion6.cpp \
    produccion_instruccion7.cpp \
    produccion_instruccion8.cpp \
    produccion_instruccion9.cpp \
    produccion_instruccion10.cpp \
    produccion_instruccion11.cpp \
    produccion_instruccion12.cpp \
    produccion_instruccion13.cpp \
    produccion_ciclos1.cpp \
    produccion_ciclos2.cpp \
    produccion_ciclos3.cpp \
    produccion_ciclos4.cpp \
    produccion_ciclos5.cpp \
    produccion_ciclos6.cpp \
    produccion_lista_case1.cpp \
    produccion_lista_case2.cpp \
    produccion_lista_case3.cpp \
    produccion_lista_parametros1.cpp \
    produccion_lista_parametros2.cpp \
    produccion_lista_parametros3.cpp \
    produccion_parametro1.cpp \
    produccion_pintar_s11.cpp \
    produccion_declaracion_metodo1.cpp \
    produccion_declaracion_metodo2.cpp \
    produccion_declaracion_metodo3.cpp \
    produccion_declaracion_metodo4.cpp \
    expresion_diferente.cpp \
    expresion_divi.cpp \
    expresion_igual.cpp \
    expresion_mas.cpp \
    expresion_mayor.cpp \
    expresion_mayorq.cpp \
    expresion_menoq.cpp \
    expresion_menor.cpp \
    expresion_menos.cpp \
    expresion_nand.cpp \
    expresion_nor.cpp \
    expresion_not.cpp \
    expresion_or.cpp \
    expresion_parentesis.cpp \
    expresion_por.cpp \
    expresion_potencia.cpp \
    expresion_xor.cpp \
    expresion_y.cpp \
    expresion_masmas.cpp \
    expresion_menosmenos.cpp \
    expresion_menosigual.cpp \
    expresion_masigual.cpp \
    expresion_numero.cpp \
    expresion_iden.cpp \
    expresion_decimal.cpp \
    expresion_cadenacomillas.cpp \
    expresion_caracter.cpp \
    expresion_true.cpp \
    expresion_false.cpp \
    lienzo.cpp \
    declaracion_metodo.cpp \
    variable.cpp \
    tabla_simbolos.cpp \
    produccion_lista_corchetes_1.cpp \
    produccion_lista_corchete_2.cpp \
    produccion_declarador_1.cpp \
    produccion_declarador_2.cpp \
    produccion_declaracion_variable5.cpp \
    produccion_declaracion_variable6.cpp \
    chequea_tipos_1.cpp \
    verifica_tipos.cpp

HEADERS  += mainwindow.h \
    lexico.l \
    scanner.h \
    parser.h \
    nodo.h \
    visitor.h \
    ejecuta_visitor.h \
    produccion_pintar_p.h \
    produccion_pintar_or.h \
    produccion_pintar_s.h \
    produccion_pintar_or1.h \
    produccion_pintar_p1.h \
    produccion_pintar_s1.h \
    produccion_principal.h \
    produccion_ordenar.h \
    produccion_sumarizar.h \
    produccion_principal1.h \
    produccion_ordenar1.h \
    produccion_sumarizar1.h \
    produccion_ini.h \
    produccion_ini1.h \
    produccion_lienzo.h \
    produccion_ini2.h \
    produccion_lienzo1.h \
    produccion_lista_instrucciones.h \
    produccion_visibilidad.h \
    produccion_visibilidad1.h \
    produccion_visibilidad2.h \
    produccion_visibilidad3.h \
    produccion_lienzo2.h \
    produccion_lienzo3.h \
    produccion_lienzo4.h \
    produccion_lienzo5.h \
    produccion_lienzo6.h \
    produccion_extiende.h \
    produccion_declaracion_variable.h \
    produccion_lista_asignacion.h \
    produccion_extiende1.h \
    produccion_lista_nombre.h \
    produccion_lista_nombre1.h \
    produccion_lista_nombre2.h \
    produccion_lista_instrucciones1.h \
    produccion_lista_instrucciones2.h \
    produccion_instruccion.h \
    produccion_declaracion_variable1.h \
    produccion_declaracion_variable2.h \
    produccion_declaracion_variable3.h \
    produccion_declaracion_variable4.h \
    produccion_tipo.h \
    produccion_asignacion.h \
    produccion_tipo1.h \
    produccion_tipo2.h \
    produccion_tipo3.h \
    produccion_tipo4.h \
    produccion_tipo5.h \
    produccion_asignacion1.h \
    produccion_asignacion2.h \
    produccion_expresion.h \
    produccion_lista_asignacion1.h \
    produccion_lista_asignacion2.h \
    produccion_lista_asignacion3.h \
    produccion_lista_asignacion4.h \
    produccion_instruccion1.h \
    produccion_instruccion2.h \
    produccion_instruccion3.h \
    produccion_instruccion4.h \
    produccion_instruccion5.h \
    produccion_instruccion6.h \
    produccion_instruccion7.h \
    produccion_instruccion8.h \
    produccion_instruccion9.h \
    produccion_instruccion10.h \
    produccion_instruccion11.h \
    produccion_instruccion12.h \
    produccion_instruccion13.h \
    produccion_declaracion_metodo.h \
    produccion_ciclos.h \
    produccion_ciclos1.h \
    produccion_ciclos2.h \
    produccion_ciclos3.h \
    produccion_ciclos4.h \
    produccion_ciclos5.h \
    produccion_ciclos6.h \
    produccion_lista_case.h \
    produccion_lista_case1.h \
    produccion_lista_case2.h \
    produccion_lista_case3.h \
    produccion_lista_parametros.h \
    produccion_lista_parametros1.h \
    produccion_lista_parametros2.h \
    produccion_lista_parametros3.h \
    produccion_parametro.h \
    produccion_parametro1.h \
    produccion_pintar_s11.h \
    produccion_declaracion_metodo1.h \
    produccion_declaracion_metodo2.h \
    produccion_declaracion_metodo3.h \
    produccion_declaracion_metodo4.h \
    expresion_diferente.h \
    expresion_divi.h \
    expresion_igual.h \
    expresion_mas.h \
    expresion_mayor.h \
    expresion_mayorq.h \
    expresion_menoq.h \
    expresion_menor.h \
    expresion_menos.h \
    expresion_nand.h \
    expresion_nor.h \
    expresion_not.h \
    expresion_or.h \
    expresion_parentesis.h \
    expresion_por.h \
    expresion_potencia.h \
    expresion_xor.h \
    expresion_y.h \
    expresion_masmas.h \
    expresion_menosmenos.h \
    expresion_menosigual.h \
    expresion_masigual.h \
    expresion_numero.h \
    expresion_iden.h \
    expresion_decimal.h \
    expresion_cadenacomillas.h \
    expresion_caracter.h \
    expresion_true.h \
    expresion_false.h \
    simbolo.h \
    lienzo.h \
    declaracion_metodo.h \
    variable.h \
    tabla_simbolos.h \
    lista_corchetes.h \
    declarador.h \
    produccion_lista_corchete_2.h \
    produccion_lista_corchetes_1.h \
    produccion_declarador_1.h \
    produccion_declarador_2.h \
    produccion_declaracion_variable5.h \
    produccion_declaracion_variable6.h \
    chequea_tipos_1.h \
    verifica_tipos.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    sintactico.y
