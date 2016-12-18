#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ts = new tabla_simbolos();
    this->types = new chequea_tipos_1(ts);
    this->exec = new ejecuta_visitor(ts);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //setRaiz();
    ui->textEdit_2->setText("");//CUADRO DE TEXTO QUE MUESTRA LA SALIDA
    QFile file("temp.txt"); //SE CREA UN ARCHIVO TEMPORAL PARA COMPILARLO
    if ( file.open( file.WriteOnly ) ) { //BUFFER PARA EL TEXTO QUE SE DESEA COMPILAR
        QTextStream stream1( &file );
        stream1 << ui->textEdit->toPlainText();
    }
    const char* x = "temp.txt";
    FILE* input = fopen(x, "r" );
    yyrestart(input);//SE PASA LA CADENA DE ENTRADA A FLEX
    setSalida(ui->textEdit_2);//SE ASIGNA EL PUNTERO DE LA SALIDA PARA SER USADA POR BISON
    yyparse();//SE INICIA LA COMPILACION
    nodo*n=getRaiz();
    n->accept(types); //tabla de simbolos
    // ejecuta_visitor*eje=new ejecuta_visitor();
    //ejecuta_visitor2*eje2=new ejecuta_visitor2();
    //int v=n->accept(eje2);
    //QString val=n->accept(eje);
    int a=0;
//    int ds=tabla_simbolos_l->count();
    //  ui->textEdit_2->setText(QString::number(tabla_simbolos_l->count()));
    //ui->textEdit_2->setText(QString::number(val));
}
