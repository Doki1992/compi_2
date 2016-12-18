#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QFile>
#include<QTextEdit>
#include"nodo.h"
#include "chequea_tipos_1.h"
#include"ejecuta_visitor.h"

extern int yyrestart( FILE* archivo);//METODO QUE PASA EL ARCHIVO A FLEX
extern int yyparse(); //METODO QUE INICIA EL ANALISIS SINTACTICO
extern void setSalida(QTextEdit* sal); //METODO CREADO EN EL ANALIZADOR SINTACTICO PARA COMUNICAR PRINCIPAL CON EL PARSER
extern nodo*getRaiz();
extern void setRaiz();
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    chequea_tipos_1 *types;
    ejecuta_visitor *exec;
    tabla_simbolos*ts;




private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
