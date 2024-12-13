/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "./src/lrparser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
extern int yylex(void);
extern void yyerror(char* s);
extern void yyrestart();

#line 80 "./build/lrparser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "./src/lrparser.y"

    #include "ast.h"

#line 116 "./build/lrparser.tab.c"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    num_INT = 258,                 /* num_INT  */
    num_FLOAT = 259,               /* num_FLOAT  */
    Y_ID = 260,                    /* Y_ID  */
    Y_INT = 261,                   /* Y_INT  */
    Y_FLOAT = 262,                 /* Y_FLOAT  */
    Y_VOID = 263,                  /* Y_VOID  */
    Y_CONST = 264,                 /* Y_CONST  */
    Y_IF = 265,                    /* Y_IF  */
    Y_ELSE = 266,                  /* Y_ELSE  */
    Y_WHILE = 267,                 /* Y_WHILE  */
    Y_BREAK = 268,                 /* Y_BREAK  */
    Y_CONTINUE = 269,              /* Y_CONTINUE  */
    Y_RETURN = 270,                /* Y_RETURN  */
    Y_ADD = 271,                   /* Y_ADD  */
    Y_SUB = 272,                   /* Y_SUB  */
    Y_MUL = 273,                   /* Y_MUL  */
    Y_DIV = 274,                   /* Y_DIV  */
    Y_MODULO = 275,                /* Y_MODULO  */
    Y_LESS = 276,                  /* Y_LESS  */
    Y_LESSEQ = 277,                /* Y_LESSEQ  */
    Y_GREAT = 278,                 /* Y_GREAT  */
    Y_GREATEQ = 279,               /* Y_GREATEQ  */
    Y_NOTEQ = 280,                 /* Y_NOTEQ  */
    Y_EQ = 281,                    /* Y_EQ  */
    Y_NOT = 282,                   /* Y_NOT  */
    Y_AND = 283,                   /* Y_AND  */
    Y_OR = 284,                    /* Y_OR  */
    Y_ASSIGN = 285,                /* Y_ASSIGN  */
    Y_LPAR = 286,                  /* Y_LPAR  */
    Y_RPAR = 287,                  /* Y_RPAR  */
    Y_LBRACKET = 288,              /* Y_LBRACKET  */
    Y_RBRACKET = 289,              /* Y_RBRACKET  */
    Y_LSQUARE = 290,               /* Y_LSQUARE  */
    Y_RSQUARE = 291,               /* Y_RSQUARE  */
    Y_COMMA = 292,                 /* Y_COMMA  */
    Y_SEMICOLON = 293              /* Y_SEMICOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "./src/lrparser.y"

    int token;
    int iValue;
    float fValue;
    char* sValue;
    past pAst;

#line 179 "./build/lrparser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_num_INT = 3,                    /* num_INT  */
  YYSYMBOL_num_FLOAT = 4,                  /* num_FLOAT  */
  YYSYMBOL_Y_ID = 5,                       /* Y_ID  */
  YYSYMBOL_Y_INT = 6,                      /* Y_INT  */
  YYSYMBOL_Y_FLOAT = 7,                    /* Y_FLOAT  */
  YYSYMBOL_Y_VOID = 8,                     /* Y_VOID  */
  YYSYMBOL_Y_CONST = 9,                    /* Y_CONST  */
  YYSYMBOL_Y_IF = 10,                      /* Y_IF  */
  YYSYMBOL_Y_ELSE = 11,                    /* Y_ELSE  */
  YYSYMBOL_Y_WHILE = 12,                   /* Y_WHILE  */
  YYSYMBOL_Y_BREAK = 13,                   /* Y_BREAK  */
  YYSYMBOL_Y_CONTINUE = 14,                /* Y_CONTINUE  */
  YYSYMBOL_Y_RETURN = 15,                  /* Y_RETURN  */
  YYSYMBOL_Y_ADD = 16,                     /* Y_ADD  */
  YYSYMBOL_Y_SUB = 17,                     /* Y_SUB  */
  YYSYMBOL_Y_MUL = 18,                     /* Y_MUL  */
  YYSYMBOL_Y_DIV = 19,                     /* Y_DIV  */
  YYSYMBOL_Y_MODULO = 20,                  /* Y_MODULO  */
  YYSYMBOL_Y_LESS = 21,                    /* Y_LESS  */
  YYSYMBOL_Y_LESSEQ = 22,                  /* Y_LESSEQ  */
  YYSYMBOL_Y_GREAT = 23,                   /* Y_GREAT  */
  YYSYMBOL_Y_GREATEQ = 24,                 /* Y_GREATEQ  */
  YYSYMBOL_Y_NOTEQ = 25,                   /* Y_NOTEQ  */
  YYSYMBOL_Y_EQ = 26,                      /* Y_EQ  */
  YYSYMBOL_Y_NOT = 27,                     /* Y_NOT  */
  YYSYMBOL_Y_AND = 28,                     /* Y_AND  */
  YYSYMBOL_Y_OR = 29,                      /* Y_OR  */
  YYSYMBOL_Y_ASSIGN = 30,                  /* Y_ASSIGN  */
  YYSYMBOL_Y_LPAR = 31,                    /* Y_LPAR  */
  YYSYMBOL_Y_RPAR = 32,                    /* Y_RPAR  */
  YYSYMBOL_Y_LBRACKET = 33,                /* Y_LBRACKET  */
  YYSYMBOL_Y_RBRACKET = 34,                /* Y_RBRACKET  */
  YYSYMBOL_Y_LSQUARE = 35,                 /* Y_LSQUARE  */
  YYSYMBOL_Y_RSQUARE = 36,                 /* Y_RSQUARE  */
  YYSYMBOL_Y_COMMA = 37,                   /* Y_COMMA  */
  YYSYMBOL_Y_SEMICOLON = 38,               /* Y_SEMICOLON  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_CompUnit = 41,                  /* CompUnit  */
  YYSYMBOL_Decl = 42,                      /* Decl  */
  YYSYMBOL_ConstDecl = 43,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 44,                 /* ConstDefs  */
  YYSYMBOL_ConstDef = 45,                  /* ConstDef  */
  YYSYMBOL_ConstExps = 46,                 /* ConstExps  */
  YYSYMBOL_ConstInitVal = 47,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 48,             /* ConstInitVals  */
  YYSYMBOL_VarDecl = 49,                   /* VarDecl  */
  YYSYMBOL_VarDecls = 50,                  /* VarDecls  */
  YYSYMBOL_VarDef = 51,                    /* VarDef  */
  YYSYMBOL_InitVal = 52,                   /* InitVal  */
  YYSYMBOL_InitVals = 53,                  /* InitVals  */
  YYSYMBOL_FuncDef = 54,                   /* FuncDef  */
  YYSYMBOL_FuncParams = 55,                /* FuncParams  */
  YYSYMBOL_FuncParam = 56,                 /* FuncParam  */
  YYSYMBOL_Block = 57,                     /* Block  */
  YYSYMBOL_BlockItems = 58,                /* BlockItems  */
  YYSYMBOL_BlockItem = 59,                 /* BlockItem  */
  YYSYMBOL_Stmt = 60,                      /* Stmt  */
  YYSYMBOL_Exp = 61,                       /* Exp  */
  YYSYMBOL_LVal = 62,                      /* LVal  */
  YYSYMBOL_ArraySubscripts = 63,           /* ArraySubscripts  */
  YYSYMBOL_PrimaryExp = 64,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 65,                  /* UnaryExp  */
  YYSYMBOL_CallParams = 66,                /* CallParams  */
  YYSYMBOL_MulExp = 67,                    /* MulExp  */
  YYSYMBOL_AddExp = 68,                    /* AddExp  */
  YYSYMBOL_RelExp = 69,                    /* RelExp  */
  YYSYMBOL_EqExp = 70,                     /* EqExp  */
  YYSYMBOL_LAndExp = 71,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 72,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 73,                  /* ConstExp  */
  YYSYMBOL_Type = 74                       /* Type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  181

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    47,    48,    49,    50,    54,    55,    59,
      60,    64,    65,    69,    70,    74,    75,    79,    80,    81,
      82,    86,    87,    91,    92,    96,    97,   101,   102,   103,
     104,   108,   109,   110,   111,   115,   116,   120,   121,   125,
     126,   130,   131,   132,   133,   137,   138,   142,   143,   147,
     148,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   166,   170,   171,   175,   176,   180,   181,   182,
     183,   187,   188,   189,   190,   191,   192,   196,   197,   201,
     202,   203,   204,   208,   209,   210,   214,   215,   216,   217,
     218,   222,   223,   224,   228,   229,   233,   234,   238,   242,
     243,   244
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "num_INT", "num_FLOAT",
  "Y_ID", "Y_INT", "Y_FLOAT", "Y_VOID", "Y_CONST", "Y_IF", "Y_ELSE",
  "Y_WHILE", "Y_BREAK", "Y_CONTINUE", "Y_RETURN", "Y_ADD", "Y_SUB",
  "Y_MUL", "Y_DIV", "Y_MODULO", "Y_LESS", "Y_LESSEQ", "Y_GREAT",
  "Y_GREATEQ", "Y_NOTEQ", "Y_EQ", "Y_NOT", "Y_AND", "Y_OR", "Y_ASSIGN",
  "Y_LPAR", "Y_RPAR", "Y_LBRACKET", "Y_RBRACKET", "Y_LSQUARE", "Y_RSQUARE",
  "Y_COMMA", "Y_SEMICOLON", "$accept", "program", "CompUnit", "Decl",
  "ConstDecl", "ConstDefs", "ConstDef", "ConstExps", "ConstInitVal",
  "ConstInitVals", "VarDecl", "VarDecls", "VarDef", "InitVal", "InitVals",
  "FuncDef", "FuncParams", "FuncParam", "Block", "BlockItems", "BlockItem",
  "Stmt", "Exp", "LVal", "ArraySubscripts", "PrimaryExp", "UnaryExp",
  "CallParams", "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp",
  "ConstExp", "Type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,  -119,  -119,  -119,   116,    34,    59,   108,  -119,  -119,
     108,    43,    72,  -119,  -119,  -119,  -119,   -12,    67,    -3,
      81,   122,   243,    48,   281,    51,    78,  -119,    54,   261,
      66,    72,  -119,    72,  -119,  -119,  -119,     6,   281,   281,
     281,   281,    94,  -119,  -119,  -119,  -119,  -119,   149,     0,
      56,    -4,  -119,    97,     0,    76,   243,    28,    89,  -119,
     224,  -119,  -119,   261,  -119,  -119,   264,   281,  -119,  -119,
    -119,  -119,   101,  -119,    33,   281,   281,   281,   281,   281,
     139,  -119,    56,   116,   115,   126,  -119,  -119,  -119,    35,
    -119,  -119,   134,   144,   150,  -119,  -119,   243,   161,  -119,
    -119,  -119,   149,   149,   165,   166,   160,   162,    26,  -119,
    -119,  -119,  -119,   167,   175,  -119,   169,   173,    78,  -119,
    -119,    57,  -119,  -119,  -119,   261,   170,   281,  -119,   164,
     168,  -119,   281,   281,  -119,  -119,  -119,   174,  -119,  -119,
    -119,   281,   164,   177,  -119,  -119,  -119,  -119,   141,    60,
     187,   188,   192,   193,  -119,   194,  -119,  -119,   281,   281,
     281,   281,   281,   281,   281,   281,   206,   206,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,   215,  -119,   206,
    -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    99,   100,   101,     0,     0,     0,     5,     7,     8,
       6,     0,     0,     1,     2,     3,     4,    27,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    23,     0,     0,
       0,     0,    10,     0,     9,    69,    70,    63,     0,     0,
       0,     0,     0,    28,    31,    68,    71,    79,    83,    62,
       0,     0,    39,     0,    98,     0,     0,    27,    25,    24,
       0,    13,    17,     0,    12,    11,     0,     0,    64,    74,
      75,    76,     0,    32,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,    41,    15,    30,    26,    18,     0,
      14,    72,    77,     0,     0,    67,    33,     0,     0,    80,
      81,    82,    84,    85,     0,     0,     0,     0,     0,    46,
      52,    49,    54,     0,    47,    50,     0,    68,     0,    38,
      40,     0,    43,    16,    19,     0,     0,     0,    73,    65,
      35,    34,     0,     0,    58,    59,    61,     0,    45,    48,
      53,     0,    42,    21,    20,    78,    66,    36,    86,    91,
      94,    96,     0,     0,    60,     0,    44,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    87,
      89,    88,    90,    93,    92,    95,    97,    56,    55,     0,
      57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,    68,   -70,  -119,  -119,    -7,   -17,   -54,    87,
    -119,   176,   205,   -31,   105,  -119,  -119,   153,   -42,   124,
    -119,   -72,   -21,   -76,   -77,  -119,   -26,   118,    96,   -24,
     -29,    31,    79,  -118,   218,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    20,    21,    25,    61,   126,
       9,    28,    18,    43,    98,    10,    51,    52,   112,   113,
     114,   115,   116,    45,    68,    46,    47,    93,    48,    49,
     149,   150,   151,   152,    62,    11
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,    44,    30,    12,   117,    54,    89,   122,    81,    90,
     111,    74,    69,    70,    71,   153,    78,    79,    22,    23,
      72,    44,    53,    24,    64,    86,    65,    29,    82,    35,
      36,    37,    24,    83,    13,    44,    54,    66,   117,    54,
     119,    67,    38,    39,   111,    92,    94,   176,    17,    99,
     100,   101,   146,    40,     1,     2,     3,    41,    22,    14,
      35,    36,    37,    24,   136,   156,   130,    96,   123,   124,
      97,   143,   125,    38,    39,    15,    44,    19,    16,   118,
      50,    56,    53,    57,    40,   162,   163,   137,    41,    80,
     117,   117,    59,   142,   177,   178,    63,    35,    36,    37,
      94,    54,    84,   117,    26,    27,    92,   180,   148,   148,
      38,    39,    85,   118,     1,     2,     3,     4,    31,    32,
     155,    40,     1,     2,     3,    41,    26,    42,    73,   169,
     170,   171,   172,    95,   148,   148,   148,   148,   148,   148,
     148,   148,    35,    36,    37,     1,     2,     3,     4,   104,
     121,   105,   106,   107,   108,    38,    39,    78,    79,    33,
      34,    24,   158,   159,   160,   161,    40,    75,    76,    77,
      41,   127,    80,   109,   102,   103,   128,   110,    35,    36,
      37,     1,     2,     3,     4,   104,   129,   105,   106,   107,
     108,    38,    39,   173,   174,   131,   132,   133,   134,    67,
     135,   138,    40,   141,   144,    97,    41,   140,    80,    35,
      36,    37,   154,   110,   125,   164,   104,   165,   105,   106,
     107,   108,    38,    39,   166,   167,   179,    35,    36,    37,
     157,    58,   168,    40,    87,   147,   120,    41,   139,    80,
      38,    39,    55,   175,   110,   145,    35,    36,    37,     0,
       0,    40,     0,     0,     0,    41,     0,    60,    88,    38,
      39,     0,     0,     0,    35,    36,    37,    35,    36,    37,
      40,     0,     0,     0,    41,     0,    42,    38,    39,     0,
      38,    39,     0,     0,    35,    36,    37,     0,    40,     0,
       0,    40,    41,     0,    60,    41,    91,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,    41
};

static const yytype_int16 yycheck[] =
{
      24,    22,    19,     4,    80,    29,    60,    84,    50,    63,
      80,    42,    38,    39,    40,   133,    16,    17,    30,    31,
      41,    42,    23,    35,    31,    56,    33,    30,    32,     3,
       4,     5,    35,    37,     0,    56,    60,    31,   114,    63,
      82,    35,    16,    17,   114,    66,    67,   165,     5,    75,
      76,    77,   129,    27,     6,     7,     8,    31,    30,     0,
       3,     4,     5,    35,    38,   142,    97,    34,    85,    34,
      37,   125,    37,    16,    17,     7,    97,     5,    10,    80,
      32,    30,    83,     5,    27,    25,    26,   108,    31,    33,
     166,   167,    38,    36,   166,   167,    30,     3,     4,     5,
     121,   125,     5,   179,    37,    38,   127,   179,   132,   133,
      16,    17,    36,   114,     6,     7,     8,     9,    37,    38,
     141,    27,     6,     7,     8,    31,    37,    33,    34,   158,
     159,   160,   161,    32,   158,   159,   160,   161,   162,   163,
     164,   165,     3,     4,     5,     6,     7,     8,     9,    10,
      35,    12,    13,    14,    15,    16,    17,    16,    17,    37,
      38,    35,    21,    22,    23,    24,    27,    18,    19,    20,
      31,    37,    33,    34,    78,    79,    32,    38,     3,     4,
       5,     6,     7,     8,     9,    10,    36,    12,    13,    14,
      15,    16,    17,   162,   163,    34,    31,    31,    38,    35,
      38,    34,    27,    30,    34,    37,    31,    38,    33,     3,
       4,     5,    38,    38,    37,    28,    10,    29,    12,    13,
      14,    15,    16,    17,    32,    32,    11,     3,     4,     5,
     143,    26,    38,    27,    58,   130,    83,    31,   114,    33,
      16,    17,    24,   164,    38,   127,     3,     4,     5,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    34,    16,
      17,    -1,    -1,    -1,     3,     4,     5,     3,     4,     5,
      27,    -1,    -1,    -1,    31,    -1,    33,    16,    17,    -1,
      16,    17,    -1,    -1,     3,     4,     5,    -1,    27,    -1,
      -1,    27,    31,    -1,    33,    31,    32,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    40,    41,    42,    43,    49,
      54,    74,    74,     0,     0,    41,    41,     5,    51,     5,
      44,    45,    30,    31,    35,    46,    37,    38,    50,    30,
      46,    37,    38,    37,    38,     3,     4,     5,    16,    17,
      27,    31,    33,    52,    61,    62,    64,    65,    67,    68,
      32,    55,    56,    74,    68,    73,    30,     5,    51,    38,
      33,    47,    73,    30,    45,    45,    31,    35,    63,    65,
      65,    65,    61,    34,    52,    18,    19,    20,    16,    17,
      33,    57,    32,    37,     5,    36,    52,    50,    34,    47,
      47,    32,    61,    66,    61,    32,    34,    37,    53,    65,
      65,    65,    67,    67,    10,    12,    13,    14,    15,    34,
      38,    42,    57,    58,    59,    60,    61,    62,    74,    57,
      56,    35,    63,    46,    34,    37,    48,    37,    32,    36,
      52,    34,    31,    31,    38,    38,    38,    61,    34,    58,
      38,    30,    36,    47,    34,    66,    63,    53,    68,    69,
      70,    71,    72,    72,    38,    61,    63,    48,    21,    22,
      23,    24,    25,    26,    28,    29,    32,    32,    38,    69,
      69,    69,    69,    70,    70,    71,    72,    60,    60,    11,
      60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    42,    42,    43,
      43,    44,    44,    45,    45,    46,    46,    47,    47,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    52,    52,    52,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     1,     1,     4,
       4,     3,     3,     3,     4,     3,     4,     1,     2,     3,
       4,     2,     3,     3,     4,     2,     3,     1,     3,     2,
       4,     1,     2,     3,     4,     2,     3,     5,     6,     1,
       3,     2,     4,     3,     5,     3,     2,     1,     2,     1,
       1,     4,     1,     2,     1,     5,     5,     7,     2,     2,
       3,     2,     1,     1,     2,     3,     4,     3,     1,     1,
       1,     1,     3,     4,     2,     2,     2,     1,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: CompUnit $end  */
#line 43 "./src/lrparser.y"
                        { showAst((yyvsp[-1].pAst), 0, 0); }
#line 1385 "./build/lrparser.tab.c"
    break;

  case 3: /* CompUnit: Decl CompUnit  */
#line 47 "./src/lrparser.y"
                        { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); root = (yyval.pAst); }
#line 1391 "./build/lrparser.tab.c"
    break;

  case 4: /* CompUnit: FuncDef CompUnit  */
#line 48 "./src/lrparser.y"
                           { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); root = (yyval.pAst); }
#line 1397 "./build/lrparser.tab.c"
    break;

  case 5: /* CompUnit: Decl  */
#line 49 "./src/lrparser.y"
               { (yyval.pAst) = (yyvsp[0].pAst); root = (yyval.pAst); }
#line 1403 "./build/lrparser.tab.c"
    break;

  case 6: /* CompUnit: FuncDef  */
#line 50 "./src/lrparser.y"
                  { (yyval.pAst) = (yyvsp[0].pAst); root = (yyval.pAst); }
#line 1409 "./build/lrparser.tab.c"
    break;

  case 7: /* Decl: ConstDecl  */
#line 54 "./src/lrparser.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1415 "./build/lrparser.tab.c"
    break;

  case 8: /* Decl: VarDecl  */
#line 55 "./src/lrparser.y"
              { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1421 "./build/lrparser.tab.c"
    break;

  case 9: /* ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON  */
#line 59 "./src/lrparser.y"
                                             { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1427 "./build/lrparser.tab.c"
    break;

  case 10: /* ConstDecl: Y_CONST Type ConstDefs Y_SEMICOLON  */
#line 60 "./src/lrparser.y"
                                              { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1433 "./build/lrparser.tab.c"
    break;

  case 11: /* ConstDefs: ConstDef Y_COMMA ConstDef  */
#line 64 "./src/lrparser.y"
                                     { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1439 "./build/lrparser.tab.c"
    break;

  case 12: /* ConstDefs: ConstDefs Y_COMMA ConstDef  */
#line 65 "./src/lrparser.y"
                                      { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1445 "./build/lrparser.tab.c"
    break;

  case 13: /* ConstDef: Y_ID Y_ASSIGN ConstInitVal  */
#line 69 "./src/lrparser.y"
                                     { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-2].sValue), NULL, NULL), (yyvsp[0].pAst)); }
#line 1451 "./build/lrparser.tab.c"
    break;

  case 14: /* ConstDef: Y_ID ConstExps Y_ASSIGN ConstInitVal  */
#line 70 "./src/lrparser.y"
                                               { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-3].sValue), (yyvsp[-2].pAst), NULL), (yyvsp[0].pAst)); }
#line 1457 "./build/lrparser.tab.c"
    break;

  case 15: /* ConstExps: Y_LSQUARE ConstExp Y_RSQUARE  */
#line 74 "./src/lrparser.y"
                                        { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1463 "./build/lrparser.tab.c"
    break;

  case 16: /* ConstExps: Y_LSQUARE ConstExp Y_RSQUARE ConstExps  */
#line 75 "./src/lrparser.y"
                                                  { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1469 "./build/lrparser.tab.c"
    break;

  case 17: /* ConstInitVal: ConstExp  */
#line 79 "./src/lrparser.y"
                       { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1475 "./build/lrparser.tab.c"
    break;

  case 18: /* ConstInitVal: Y_LBRACKET Y_RBRACKET  */
#line 80 "./src/lrparser.y"
                                    { (yyval.pAst) = NULL; }
#line 1481 "./build/lrparser.tab.c"
    break;

  case 19: /* ConstInitVal: Y_LBRACKET ConstInitVal Y_RBRACKET  */
#line 81 "./src/lrparser.y"
                                                 { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1487 "./build/lrparser.tab.c"
    break;

  case 20: /* ConstInitVal: Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET  */
#line 82 "./src/lrparser.y"
                                                               { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[-1].pAst)); }
#line 1493 "./build/lrparser.tab.c"
    break;

  case 21: /* ConstInitVals: Y_COMMA ConstInitVal  */
#line 86 "./src/lrparser.y"
                                    { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1499 "./build/lrparser.tab.c"
    break;

  case 22: /* ConstInitVals: Y_COMMA ConstInitVal ConstInitVals  */
#line 87 "./src/lrparser.y"
                                                  { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1505 "./build/lrparser.tab.c"
    break;

  case 23: /* VarDecl: Type VarDef Y_SEMICOLON  */
#line 91 "./src/lrparser.y"
                                 { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1511 "./build/lrparser.tab.c"
    break;

  case 24: /* VarDecl: Type VarDef VarDecls Y_SEMICOLON  */
#line 92 "./src/lrparser.y"
                                          { (yyval.pAst) = ParaDecl((yyvsp[-3].pAst), (yyvsp[-2].pAst), (yyvsp[-1].pAst)); }
#line 1517 "./build/lrparser.tab.c"
    break;

  case 25: /* VarDecls: Y_COMMA VarDef  */
#line 96 "./src/lrparser.y"
                         { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1523 "./build/lrparser.tab.c"
    break;

  case 26: /* VarDecls: Y_COMMA VarDef VarDecls  */
#line 97 "./src/lrparser.y"
                                  { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1529 "./build/lrparser.tab.c"
    break;

  case 27: /* VarDef: Y_ID  */
#line 101 "./src/lrparser.y"
             { (yyval.pAst) = DeclRefExp((yyvsp[0].sValue), NULL, NULL); }
#line 1535 "./build/lrparser.tab.c"
    break;

  case 28: /* VarDef: Y_ID Y_ASSIGN InitVal  */
#line 102 "./src/lrparser.y"
                              { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-2].sValue), NULL, NULL), (yyvsp[0].pAst)); }
#line 1541 "./build/lrparser.tab.c"
    break;

  case 29: /* VarDef: Y_ID ConstExps  */
#line 103 "./src/lrparser.y"
                       { (yyval.pAst) = DeclRefExp((yyvsp[-1].sValue), (yyvsp[0].pAst), NULL); }
#line 1547 "./build/lrparser.tab.c"
    break;

  case 30: /* VarDef: Y_ID ConstExps Y_ASSIGN InitVal  */
#line 104 "./src/lrparser.y"
                                        { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-3].sValue), (yyvsp[-2].pAst), NULL), (yyvsp[0].pAst)); }
#line 1553 "./build/lrparser.tab.c"
    break;

  case 31: /* InitVal: Exp  */
#line 108 "./src/lrparser.y"
             { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1559 "./build/lrparser.tab.c"
    break;

  case 32: /* InitVal: Y_LBRACKET Y_RBRACKET  */
#line 109 "./src/lrparser.y"
                               { (yyval.pAst) = NULL; }
#line 1565 "./build/lrparser.tab.c"
    break;

  case 33: /* InitVal: Y_LBRACKET InitVal Y_RBRACKET  */
#line 110 "./src/lrparser.y"
                                       { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1571 "./build/lrparser.tab.c"
    break;

  case 34: /* InitVal: Y_LBRACKET InitVal InitVals Y_RBRACKET  */
#line 111 "./src/lrparser.y"
                                                { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[-1].pAst)); }
#line 1577 "./build/lrparser.tab.c"
    break;

  case 35: /* InitVals: Y_COMMA InitVal  */
#line 115 "./src/lrparser.y"
                          { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1583 "./build/lrparser.tab.c"
    break;

  case 36: /* InitVals: Y_COMMA InitVal InitVals  */
#line 116 "./src/lrparser.y"
                                   { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1589 "./build/lrparser.tab.c"
    break;

  case 37: /* FuncDef: Type Y_ID Y_LPAR Y_RPAR Block  */
#line 120 "./src/lrparser.y"
                                       { (yyval.pAst) = FuncDef((yyvsp[-4].pAst), (yyvsp[-3].sValue), NULL, (yyvsp[0].pAst)); }
#line 1595 "./build/lrparser.tab.c"
    break;

  case 38: /* FuncDef: Type Y_ID Y_LPAR FuncParams Y_RPAR Block  */
#line 121 "./src/lrparser.y"
                                                  { (yyval.pAst) = FuncDef((yyvsp[-5].pAst), (yyvsp[-4].sValue), (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1601 "./build/lrparser.tab.c"
    break;

  case 39: /* FuncParams: FuncParam  */
#line 125 "./src/lrparser.y"
                      { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1607 "./build/lrparser.tab.c"
    break;

  case 40: /* FuncParams: FuncParams Y_COMMA FuncParam  */
#line 126 "./src/lrparser.y"
                                         { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1613 "./build/lrparser.tab.c"
    break;

  case 41: /* FuncParam: Type Y_ID  */
#line 130 "./src/lrparser.y"
                     { (yyval.pAst) = ParaDecl((yyvsp[-1].pAst), DeclRefExp((yyvsp[0].sValue), NULL, NULL), NULL); }
#line 1619 "./build/lrparser.tab.c"
    break;

  case 42: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE  */
#line 131 "./src/lrparser.y"
                                         { (yyval.pAst) = ParaDecl((yyvsp[-3].pAst), DeclRefExp((yyvsp[-2].sValue), NULL, NULL), NULL); }
#line 1625 "./build/lrparser.tab.c"
    break;

  case 43: /* FuncParam: Type Y_ID ArraySubscripts  */
#line 132 "./src/lrparser.y"
                                     { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), DeclRefExp((yyvsp[-1].sValue), (yyvsp[0].pAst), NULL), NULL); }
#line 1631 "./build/lrparser.tab.c"
    break;

  case 44: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE ArraySubscripts  */
#line 133 "./src/lrparser.y"
                                                         { (yyval.pAst) = ParaDecl((yyvsp[-4].pAst), DeclRefExp((yyvsp[-3].sValue), (yyvsp[0].pAst), NULL), NULL); }
#line 1637 "./build/lrparser.tab.c"
    break;

  case 45: /* Block: Y_LBRACKET BlockItems Y_RBRACKET  */
#line 137 "./src/lrparser.y"
                                        { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1643 "./build/lrparser.tab.c"
    break;

  case 46: /* Block: Y_LBRACKET Y_RBRACKET  */
#line 138 "./src/lrparser.y"
                             { (yyval.pAst) = NULL; }
#line 1649 "./build/lrparser.tab.c"
    break;

  case 47: /* BlockItems: BlockItem  */
#line 142 "./src/lrparser.y"
                      { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1655 "./build/lrparser.tab.c"
    break;

  case 48: /* BlockItems: BlockItem BlockItems  */
#line 143 "./src/lrparser.y"
                                 { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1661 "./build/lrparser.tab.c"
    break;

  case 49: /* BlockItem: Decl  */
#line 147 "./src/lrparser.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1667 "./build/lrparser.tab.c"
    break;

  case 50: /* BlockItem: Stmt  */
#line 148 "./src/lrparser.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1673 "./build/lrparser.tab.c"
    break;

  case 51: /* Stmt: LVal Y_ASSIGN Exp Y_SEMICOLON  */
#line 152 "./src/lrparser.y"
                                    { (yyval.pAst) = BinaryOper(Y_ASSIGN, (yyvsp[-3].pAst), (yyvsp[-1].pAst)); }
#line 1679 "./build/lrparser.tab.c"
    break;

  case 52: /* Stmt: Y_SEMICOLON  */
#line 153 "./src/lrparser.y"
                  { (yyval.pAst) = NULL; }
#line 1685 "./build/lrparser.tab.c"
    break;

  case 53: /* Stmt: Exp Y_SEMICOLON  */
#line 154 "./src/lrparser.y"
                      { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1691 "./build/lrparser.tab.c"
    break;

  case 54: /* Stmt: Block  */
#line 155 "./src/lrparser.y"
            { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1697 "./build/lrparser.tab.c"
    break;

  case 55: /* Stmt: Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt  */
#line 156 "./src/lrparser.y"
                                        { (yyval.pAst) = WhileStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1703 "./build/lrparser.tab.c"
    break;

  case 56: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt  */
#line 157 "./src/lrparser.y"
                                     { (yyval.pAst) = IfStmt((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1709 "./build/lrparser.tab.c"
    break;

  case 57: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt Y_ELSE Stmt  */
#line 158 "./src/lrparser.y"
                                                 { (yyval.pAst) = IfStmt((yyvsp[-4].pAst), (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1715 "./build/lrparser.tab.c"
    break;

  case 58: /* Stmt: Y_BREAK Y_SEMICOLON  */
#line 159 "./src/lrparser.y"
                          { (yyval.pAst) = BreakStmt(); }
#line 1721 "./build/lrparser.tab.c"
    break;

  case 59: /* Stmt: Y_CONTINUE Y_SEMICOLON  */
#line 160 "./src/lrparser.y"
                             { (yyval.pAst) = ContinueStmt(); }
#line 1727 "./build/lrparser.tab.c"
    break;

  case 60: /* Stmt: Y_RETURN Exp Y_SEMICOLON  */
#line 161 "./src/lrparser.y"
                               { (yyval.pAst) = ReturnStmt((yyvsp[-1].pAst), NULL); }
#line 1733 "./build/lrparser.tab.c"
    break;

  case 61: /* Stmt: Y_RETURN Y_SEMICOLON  */
#line 162 "./src/lrparser.y"
                           { (yyval.pAst) = ReturnStmt(NULL, NULL); }
#line 1739 "./build/lrparser.tab.c"
    break;

  case 62: /* Exp: AddExp  */
#line 166 "./src/lrparser.y"
            { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1745 "./build/lrparser.tab.c"
    break;

  case 63: /* LVal: Y_ID  */
#line 170 "./src/lrparser.y"
           { (yyval.pAst) = DeclRefExp((yyvsp[0].sValue), NULL, NULL); }
#line 1751 "./build/lrparser.tab.c"
    break;

  case 64: /* LVal: Y_ID ArraySubscripts  */
#line 171 "./src/lrparser.y"
                           { (yyval.pAst) = DeclRefExp((yyvsp[-1].sValue), (yyvsp[0].pAst), NULL); }
#line 1757 "./build/lrparser.tab.c"
    break;

  case 65: /* ArraySubscripts: Y_LSQUARE Exp Y_RSQUARE  */
#line 175 "./src/lrparser.y"
                                         { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1763 "./build/lrparser.tab.c"
    break;

  case 66: /* ArraySubscripts: Y_LSQUARE Exp Y_RSQUARE ArraySubscripts  */
#line 176 "./src/lrparser.y"
                                                         { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1769 "./build/lrparser.tab.c"
    break;

  case 67: /* PrimaryExp: Y_LPAR Exp Y_RPAR  */
#line 180 "./src/lrparser.y"
                              { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1775 "./build/lrparser.tab.c"
    break;

  case 68: /* PrimaryExp: LVal  */
#line 181 "./src/lrparser.y"
                 { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1781 "./build/lrparser.tab.c"
    break;

  case 69: /* PrimaryExp: num_INT  */
#line 182 "./src/lrparser.y"
                    { (yyval.pAst) = newInt((yyvsp[0].iValue)); }
#line 1787 "./build/lrparser.tab.c"
    break;

  case 70: /* PrimaryExp: num_FLOAT  */
#line 183 "./src/lrparser.y"
                      { (yyval.pAst) = newFloat((yyvsp[0].fValue)); }
#line 1793 "./build/lrparser.tab.c"
    break;

  case 71: /* UnaryExp: PrimaryExp  */
#line 187 "./src/lrparser.y"
                     { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1799 "./build/lrparser.tab.c"
    break;

  case 72: /* UnaryExp: Y_ID Y_LPAR Y_RPAR  */
#line 188 "./src/lrparser.y"
                             { (yyval.pAst) = DeclRefExp((yyvsp[-2].sValue), NULL, NULL); }
#line 1805 "./build/lrparser.tab.c"
    break;

  case 73: /* UnaryExp: Y_ID Y_LPAR CallParams Y_RPAR  */
#line 189 "./src/lrparser.y"
                                        { (yyval.pAst) = DeclRefExp((yyvsp[-3].sValue), (yyvsp[-1].pAst), NULL); }
#line 1811 "./build/lrparser.tab.c"
    break;

  case 74: /* UnaryExp: Y_ADD UnaryExp  */
#line 190 "./src/lrparser.y"
                         { (yyval.pAst) = UnaryOper(Y_ADD, (yyvsp[0].pAst)); }
#line 1817 "./build/lrparser.tab.c"
    break;

  case 75: /* UnaryExp: Y_SUB UnaryExp  */
#line 191 "./src/lrparser.y"
                         { (yyval.pAst) = UnaryOper(Y_SUB, (yyvsp[0].pAst)); }
#line 1823 "./build/lrparser.tab.c"
    break;

  case 76: /* UnaryExp: Y_NOT UnaryExp  */
#line 192 "./src/lrparser.y"
                         { (yyval.pAst) = UnaryOper(Y_NOT, (yyvsp[0].pAst)); }
#line 1829 "./build/lrparser.tab.c"
    break;

  case 77: /* CallParams: Exp  */
#line 196 "./src/lrparser.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1835 "./build/lrparser.tab.c"
    break;

  case 78: /* CallParams: Exp Y_COMMA CallParams  */
#line 197 "./src/lrparser.y"
                                   { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1841 "./build/lrparser.tab.c"
    break;

  case 79: /* MulExp: UnaryExp  */
#line 201 "./src/lrparser.y"
                 { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1847 "./build/lrparser.tab.c"
    break;

  case 80: /* MulExp: MulExp Y_MUL UnaryExp  */
#line 202 "./src/lrparser.y"
                              { (yyval.pAst) = BinaryOper(Y_MUL, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1853 "./build/lrparser.tab.c"
    break;

  case 81: /* MulExp: MulExp Y_DIV UnaryExp  */
#line 203 "./src/lrparser.y"
                              { (yyval.pAst) = BinaryOper(Y_DIV, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1859 "./build/lrparser.tab.c"
    break;

  case 82: /* MulExp: MulExp Y_MODULO UnaryExp  */
#line 204 "./src/lrparser.y"
                                 { (yyval.pAst) = BinaryOper(Y_MODULO, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1865 "./build/lrparser.tab.c"
    break;

  case 83: /* AddExp: MulExp  */
#line 208 "./src/lrparser.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1871 "./build/lrparser.tab.c"
    break;

  case 84: /* AddExp: AddExp Y_ADD MulExp  */
#line 209 "./src/lrparser.y"
                            { (yyval.pAst) = BinaryOper(Y_ADD, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1877 "./build/lrparser.tab.c"
    break;

  case 85: /* AddExp: AddExp Y_SUB MulExp  */
#line 210 "./src/lrparser.y"
                            { (yyval.pAst) = BinaryOper(Y_SUB, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1883 "./build/lrparser.tab.c"
    break;

  case 86: /* RelExp: AddExp  */
#line 214 "./src/lrparser.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1889 "./build/lrparser.tab.c"
    break;

  case 87: /* RelExp: AddExp Y_LESS RelExp  */
#line 215 "./src/lrparser.y"
                             { (yyval.pAst) = BinaryOper(Y_LESS, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1895 "./build/lrparser.tab.c"
    break;

  case 88: /* RelExp: AddExp Y_GREAT RelExp  */
#line 216 "./src/lrparser.y"
                              { (yyval.pAst) = BinaryOper(Y_GREAT, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1901 "./build/lrparser.tab.c"
    break;

  case 89: /* RelExp: AddExp Y_LESSEQ RelExp  */
#line 217 "./src/lrparser.y"
                               { (yyval.pAst) = BinaryOper(Y_LESSEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1907 "./build/lrparser.tab.c"
    break;

  case 90: /* RelExp: AddExp Y_GREATEQ RelExp  */
#line 218 "./src/lrparser.y"
                                { (yyval.pAst) = BinaryOper(Y_GREATEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1913 "./build/lrparser.tab.c"
    break;

  case 91: /* EqExp: RelExp  */
#line 222 "./src/lrparser.y"
              { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1919 "./build/lrparser.tab.c"
    break;

  case 92: /* EqExp: RelExp Y_EQ EqExp  */
#line 223 "./src/lrparser.y"
                         { (yyval.pAst) = BinaryOper(Y_EQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1925 "./build/lrparser.tab.c"
    break;

  case 93: /* EqExp: RelExp Y_NOTEQ EqExp  */
#line 224 "./src/lrparser.y"
                            { (yyval.pAst) = BinaryOper(Y_NOTEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1931 "./build/lrparser.tab.c"
    break;

  case 94: /* LAndExp: EqExp  */
#line 228 "./src/lrparser.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1937 "./build/lrparser.tab.c"
    break;

  case 95: /* LAndExp: EqExp Y_AND LAndExp  */
#line 229 "./src/lrparser.y"
                             { (yyval.pAst) = BinaryOper(Y_AND, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1943 "./build/lrparser.tab.c"
    break;

  case 96: /* LOrExp: LAndExp  */
#line 233 "./src/lrparser.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1949 "./build/lrparser.tab.c"
    break;

  case 97: /* LOrExp: LAndExp Y_OR LOrExp  */
#line 234 "./src/lrparser.y"
                            { (yyval.pAst) = BinaryOper(Y_OR, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1955 "./build/lrparser.tab.c"
    break;

  case 98: /* ConstExp: AddExp  */
#line 238 "./src/lrparser.y"
                 { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1961 "./build/lrparser.tab.c"
    break;

  case 99: /* Type: Y_INT  */
#line 242 "./src/lrparser.y"
            { (yyval.pAst) = newType(Y_INT); }
#line 1967 "./build/lrparser.tab.c"
    break;

  case 100: /* Type: Y_FLOAT  */
#line 243 "./src/lrparser.y"
              { (yyval.pAst) = newType(Y_FLOAT); }
#line 1973 "./build/lrparser.tab.c"
    break;

  case 101: /* Type: Y_VOID  */
#line 244 "./src/lrparser.y"
             { (yyval.pAst) = newType(Y_VOID); }
#line 1979 "./build/lrparser.tab.c"
    break;


#line 1983 "./build/lrparser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 247 "./src/lrparser.y"


int main() {
    /* #ifdef YYDEBUG
        yydebug = 1;
    #endif */
    yyparse(); // 执行语法分析过程

    return 0;
}

