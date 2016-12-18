/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


#include "scanner.h"//se importa el header del analisis sintactico
#include <iostream> //libreria para imprimir en cosola de C
#include <QString> //libreria para manejo de STRINGS de QT
#include <QHash> //Libreria para manejar HASH TABLES de QT, se usa para la tabla de simbolos
//#include "tablas.h" //clase que contiene los valores de la tabla de simbolos
#include "stdio.h"
#include <QTextEdit> //libreria QTextEdit de QT para poder mostrar el resultado en pantalla
#include "string.h"

//----------------------------------INCLUSION DE HEADERS DE LAS CLASES-----------------------------
#include "expresion_diferente.h"
#include "expresion_y.h"
#include "expresion_epsilon.h"
#include "expresion_igual.h"
#include "expresion_or.h"
#include "expresion_por.h"
#include "expresion_por.h"
#include "produccion_declaracion_variable5.h"
#include "produccion_declaracion_variable7.h"
#include "produccion_declaracion_variable_8.h"
#include "expresion_mas.h"
#include "expresion_masmas.h"
#include "expresion_menosmenos.h"
#include "expresion_masigual.h"
#include "expresion_menosigual.h"
#include "expresion_menos.h"
#include "expresion_nor.h"
#include "expresion_mayor.h"
#include "produccion_lista_corchetes_1.h"
#include "produccion_lista_corchete_2.h"
#include "produccion_declarador_1.h"
#include "produccion_declarador_2.h"
#include "expresion_numero.h"
#include "expresion_iden.h"
#include "expresion_decimal.h"
#include "expresion_caracter.h"
#include "expresion_cadenacomillas.h"
#include "expresion_true.h"
#include "expresion_false.h"
#include "expresion_divi.h"

#include "expresion_parentesis.h"
#include "expresion_potencia.h"
#include "expresion_mayorq.h"
#include "expresion_menor.h"
#include "expresion_menoq.h"
#include "expresion_not.h"
#include "expresion_xor.h"
#include "expresion_nand.h"
#include"produccion_ordenar1.h"
#include"produccion_sumarizar1.h"
#include"produccion_principal1.h"
#include"produccion_pintar_or1.h"
#include"produccion_pintar_p1.h"
#include"produccion_pintar_s11.h"
#include"produccion_ini1.h"
#include"produccion_ini2.h"
#include"produccion_lienzo1.h"
#include"produccion_lienzo2.h"
#include"produccion_lienzo3.h"
#include"produccion_lienzo4.h"
#include"produccion_lienzo5.h"
#include"produccion_lienzo6.h"
#include"produccion_visibilidad1.h"
#include"produccion_visibilidad2.h"
#include"produccion_visibilidad3.h"
#include"produccion_extiende1.h"
#include"produccion_lista_nombre1.h"
#include"produccion_lista_nombre2.h"
#include"produccion_lista_instrucciones1.h"
#include"produccion_lista_instrucciones2.h"
#include"produccion_declaracion_variable1.h"
#include"produccion_declaracion_variable2.h"
#include"produccion_declaracion_variable3.h"
#include"produccion_declaracion_variable4.h"
#include"produccion_declaracion_variable6.h"
#include"produccion_tipo1.h"
#include"produccion_tipo2.h"
#include"produccion_tipo3.h"
#include"produccion_tipo4.h"
#include"produccion_tipo5.h"
#include"produccion_asignacion1.h"
#include"produccion_asignacion2.h"
#include"produccion_lista_asignacion1.h"
#include"produccion_lista_asignacion2.h"
#include"produccion_lista_asignacion3.h"
#include"produccion_lista_asignacion4.h"
#include"produccion_instruccion1.h"
#include"produccion_instruccion2.h"
#include"produccion_instruccion3.h"
#include"produccion_instruccion4.h"
#include"produccion_instruccion5.h"
#include"produccion_instruccion6.h"
#include"produccion_instruccion7.h"
#include"produccion_instruccion8.h"
#include"produccion_instruccion9.h"
#include"produccion_instruccion10.h"
#include"produccion_instruccion11.h"
#include"produccion_instruccion12.h"
#include"produccion_instruccion13.h"
#include"produccion_ciclos1.h"
#include"produccion_ciclos2.h"
#include"produccion_ciclos3.h"
#include"produccion_ciclos4.h"
#include"produccion_ciclos5.h"
#include"produccion_ciclos6.h"
#include"produccion_lista_case1.h"
#include"produccion_lista_case2.h"
#include"produccion_lista_case3.h"
#include"produccion_lista_parametros1.h"
#include"produccion_lista_parametros2.h"
#include"produccion_lista_parametros3.h"
#include"produccion_parametro1.h"
#include"produccion_declaracion_metodo1.h"
#include"produccion_declaracion_metodo2.h"
#include"produccion_declaracion_metodo3.h"
#include"produccion_declaracion_metodo4.h"
//---------------------------FIN DE INCLUSION DE HEADERS---------------------------------
//----------------------------INCLUIR LAS CLASES PADRES---------------------------------




//----------------------------FIN INCLUSION DE CLASES PADRES-------------------------------

extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
nodo *raiz;
int yyerror(const char* mens){
//metodo que se llama al haber un error sintactico
//SE IMPRIME EN CONSOLA EL ERROR
std::cout <<mens<<" "<<yytext<< std::endl;
return 0;
}

QTextEdit* salida; //puntero al QTextEdit de salida
void setSalida(QTextEdit* sal) {
//metodo que asigna el valor al QTextEdit de salida
salida=sal;
}
nodo *getRaiz(){
return raiz;
}
void setRaiz(){
raiz=NULL;
}
//QHash <QString, tablas*> tabla_s; //TABLA DE SIMBOLOS
QString tipo_variable="";
struct Operador{
//ESTRUCTURA LA CUAL CONTENDRA LOS TIPOS DE LOS NO TERMINALES PARA HEREDAR VALORES
QString  texto;
int valor;
};




# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    numero = 258,
    decimal = 259,
    cadenacomillas = 260,
    caracter = 261,
    iden = 262,
    dosp = 263,
    pcoma = 264,
    coma = 265,
    igual = 266,
    Not = 267,
    mas = 268,
    menos = 269,
    por = 270,
    divi = 271,
    aparen = 272,
    cparen = 273,
    acorch = 274,
    ccorch = 275,
    allave = 276,
    cllave = 277,
    potencia = 278,
    menor = 279,
    mayor = 280,
    menorq = 281,
    mayorq = 282,
    esnulo = 283,
    diferente = 284,
    igualigual = 285,
    masigual = 286,
    menosigual = 287,
    masmas = 288,
    menosmenos = 289,
    Or = 290,
    And = 291,
    Nand = 292,
    Nor = 293,
    Xor = 294,
    cierra_lienzo = 295,
    abre_lienzo = 296,
    fin_sentencia = 297,
    doble = 298,
    boolean = 299,
    Char = 300,
    cadena = 301,
    entero = 302,
    TRUE = 303,
    FALSE = 304,
    lienzo = 305,
    arreglo = 306,
    extiende = 307,
    publico = 308,
    privado = 309,
    protegido = 310,
    var = 311,
    conservar = 312,
    defecto = 313,
    si = 314,
    sino = 315,
    comprobar = 316,
    caso = 317,
    para = 318,
    mientras = 319,
    hacer = 320,
    continuar = 321,
    salir = 322,
    pintarp = 323,
    pintaror = 324,
    pintars = 325,
    retorna = 326,
    principal = 327,
    ordenar = 328,
    sumarizar = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{


//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Operador * VAL;
produccion_ini*pi;
produccion_lienzo*pl;
produccion_visibilidad*pv;
produccion_lista_instrucciones*pli;
produccion_extiende*pe;
produccion_declaracion_variable*pdv;
produccion_lista_asignacion*pla;
produccion_instruccion*pins;
produccion_tipo*pt;
produccion_asignacion*pa;
produccion_expresion*pexp;
produccion_ciclos*pc;
produccion_lista_case*plc;
produccion_declaracion_metodo*pdm;
produccion_lista_parametros*plp;
produccion_parametro*pp;
produccion_ordenar*po;
produccion_sumarizar*ps;
produccion_principal*prin;
produccion_pintar_p*pintar;
produccion_pintar_or*por;
produccion_lista_nombre*pln;
declarador *dec;
lista_corchetes*lc;


};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1688

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   308,   308,   310,   311,   313,   314,   315,   316,   317,
     318,   322,   323,   324,   326,   328,   329,   331,   332,   334,
     335,   337,   338,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   356,   357,   358,   359,
     360,   361,   362,   363,   365,   366,   367,   368,   369,   371,
     372,   374,   375,   376,   377,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   410,   411,   412,   413,   414,
     415,   417,   418,   419,   421,   422,   423,   424,   426,   427,
     428,   430,   432,   433,   434,   436,   437,   438
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "numero", "decimal", "cadenacomillas",
  "caracter", "iden", "dosp", "pcoma", "coma", "igual", "Not", "mas",
  "menos", "por", "divi", "aparen", "cparen", "acorch", "ccorch", "allave",
  "cllave", "potencia", "menor", "mayor", "menorq", "mayorq", "esnulo",
  "diferente", "igualigual", "masigual", "menosigual", "masmas",
  "menosmenos", "Or", "And", "Nand", "Nor", "Xor", "cierra_lienzo",
  "abre_lienzo", "fin_sentencia", "doble", "boolean", "Char", "cadena",
  "entero", "TRUE", "FALSE", "lienzo", "arreglo", "extiende", "publico",
  "privado", "protegido", "var", "conservar", "defecto", "si", "sino",
  "comprobar", "caso", "para", "mientras", "hacer", "continuar", "salir",
  "pintarp", "pintaror", "pintars", "retorna", "principal", "ordenar",
  "sumarizar", "$accept", "START", "INI", "LIENZO", "VISIBILIDAD",
  "EXTIENDE", "LISTA_NOMBRE", "DECLARADOR", "LISTA_CORCHETES",
  "LISTA_INSTRUCCIONES", "INSTRUCCION", "DECLARACION_VARIABLE", "TIPO",
  "ASIGNACION", "LISTA_ASIGNACION", "EXPRESION", "CICLOS", "LISTA_CASE",
  "DECLARACION_METODO", "LISTA_PARAMETROS", "PARAMETRO", "PINTAR_P",
  "PINTAR_OR", "PINTAR_S", "PRINCIPAL", "ORDENAR", "SUMARIZAR", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -102

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    60,     6,  -102,  -102,  -102,    95,   -28,    33,    10,
    -102,     4,  -102,    51,    20,    20,    20,   -23,  -102,  -102,
    -102,  -102,  -102,     2,    95,  -102,  -102,    74,    76,  -102,
    -102,  -102,  -102,    67,    20,    20,  -102,  -102,  -102,  1602,
    1602,  1602,   848,   112,    73,   112,     5,  -102,    31,    44,
      88,    20,   104,   390,  1332,    20,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    20,    20,  -102,  -102,
      20,    20,    20,    20,    20,    79,    32,   111,   113,   117,
     118,   116,    94,   101,   135,   137,   141,    20,   142,   143,
     144,   154,   320,  -102,   128,   112,    -8,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,   119,   848,     5,   112,    20,
    -102,   112,     5,   848,   134,    20,  1359,    20,  -102,    92,
      92,    -9,    -9,   146,   132,   132,   132,   132,  1654,  1602,
      92,    92,  1629,   390,   390,  1629,  1629,   156,   112,    20,
      20,   170,    20,   848,  -102,  -102,    20,    20,    20,  1005,
     131,   171,   172,    95,  -102,  -102,  -102,   163,  -102,   388,
    -102,  -102,  1035,     5,  -102,   429,   848,  1602,  -102,  1386,
      95,   164,  1413,  1440,   107,  1467,   464,  1065,  1095,  1125,
    -102,   148,   174,   173,   112,    83,  -102,    95,  -102,   170,
    -102,  -102,   499,  -102,    87,    95,   149,   155,    20,   157,
     130,    20,    20,    20,   848,   177,   158,  -102,    95,   160,
     102,    51,  -102,   161,   103,   848,   -27,   978,   848,   178,
    1155,  1185,  1215,   534,   179,  -102,  -102,   848,   162,   848,
     166,   569,   197,    20,   -32,   170,   604,    20,   203,   204,
      20,  -102,   168,   639,   848,   674,   848,   151,   848,   915,
    -102,    20,   108,  -102,  1494,   202,   205,  1245,  -102,  -102,
     709,  -102,   744,   175,   848,   848,   947,   180,   182,    20,
      20,    20,  -102,  -102,   848,   848,   848,   848,  -102,  1521,
    1275,  1548,   779,   848,   814,   186,    20,   187,  -102,  -102,
    -102,  1305,  -102,    20,  1575,   188,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,    12,    13,     0,     0,     0,     2,
       4,     0,     9,    10,    84,    84,    84,     0,    48,    44,
      47,    46,    45,     0,     0,     1,     3,     0,     0,    77,
      79,    80,    81,    17,    84,    84,    82,    83,    78,    52,
      53,    54,     0,     0,     0,     0,    38,    16,     0,     0,
       0,    84,    18,    66,     0,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    73,    74,
      84,    84,    84,    84,    84,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,    22,     0,     0,     0,    26,    24,    28,
      27,    29,    35,    31,    30,    14,     0,    41,     0,    84,
      39,     0,    36,     0,     0,    84,     0,    84,    67,    69,
      70,    71,    72,    68,    63,    62,    65,    64,    56,    55,
      75,    76,    59,    57,    58,    61,    60,     0,     0,    84,
      84,     0,    84,     0,    32,    33,    84,    84,    84,     0,
       0,     0,     0,   100,     5,    21,    23,     0,    25,     0,
      40,    15,    50,    43,    37,     0,     0,    51,    20,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,    99,   100,     7,     0,
      42,     6,     0,    19,     0,   100,     0,     0,    84,     0,
       0,    84,    84,    84,     0,     0,     0,   101,     0,     0,
       0,    49,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,    98,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,    84,     0,     0,
      84,   105,     0,     0,     0,     0,     0,    86,     0,     0,
      90,    84,     0,    87,     0,     0,     0,     0,   106,    97,
       0,    96,     0,     0,    93,     0,     0,     0,     0,    84,
      84,    84,    95,    94,     0,    92,     0,     0,    89,     0,
       0,     0,     0,    91,     0,     0,    84,     0,    85,    88,
     102,     0,   104,    84,     0,     0,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,   210,  -102,   165,   -38,    61,  -102,   153,
      58,    80,    -2,  -101,     3,   -15,  -102,  -102,  -102,  -100,
      23,  -102,  -102,  -102,  -102,  -102,  -102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    44,    46,    38,    52,    92,
      93,    94,    95,   110,    96,    39,    97,   234,    98,   185,
     186,    99,   100,   101,   102,   103,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      40,    41,    28,    13,    23,   105,   160,   107,   250,    33,
     112,   164,    13,    17,    59,   108,   109,     1,    42,    53,
      54,    65,    48,    29,    30,    31,    32,    33,    24,    43,
     251,   232,    34,    25,   158,   233,   116,    35,    33,    33,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    45,    27,   132,   133,   134,   135,   136,
       2,    28,   190,     3,     4,     5,     6,     7,    36,    37,
     194,    14,   149,   163,   138,    18,    19,    20,    21,    22,
      12,    49,   111,    50,    47,   113,    51,   210,    24,    12,
      14,    15,    16,   208,   162,   214,    43,   208,    51,   115,
     167,   209,   169,    91,    47,   213,    47,    57,    58,    47,
      15,    16,   208,   208,   106,    59,   198,    28,    28,    33,
     228,   230,    65,   117,   172,   173,   267,   175,   139,   108,
     140,   177,   178,   179,   141,   142,   144,   137,    18,    19,
      20,    21,    22,   145,   174,    55,    56,    57,    58,   181,
     155,   184,   146,    91,   147,    59,   157,   143,   148,   150,
     151,   152,    65,    66,    67,    68,    69,    91,   184,   161,
     156,   153,    47,   170,    91,   166,    65,     1,   182,   183,
     187,   195,   224,   217,   205,   184,   220,   221,   222,   204,
     215,   206,   211,   184,   219,   237,   216,   242,   218,   171,
     225,   227,   229,   244,    91,   248,   184,   246,   255,   256,
     258,   263,   269,     0,   114,   270,   274,   155,   249,    26,
      91,   277,   254,   155,   278,   257,    91,    91,   290,   292,
     296,   226,     0,     0,   155,     0,   266,    91,   252,     0,
       0,     0,     0,     0,     0,   207,     0,     0,     0,     0,
     155,     0,     0,    91,   279,   280,   281,     0,     0,   159,
       0,     0,     0,     0,     0,    91,   165,     0,     0,     0,
       0,   291,     0,     0,     0,     0,    91,     0,   294,    91,
       0,   155,     0,     0,    91,     0,     0,     0,    91,   155,
      91,     0,    91,     0,   155,     0,   176,    91,     0,     0,
       0,   155,     0,   155,    91,    91,    91,    91,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   192,
     155,    91,   155,    91,     0,    91,    91,    75,     0,     0,
       0,     0,     0,   155,     0,    91,    91,    91,    91,     0,
     155,   155,   155,    91,    91,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
     154,     0,     0,    18,    19,    20,    21,    22,   231,     0,
       0,   236,     0,     0,     0,     0,     6,    76,     0,    77,
     243,    78,   245,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    75,     0,   260,     0,   262,
       0,   264,     0,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,   275,    64,
      65,    66,    67,    68,    69,     0,     0,   282,   188,   283,
     284,    18,    19,    20,    21,    22,    75,     0,     0,     0,
       0,     0,     0,     0,     6,    76,     0,    77,     0,    78,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,   191,
       0,    75,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    76,     0,    77,     0,
      78,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   200,     0,    75,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    76,     0,    77,     0,    78,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   212,
       0,    75,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    76,     0,    77,     0,
      78,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   241,     0,    75,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    76,     0,    77,     0,    78,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   247,
       0,    75,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    76,     0,    77,     0,
      78,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   253,     0,    75,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    76,     0,    77,     0,    78,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   259,
       0,    75,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    76,     0,    77,     0,
      78,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   261,     0,    75,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    76,     0,    77,     0,    78,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   272,
       0,    75,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    76,     0,    77,     0,
      78,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   273,     0,    75,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    76,     0,    77,     0,    78,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   288,
       0,    75,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    76,     0,    77,     0,
      78,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,   289,    75,     0,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    76,     0,    77,     0,    78,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    76,     0,    77,     0,    78,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   265,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   276,     0,     0,     0,     0,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,   235,     0,     0,
       0,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   189,     0,   180,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   201,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   202,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   203,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   238,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   239,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   240,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   271,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   286,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   293,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    55,    56,    57,    58,     0,
     118,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    55,    56,    57,    58,     0,     0,     0,   168,
       0,     0,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    55,
      56,    57,    58,     0,     0,     0,   193,     0,     0,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    55,    56,    57,    58,
       0,   196,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    55,    56,    57,    58,     0,   197,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      55,    56,    57,    58,     0,   199,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    55,    56,    57,
      58,     0,   268,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    55,    56,    57,    58,     0,   285,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    55,    56,    57,    58,     0,   287,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    55,    56,
      57,    58,     0,   295,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,     0,    71,    72,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69
};

static const yytype_int16 yycheck[] =
{
      15,    16,    10,     0,     6,    43,   107,    45,    40,     7,
      48,   112,     9,     7,    23,    10,    11,     7,    41,    34,
      35,    30,    24,     3,     4,     5,     6,     7,    56,    52,
      62,    58,    12,     0,    42,    62,    51,    17,     7,     7,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    51,    50,    70,    71,    72,    73,    74,
      50,    10,   163,    53,    54,    55,    56,    57,    48,    49,
     170,    11,    87,   111,    76,    43,    44,    45,    46,    47,
       0,     7,    51,     7,    23,    41,    19,   187,    56,     9,
      11,    31,    32,    10,   109,   195,    52,    10,    19,    11,
     115,    18,   117,    42,    43,    18,    45,    15,    16,    48,
      31,    32,    10,    10,    41,    23,     9,    10,    10,     7,
      18,    18,    30,    19,   139,   140,    18,   142,    17,    10,
      17,   146,   147,   148,    17,    17,    42,    76,    43,    44,
      45,    46,    47,    42,   141,    13,    14,    15,    16,    18,
      92,   153,    17,    92,    17,    23,    95,    41,    17,    17,
      17,    17,    30,    31,    32,    33,    34,   106,   170,   108,
      42,    17,   111,    17,   113,    41,    30,     7,     7,     7,
      17,    17,     5,   198,    10,   187,   201,   202,   203,    41,
      41,    18,   189,   195,    64,    17,    41,    18,    41,   138,
      42,    41,    41,    41,   143,     8,   208,    41,     5,     5,
      42,    60,    10,    -1,    49,    10,    41,   159,   233,     9,
     159,    41,   237,   165,    42,   240,   165,   166,    42,    42,
      42,   208,    -1,    -1,   176,    -1,   251,   176,   235,    -1,
      -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,
     192,    -1,    -1,   192,   269,   270,   271,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   204,   113,    -1,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,   215,    -1,   293,   218,
      -1,   223,    -1,    -1,   223,    -1,    -1,    -1,   227,   231,
     229,    -1,   231,    -1,   236,    -1,   143,   236,    -1,    -1,
      -1,   243,    -1,   245,   243,   244,   245,   246,    -1,   248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,   166,
     262,   260,   264,   262,    -1,   264,   265,     7,    -1,    -1,
      -1,    -1,    -1,   275,    -1,   274,   275,   276,   277,    -1,
     282,   283,   284,   282,   283,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
      40,    -1,    -1,    43,    44,    45,    46,    47,   215,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,
     227,    61,   229,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     7,    -1,   244,    -1,   246,
      -1,   248,    -1,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,   265,    29,
      30,    31,    32,    33,    34,    -1,    -1,   274,    40,   276,
     277,    43,    44,    45,    46,    47,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,     7,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    40,    -1,     7,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    40,
      -1,     7,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    40,    -1,     7,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    40,
      -1,     7,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    40,    -1,     7,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    40,
      -1,     7,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    40,    -1,     7,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    40,
      -1,     7,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    40,    -1,     7,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    40,
      -1,     7,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    40,     7,    -1,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     9,    -1,    -1,
      -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    42,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    13,    14,    15,    16,
      -1,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    13,    14,    15,
      16,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    13,    14,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    13,    14,    15,    16,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    13,    14,
      15,    16,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    50,    53,    54,    55,    56,    57,    76,    77,
      78,    79,    86,    89,    11,    31,    32,     7,    43,    44,
      45,    46,    47,    87,    56,     0,    78,    50,    10,     3,
       4,     5,     6,     7,    12,    17,    48,    49,    82,    90,
      90,    90,    41,    52,    80,    51,    81,    82,    87,     7,
       7,    19,    83,    90,    90,    13,    14,    15,    16,    23,
      24,    25,    26,    27,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     7,    57,    59,    61,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    82,    84,    85,    86,    87,    89,    91,    93,    96,
      97,    98,    99,   100,   101,    81,    41,    81,    10,    11,
      88,    51,    81,    41,    80,    11,    90,    19,    18,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    82,    87,    17,
      17,    17,    17,    41,    42,    42,    17,    17,    17,    90,
      17,    17,    17,    17,    40,    85,    42,    82,    42,    84,
      88,    82,    90,    81,    88,    84,    41,    90,    20,    90,
      17,    82,    90,    90,    89,    90,    84,    90,    90,    90,
      42,    18,     7,     7,    87,    94,    95,    17,    40,    10,
      88,    40,    84,    20,    94,    17,    18,    18,     9,    18,
      40,    10,    10,    10,    41,    10,    18,    82,    10,    18,
      94,    89,    40,    18,    94,    41,    41,    90,    41,    64,
      90,    90,    90,    84,     5,    42,    95,    41,    18,    41,
      18,    84,    58,    62,    92,     9,    84,    17,    10,    10,
      10,    40,    18,    84,    41,    84,    41,    40,     8,    90,
      40,    62,    89,    40,    90,     5,     5,    90,    42,    40,
      84,    40,    84,    60,    84,     8,    90,    18,    18,    10,
      10,    10,    40,    40,    41,    84,     8,    41,    42,    90,
      90,    90,    84,    84,    84,    18,    10,    18,    40,    40,
      42,    90,    42,    10,    90,    18,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    95,    96,    97,    98,    99,   100,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     6,     6,     7,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     2,     4,
       3,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     4,     5,     3,     4,
       5,     4,     6,     5,     1,     1,     1,     1,     1,     4,
       2,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     0,    11,     7,     7,    11,     9,
       7,     5,     4,     3,     9,     8,     8,     7,     3,     1,
       0,     2,    11,    15,    11,     6,     7,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    {raiz=(yyvsp[0].pi);}

    break;

  case 3:

    {(yyval.pi)=new produccion_ini1((yyvsp[-1].pi),(yyvsp[0].pl));}

    break;

  case 4:

    {(yyval.pi)=new produccion_ini2((yyvsp[0].pl));}

    break;

  case 5:

    {(yyval.pl)=new produccion_lienzo1((yyvsp[-3].TEXT),(yyvsp[-1].pli));}

    break;

  case 6:

    {(yyval.pl)=new produccion_lienzo2((yyvsp[-5].pv),(yyvsp[-3].TEXT),(yyvsp[-1].pli));}

    break;

  case 7:

    {(yyval.pl)=new produccion_lienzo3((yyvsp[-4].TEXT),(yyvsp[-3].pe),(yyvsp[-1].pli));}

    break;

  case 8:

    {(yyval.pl)=new produccion_lienzo4((yyvsp[-6].pv),(yyvsp[-4].TEXT),(yyvsp[-3].pe),(yyvsp[-1].pli));}

    break;

  case 9:

    {(yyval.pl)=new produccion_lienzo5((yyvsp[0].pdv));}

    break;

  case 10:

    {(yyval.pl)=new produccion_lienzo6((yyvsp[0].pla));}

    break;

  case 11:

    {(yyval.pv)=new produccion_visibilidad1((yyvsp[0].TEXT));}

    break;

  case 12:

    {(yyval.pv)=new produccion_visibilidad2((yyvsp[0].TEXT));}

    break;

  case 13:

    {(yyval.pv)=new produccion_visibilidad3((yyvsp[0].TEXT));}

    break;

  case 14:

    {(yyval.pe)=new produccion_extiende1((yyvsp[0].pln));}

    break;

  case 15:

    {(yyval.pln)=new produccion_lista_nombre1((yyvsp[-2].pln),(yyvsp[0].dec));}

    break;

  case 16:

    {(yyval.pln)=new produccion_lista_nombre2((yyvsp[0].dec));}

    break;

  case 17:

    {(yyval.dec) = new produccion_declarador_1((yyvsp[0].TEXT));}

    break;

  case 18:

    {(yyval.dec) = new produccion_declarador_2((yyvsp[-1].TEXT), (yyvsp[0].lc));}

    break;

  case 19:

    {(yyval.lc)= new produccion_lista_corchetes_1((yyvsp[-3].lc),(yyvsp[-1].pexp));}

    break;

  case 20:

    {(yyval.lc)= new produccion_lista_corchete_2((yyvsp[-1].pexp));}

    break;

  case 21:

    {(yyval.pli)=new produccion_lista_instrucciones1((yyvsp[-1].pli),(yyvsp[0].pins));}

    break;

  case 22:

    {(yyval.pli)=new produccion_lista_instrucciones2((yyvsp[0].pins));}

    break;

  case 23:

    {(yyval.pins)=new produccion_instruccion1((yyvsp[-1].pdv));}

    break;

  case 24:

    {(yyval.pins)=new produccion_instruccion2((yyvsp[0].pdm));}

    break;

  case 25:

    {(yyval.pins)=new produccion_instruccion3((yyvsp[-1].pla));}

    break;

  case 26:

    {(yyval.pins)=new produccion_instruccion4((yyvsp[0].pc));}

    break;

  case 27:

    {(yyval.pins)=new produccion_instruccion5((yyvsp[0].por));}

    break;

  case 28:

    {(yyval.pins)=new produccion_instruccion6((yyvsp[0].pintar));}

    break;

  case 29:

    {}

    break;

  case 30:

    {(yyval.pins)=new produccion_instruccion8((yyvsp[0].ps));}

    break;

  case 31:

    {(yyval.pins)=new produccion_instruccion9((yyvsp[0].po));}

    break;

  case 32:

    {(yyval.pins)=new produccion_instruccion10((yyvsp[-1].TEXT));}

    break;

  case 33:

    {(yyval.pins)=new produccion_instruccion11((yyvsp[-1].TEXT));}

    break;

  case 34:

    {(yyval.pins)=new produccion_instruccion12((yyvsp[-1].pexp));}

    break;

  case 35:

    {(yyval.pins)=new produccion_instruccion13((yyvsp[0].prin));}

    break;

  case 36:

    {(yyval.pdv)=new produccion_declaracion_variable1((yyvsp[-1].pt),(yyvsp[0].pln));}

    break;

  case 37:

    {(yyval.pdv)=new produccion_declaracion_variable2((yyvsp[-2].pt),(yyvsp[-1].pln),(yyvsp[0].pa));}

    break;

  case 38:

    {(yyval.pdv)=new produccion_declaracion_variable3((yyvsp[-1].pt),(yyvsp[0].pln));}

    break;

  case 39:

    {(yyval.pdv)=new produccion_declaracion_variable4((yyvsp[-2].pt),(yyvsp[-1].pln),(yyvsp[0].pa));}

    break;

  case 40:

    {(yyval.pdv)=new produccion_declaracion_variable5((yyvsp[-3].pt),(yyvsp[-1].pln),(yyvsp[0].pa));}

    break;

  case 41:

    {(yyval.pdv)=new produccion_declaracion_variable6((yyvsp[-2].pt),(yyvsp[0].pln));}

    break;

  case 42:

    {(yyval.pdv)=new produccion_declaracion_variable7((yyvsp[-5].TEXT),(yyvsp[-3].pt),(yyvsp[-1].pln),(yyvsp[0].pa));}

    break;

  case 43:

    {(yyval.pdv)=new produccion_declaracion_variable_8((yyvsp[-4].TEXT),(yyvsp[-2].pt),(yyvsp[0].pln));}

    break;

  case 44:

    {(yyval.pt)=new produccion_tipo1((yyvsp[0].TEXT));}

    break;

  case 45:

    {(yyval.pt)=new produccion_tipo2((yyvsp[0].TEXT));}

    break;

  case 46:

    {(yyval.pt)=new produccion_tipo3((yyvsp[0].TEXT));}

    break;

  case 47:

    {(yyval.pt)=new produccion_tipo4((yyvsp[0].TEXT));}

    break;

  case 48:

    {(yyval.pt)=new produccion_tipo5((yyvsp[0].TEXT));}

    break;

  case 49:

    {(yyval.pa)=new produccion_asignacion1((yyvsp[-2].pexp),(yyvsp[0].pla));}

    break;

  case 50:

    {(yyval.pa)=new produccion_asignacion2((yyvsp[0].pexp));}

    break;

  case 51:

    {(yyval.pla)=new produccion_lista_asignacion1((yyvsp[-4].pla),(yyvsp[-2].TEXT),(yyvsp[0].pexp));}

    break;

  case 52:

    {(yyval.pla)=new produccion_lista_asignacion2((yyvsp[-2].TEXT),(yyvsp[0].pexp));}

    break;

  case 53:

    {(yyval.pla)=new produccion_lista_asignacion3((yyvsp[-2].TEXT),(yyvsp[0].pexp));}

    break;

  case 54:

    {(yyval.pla)=new produccion_lista_asignacion4((yyvsp[-2].TEXT),(yyvsp[0].pexp));}

    break;

  case 55:

    {(yyval.pexp)=new Expresion_igual((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 56:

    {(yyval.pexp)=new expresion_diferente((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 57:

    {(yyval.pexp)=new Expresion_y((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 58:

    {(yyval.pexp)=new expresion_nand((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 59:

    {(yyval.pexp)=new expresion_or((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 60:

    {(yyval.pexp)=new expresion_xor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 61:

    {(yyval.pexp)=new expresion_nor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 62:

    {(yyval.pexp)=new expresion_mayor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 63:

    {(yyval.pexp)=new expresion_menor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 64:

    {(yyval.pexp)=new expresion_mayorq((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 65:

    {(yyval.pexp)=new expresion_menoq((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 66:

    {(yyval.pexp)=new expresion_not((yyvsp[0].pexp));}

    break;

  case 67:

    {(yyval.pexp)=new expresion_parentesis((yyvsp[-1].pexp));}

    break;

  case 68:

    {(yyval.pexp)=new expresion_potencia((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 69:

    {(yyval.pexp)=new expresion_mas((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 70:

    {(yyval.pexp)=new expresion_menos((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 71:

    {(yyval.pexp)=new expresion_por((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 72:

    {(yyval.pexp)=new expresion_divi((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 73:

    {(yyval.pexp)=new expresion_masmas((yyvsp[-1].pexp));}

    break;

  case 74:

    {(yyval.pexp)=new expresion_menosmenos((yyvsp[-1].pexp));}

    break;

  case 75:

    {(yyval.pexp)=new expresion_masigual((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 76:

    {(yyval.pexp)=new expresion_menosigual((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 77:

    {(yyval.pexp)=new expresion_numero((yyvsp[0].TEXT));}

    break;

  case 78:

    {(yyval.pexp)=new expresion_iden((yyvsp[0].dec));}

    break;

  case 79:

    {(yyval.pexp)=new expresion_decimal((yyvsp[0].TEXT));}

    break;

  case 80:

    {(yyval.pexp)=new expresion_cadenacomillas((yyvsp[0].TEXT));}

    break;

  case 81:

    {(yyval.pexp)=new expresion_caracter((yyvsp[0].TEXT));}

    break;

  case 82:

    {(yyval.pexp)=new expresion_true((yyvsp[0].TEXT));}

    break;

  case 83:

    {(yyval.pexp)=new expresion_false((yyvsp[0].TEXT));}

    break;

  case 84:

    {(yyval.pexp) = new expresion_epsilon();}

    break;

  case 85:

    {(yyval.pc)=new produccion_ciclos1((yyvsp[-8].pexp),(yyvsp[-5].pli),(yyvsp[-1].pli));}

    break;

  case 86:

    {(yyval.pc)=new produccion_ciclos2((yyvsp[-4].pexp),(yyvsp[-1].pli));}

    break;

  case 87:

    {(yyval.pc)=new produccion_ciclos3((yyvsp[-4].pexp),(yyvsp[-1].pli));}

    break;

  case 88:

    {(yyval.pc)=new produccion_ciclos4((yyvsp[-8].pla),(yyvsp[-6].pexp),(yyvsp[-4].pla),(yyvsp[-1].pli));}

    break;

  case 89:

    {(yyval.pc)=new produccion_ciclos5((yyvsp[-6].pli),(yyvsp[-2].pexp));}

    break;

  case 90:

    {(yyval.pc)=new produccion_ciclos6((yyvsp[-4].pexp),(yyvsp[-1].plc));}

    break;

  case 91:

    {(yyval.plc)=new produccion_lista_case1((yyvsp[-4].plc),(yyvsp[-2].pexp),(yyvsp[0].pli));}

    break;

  case 92:

    {(yyval.plc)=new produccion_lista_case2((yyvsp[-2].pexp),(yyvsp[0].pli));}

    break;

  case 93:

    {(yyval.plc)=new produccion_lista_case3((yyvsp[0].pli));}

    break;

  case 94:

    {(yyval.pdm)=new produccion_declaracion_metodo1((yyvsp[-7].pt),(yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli));}

    break;

  case 95:

    {(yyval.pdm)=new produccion_declaracion_metodo2((yyvsp[-7].pt),(yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli));}

    break;

  case 96:

    {(yyval.pdm)=new produccion_declaracion_metodo3((yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli));}

    break;

  case 97:

    {(yyval.pdm)=new produccion_declaracion_metodo4((yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli));}

    break;

  case 98:

    {(yyval.plp)=new produccion_lista_parametros1((yyvsp[-2].plp),(yyvsp[0].pp));}

    break;

  case 99:

    {(yyval.plp)=new produccion_lista_parametros2((yyvsp[0].pp));}

    break;

  case 100:

    {(yyval.plp)=new produccion_lista_parametros3();}

    break;

  case 101:

    {(yyval.pp)=new produccion_parametro1((yyvsp[-1].pt),(yyvsp[0].dec));}

    break;

  case 102:

    {(yyval.pintar)=new produccion_pintar_p1((yyvsp[-8].pexp),(yyvsp[-6].pexp),(yyvsp[-4].TEXT),(yyvsp[-2].pexp));}

    break;

  case 103:

    {(yyval.por)=new produccion_pintar_or1((yyvsp[-12].pexp),(yyvsp[-10].pexp),(yyvsp[-8].TEXT),(yyvsp[-6].pexp),(yyvsp[-4].pexp),(yyvsp[-2].pexp));}

    break;

  case 105:

    {(yyval.prin)=new produccion_principal1((yyvsp[-1].pli));}

    break;

  case 106:

    {(yyval.po)=new produccion_ordenar1((yyvsp[-4].TEXT),(yyvsp[-2].TEXT));}

    break;

  case 107:

    {(yyval.ps)=new produccion_sumarizar1((yyvsp[-2].TEXT));}

    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}


