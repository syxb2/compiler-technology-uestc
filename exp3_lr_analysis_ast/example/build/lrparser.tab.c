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
#line 1 "./lrparser.y"

    #include <stdio.h>
    #include "ast.h"
    int yylex(void);
    void yyerror(char *s);
    extern int type;

#line 79 "./build/lrparser.tab.c"

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

#include "lrparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_num_INT = 3,                    /* num_INT  */
  YYSYMBOL_Y_INT = 4,                      /* Y_INT  */
  YYSYMBOL_Y_VOID = 5,                     /* Y_VOID  */
  YYSYMBOL_Y_CONST = 6,                    /* Y_CONST  */
  YYSYMBOL_Y_IF = 7,                       /* Y_IF  */
  YYSYMBOL_Y_ELSE = 8,                     /* Y_ELSE  */
  YYSYMBOL_Y_WHILE = 9,                    /* Y_WHILE  */
  YYSYMBOL_Y_BREAK = 10,                   /* Y_BREAK  */
  YYSYMBOL_Y_CONTINUE = 11,                /* Y_CONTINUE  */
  YYSYMBOL_Y_FLOAT = 12,                   /* Y_FLOAT  */
  YYSYMBOL_Y_RETURN = 13,                  /* Y_RETURN  */
  YYSYMBOL_Y_ADD = 14,                     /* Y_ADD  */
  YYSYMBOL_Y_COMMA = 15,                   /* Y_COMMA  */
  YYSYMBOL_Y_DIV = 16,                     /* Y_DIV  */
  YYSYMBOL_Y_LPAR = 17,                    /* Y_LPAR  */
  YYSYMBOL_Y_SUB = 18,                     /* Y_SUB  */
  YYSYMBOL_Y_LSQUARE = 19,                 /* Y_LSQUARE  */
  YYSYMBOL_Y_MODULO = 20,                  /* Y_MODULO  */
  YYSYMBOL_Y_MUL = 21,                     /* Y_MUL  */
  YYSYMBOL_Y_NOT = 22,                     /* Y_NOT  */
  YYSYMBOL_Y_RPAR = 23,                    /* Y_RPAR  */
  YYSYMBOL_Y_RSQUARE = 24,                 /* Y_RSQUARE  */
  YYSYMBOL_Y_RBRACKET = 25,                /* Y_RBRACKET  */
  YYSYMBOL_Y_LESS = 26,                    /* Y_LESS  */
  YYSYMBOL_Y_LESSEQ = 27,                  /* Y_LESSEQ  */
  YYSYMBOL_Y_GREAT = 28,                   /* Y_GREAT  */
  YYSYMBOL_Y_GREATEQ = 29,                 /* Y_GREATEQ  */
  YYSYMBOL_Y_NOTEQ = 30,                   /* Y_NOTEQ  */
  YYSYMBOL_Y_EQ = 31,                      /* Y_EQ  */
  YYSYMBOL_Y_AND = 32,                     /* Y_AND  */
  YYSYMBOL_Y_OR = 33,                      /* Y_OR  */
  YYSYMBOL_Y_ASSIGN = 34,                  /* Y_ASSIGN  */
  YYSYMBOL_Y_LBRACKET = 35,                /* Y_LBRACKET  */
  YYSYMBOL_Y_SEMICOLON = 36,               /* Y_SEMICOLON  */
  YYSYMBOL_num_FLOAT = 37,                 /* num_FLOAT  */
  YYSYMBOL_Y_ID = 38,                      /* Y_ID  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_CompUnit = 41,                  /* CompUnit  */
  YYSYMBOL_Decl = 42,                      /* Decl  */
  YYSYMBOL_VarDecl = 43,                   /* VarDecl  */
  YYSYMBOL_VarDecls = 44,                  /* VarDecls  */
  YYSYMBOL_VarDef = 45,                    /* VarDef  */
  YYSYMBOL_InitVal = 46,                   /* InitVal  */
  YYSYMBOL_InitVals = 47,                  /* InitVals  */
  YYSYMBOL_ConstDecl = 48,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 49,                 /* ConstDefs  */
  YYSYMBOL_ConstDef = 50,                  /* ConstDef  */
  YYSYMBOL_ConstExps = 51,                 /* ConstExps  */
  YYSYMBOL_ConstInitVal = 52,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 53,             /* ConstInitVals  */
  YYSYMBOL_ConstExp = 54,                  /* ConstExp  */
  YYSYMBOL_FuncDef = 55,                   /* FuncDef  */
  YYSYMBOL_FuncParams = 56,                /* FuncParams  */
  YYSYMBOL_FuncParam = 57,                 /* FuncParam  */
  YYSYMBOL_Type = 58,                      /* Type  */
  YYSYMBOL_Stmt = 59,                      /* Stmt  */
  YYSYMBOL_Stmt1 = 60,                     /* Stmt1  */
  YYSYMBOL_Block = 61,                     /* Block  */
  YYSYMBOL_BlockItems = 62,                /* BlockItems  */
  YYSYMBOL_BlockItem = 63,                 /* BlockItem  */
  YYSYMBOL_RelExp = 64,                    /* RelExp  */
  YYSYMBOL_EqExp = 65,                     /* EqExp  */
  YYSYMBOL_LAndExp = 66,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 67,                    /* LOrExp  */
  YYSYMBOL_Exp = 68,                       /* Exp  */
  YYSYMBOL_AddExp = 69,                    /* AddExp  */
  YYSYMBOL_MulExp = 70,                    /* MulExp  */
  YYSYMBOL_UnaryExp = 71,                  /* UnaryExp  */
  YYSYMBOL_CallParams = 72,                /* CallParams  */
  YYSYMBOL_PrimaryExp = 73,                /* PrimaryExp  */
  YYSYMBOL_LVal = 74,                      /* LVal  */
  YYSYMBOL_ArraySubscripts = 75            /* ArraySubscripts  */
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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

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
       0,    30,    30,    33,    34,    35,    36,    37,    38,    41,
      42,    45,    46,    49,    50,    53,    54,    55,    56,    57,
      58,    59,    62,    63,    64,    65,    66,    67,    70,    73,
      74,    77,    78,    81,    82,    85,    86,    89,    90,    91,
      92,    95,    96,    99,   102,   103,   106,   107,   110,   111,
     112,   113,   116,   117,   118,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   154,   155,   158,   159,   162,
     163,   166,   167,   168,   169,   170,   173,   174,   175,   178,
     179,   182,   183,   186,   190,   191,   192,   195,   196,   197,
     198,   201,   202,   203,   204,   205,   206,   209,   210,   213,
     214,   215,   216,   219,   220,   223,   224
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
  "\"end of file\"", "error", "\"invalid token\"", "num_INT", "Y_INT",
  "Y_VOID", "Y_CONST", "Y_IF", "Y_ELSE", "Y_WHILE", "Y_BREAK",
  "Y_CONTINUE", "Y_FLOAT", "Y_RETURN", "Y_ADD", "Y_COMMA", "Y_DIV",
  "Y_LPAR", "Y_SUB", "Y_LSQUARE", "Y_MODULO", "Y_MUL", "Y_NOT", "Y_RPAR",
  "Y_RSQUARE", "Y_RBRACKET", "Y_LESS", "Y_LESSEQ", "Y_GREAT", "Y_GREATEQ",
  "Y_NOTEQ", "Y_EQ", "Y_AND", "Y_OR", "Y_ASSIGN", "Y_LBRACKET",
  "Y_SEMICOLON", "num_FLOAT", "Y_ID", "$accept", "program", "CompUnit",
  "Decl", "VarDecl", "VarDecls", "VarDef", "InitVal", "InitVals",
  "ConstDecl", "ConstDefs", "ConstDef", "ConstExps", "ConstInitVal",
  "ConstInitVals", "ConstExp", "FuncDef", "FuncParams", "FuncParam",
  "Type", "Stmt", "Stmt1", "Block", "BlockItems", "BlockItem", "RelExp",
  "EqExp", "LAndExp", "LOrExp", "Exp", "AddExp", "MulExp", "UnaryExp",
  "CallParams", "PrimaryExp", "LVal", "ArraySubscripts", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,  -168,  -168,   119,  -168,    51,    25,    41,  -168,  -168,
      61,    61,    61,    16,     7,   382,   321,    18,  -168,  -168,
    -168,  -168,  -168,    52,    11,    34,    56,    14,    22,  -168,
     382,   382,   382,   382,  -168,    63,    87,     9,   145,  -168,
    -168,    99,   101,    75,  -168,   112,     9,   321,   181,   321,
    -168,    43,   121,  -168,   105,   133,   343,   130,     7,  -168,
       7,  -168,  -168,   148,  -168,  -168,   382,   149,   382,   382,
     382,   382,   382,   314,   382,  -168,   174,   186,    79,   382,
    -168,   141,   115,  -168,   182,   176,  -168,   212,  -168,   321,
     192,    84,  -168,  -168,   343,  -168,  -168,  -168,   206,  -168,
     145,   145,  -168,  -168,  -168,  -168,   220,   213,   214,   321,
     321,   382,  -168,  -168,   204,  -168,   119,   141,    -8,  -168,
    -168,   176,  -168,   103,  -168,  -168,   382,  -168,  -168,  -168,
     223,   230,   239,   242,   201,   224,   350,  -168,  -168,  -168,
    -168,   121,  -168,  -168,   236,   240,   227,    -1,  -168,  -168,
     241,    63,   101,   343,  -168,   243,  -168,  -168,  -168,   382,
     382,  -168,  -168,  -168,   228,  -168,  -168,  -168,   382,   229,
     251,  -168,   161,   237,   238,   247,   205,   249,  -168,   244,
     101,  -168,   382,   382,   382,   382,   276,   382,   382,   382,
     382,   312,  -168,  -168,  -168,  -168,  -168,   256,   257,   245,
     246,   376,  -168,   280,   283,   248,    57,  -168,  -168,  -168,
    -168,  -168,   382,   382,  -168,  -168,  -168,   259,   276,   276,
    -168,   382,   269,   273,  -168,  -168,  -168,  -168,  -168,   261,
     276,   312,  -168,   291,   292,  -168,   276,   276,  -168,  -168,
    -168,  -168
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    52,    54,     0,    53,    15,     0,     0,     6,    10,
       8,     9,     7,     0,     0,     0,     0,    17,     1,     2,
       3,     4,     5,    15,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,   122,   123,     0,    43,   104,   107,
     111,   120,   124,     0,    16,    22,   103,     0,     0,     0,
      20,    17,     0,    11,     0,     0,     0,     0,     0,    30,
       0,    29,   114,     0,   115,   116,     0,    35,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
      18,     0,     0,    46,     0,    16,    21,    13,    12,     0,
       0,     0,    33,    37,     0,    32,    31,   119,     0,    36,
     105,   106,   109,   110,   108,   112,   117,     0,     0,     0,
       0,     0,    25,    23,     0,    44,     0,     0,    48,    19,
      14,     0,    38,     0,    34,   126,     0,   113,   125,    28,
       0,    23,     0,     0,     0,     0,     0,    86,    56,    89,
       9,     0,    90,    58,     0,    87,     0,   120,    47,    45,
       0,     0,    50,     0,    39,     0,   118,    27,    26,     0,
       0,    66,    67,    69,     0,    85,    88,    57,     0,    49,
      41,    40,    96,    99,   101,     0,    91,     0,    68,     0,
      51,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    98,    97,   100,   102,     0,     0,     0,
       0,     0,    71,    62,    60,     0,   120,    92,    94,    93,
      95,    59,     0,     0,    81,    82,    84,     0,     0,     0,
      72,     0,     0,     0,    83,    63,    64,    65,    61,     0,
       0,     0,    70,    77,    73,    74,     0,     0,    78,    73,
      80,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,   184,  -106,  -168,   215,   -12,   -13,   191,  -101,
    -168,    74,    -4,   -85,   134,   288,  -168,  -168,   189,     1,
    -167,   -74,   -79,   162,  -168,    -6,    15,   122,  -153,   -31,
     -10,   156,   -15,   183,  -168,   -83,  -108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,     9,    54,    10,    76,    77,    11,
      27,    28,    17,    92,   155,    93,    12,    82,    83,    13,
     142,   203,   143,   144,   145,   172,   173,   174,   175,    45,
      46,    38,    39,   107,    40,    41,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      63,    24,   115,    44,    14,    37,   123,   177,   139,   124,
     152,   150,    78,   140,    25,    62,    73,    64,    65,    51,
       1,     2,    57,    68,   211,    18,    52,    69,     4,    58,
     151,   147,   196,   168,    80,    98,    85,    60,   149,   139,
      87,    19,   106,   108,   140,    26,    37,    53,   113,    84,
      59,    90,    47,    25,    23,   102,   103,   104,    61,   222,
     223,   180,   147,    99,   235,     1,     2,     3,   170,    48,
      15,    15,    55,     4,    73,    15,   121,    47,    29,    86,
     131,    37,    66,   146,    37,    16,    49,    29,    50,    30,
      56,   221,    31,    32,   111,   106,   129,    33,    30,     5,
      75,    31,    32,   206,   112,   164,    33,   204,   147,   122,
      43,    67,    34,    35,   146,   141,    73,    84,   153,    91,
      74,    34,    35,     1,     2,     1,     2,    79,   154,    24,
     116,     4,    95,     4,    96,   206,   206,   179,   117,   226,
     228,    88,    25,    37,   225,   227,   141,   206,   147,   176,
     176,   234,    15,   206,   206,   205,   233,   239,   241,     5,
     146,    70,   238,   240,    94,    71,    72,    89,    15,    50,
     217,    97,   176,   176,   176,   176,   114,   176,   176,   176,
     176,   207,   208,   209,   210,     1,     2,   205,   205,   109,
     229,   182,   183,     4,    20,    21,    22,   193,   194,   205,
     146,   110,   176,   176,    81,   205,   205,    29,     1,     2,
       3,   132,   119,   133,   134,   135,     4,   136,    30,    68,
     118,    31,    32,    69,   100,   101,    33,    52,    86,   137,
     125,   187,   188,   189,   190,   126,   127,   161,   128,   114,
     138,    34,    35,    29,     1,     2,     3,   132,   157,   133,
     134,   135,     4,   136,    30,   158,   159,    31,    32,   160,
     162,   165,    33,   167,   178,   169,   153,   151,   171,   184,
     186,   185,   191,   212,   213,   114,   138,    34,    35,    29,
     192,   214,   215,   197,   220,   198,   199,   200,   218,   201,
      30,   219,   230,    31,    32,   224,   231,   232,    33,   236,
     237,   130,   120,    36,   181,   148,   195,   166,     0,   156,
       0,   114,   202,    34,    35,    29,     0,    29,     0,   132,
       0,   133,   134,   135,    29,   136,    30,     0,    30,    31,
      32,    31,    32,     0,    33,    30,    33,   105,    31,    32,
       0,     0,     0,    33,     0,     0,    29,   114,   138,    34,
      35,    34,    35,    29,     0,     0,    43,    30,    34,    35,
      31,    32,     0,     0,    30,    33,     0,    31,    32,     0,
       0,     0,    33,     0,     0,     0,     0,     0,    91,    29,
      34,    35,     0,     0,     0,    29,   163,    34,    35,     0,
      30,     0,     0,    31,    32,     0,    30,     0,    33,    31,
      32,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,   216,    34,    35,     0,     0,     0,     0,    34,
      35
};

static const yytype_int16 yycheck[] =
{
      31,    13,    81,    16,     3,    15,    91,   160,   114,    94,
     118,    19,    43,   114,    13,    30,    17,    32,    33,    23,
       4,     5,    26,    14,   191,     0,    15,    18,    12,    15,
      38,   114,   185,    34,    47,    66,    49,    15,   117,   145,
      52,     0,    73,    74,   145,    38,    56,    36,    79,    48,
      36,    55,    34,    52,    38,    70,    71,    72,    36,   212,
     213,   169,   145,    67,   231,     4,     5,     6,   153,    17,
      19,    19,    38,    12,    17,    19,    89,    34,     3,    36,
     111,    91,    19,   114,    94,    34,    34,     3,    36,    14,
      34,    34,    17,    18,    15,   126,   109,    22,    14,    38,
      25,    17,    18,   186,    25,   136,    22,   186,   191,    25,
      35,    24,    37,    38,   145,   114,    17,   116,    15,    35,
      19,    37,    38,     4,     5,     4,     5,    15,    25,   141,
      15,    12,    58,    12,    60,   218,   219,   168,    23,   218,
     219,    36,   141,   153,   218,   219,   145,   230,   231,   159,
     160,   230,    19,   236,   237,   186,   230,   236,   237,    38,
     191,    16,   236,   237,    34,    20,    21,    34,    19,    36,
     201,    23,   182,   183,   184,   185,    35,   187,   188,   189,
     190,   187,   188,   189,   190,     4,     5,   218,   219,    15,
     221,    30,    31,    12,    10,    11,    12,   182,   183,   230,
     231,    15,   212,   213,    23,   236,   237,     3,     4,     5,
       6,     7,    36,     9,    10,    11,    12,    13,    14,    14,
      38,    17,    18,    18,    68,    69,    22,    15,    36,    25,
      24,    26,    27,    28,    29,    15,    23,    36,    24,    35,
      36,    37,    38,     3,     4,     5,     6,     7,    25,     9,
      10,    11,    12,    13,    14,    25,    17,    17,    18,    17,
      36,    25,    22,    36,    36,    24,    15,    38,    25,    32,
      23,    33,    23,    17,    17,    35,    36,    37,    38,     3,
      36,    36,    36,     7,    36,     9,    10,    11,     8,    13,
      14,     8,    23,    17,    18,    36,    23,    36,    22,     8,
       8,   110,    87,    15,   170,   116,   184,   145,    -1,   126,
      -1,    35,    36,    37,    38,     3,    -1,     3,    -1,     7,
      -1,     9,    10,    11,     3,    13,    14,    -1,    14,    17,
      18,    17,    18,    -1,    22,    14,    22,    23,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,     3,    35,    36,    37,
      38,    37,    38,     3,    -1,    -1,    35,    14,    37,    38,
      17,    18,    -1,    -1,    14,    22,    -1,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    35,     3,
      37,    38,    -1,    -1,    -1,     3,    36,    37,    38,    -1,
      14,    -1,    -1,    17,    18,    -1,    14,    -1,    22,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,    37,
      38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    12,    38,    40,    41,    42,    43,
      45,    48,    55,    58,    58,    19,    34,    51,     0,     0,
      41,    41,    41,    38,    45,    58,    38,    49,    50,     3,
      14,    17,    18,    22,    37,    38,    54,    69,    70,    71,
      73,    74,    75,    35,    46,    68,    69,    34,    17,    34,
      36,    51,    15,    36,    44,    38,    34,    51,    15,    36,
      15,    36,    71,    68,    71,    71,    19,    24,    14,    18,
      16,    20,    21,    17,    19,    25,    46,    47,    68,    15,
      46,    23,    56,    57,    58,    46,    36,    45,    36,    34,
      51,    35,    52,    54,    34,    50,    50,    23,    68,    51,
      70,    70,    71,    71,    71,    23,    68,    72,    68,    15,
      15,    15,    25,    68,    35,    61,    15,    23,    38,    36,
      44,    46,    25,    52,    52,    24,    15,    23,    24,    46,
      47,    68,     7,     9,    10,    11,    13,    25,    36,    42,
      48,    58,    59,    61,    62,    63,    68,    74,    57,    61,
      19,    38,    75,    15,    25,    53,    72,    25,    25,    17,
      17,    36,    36,    36,    68,    25,    62,    36,    34,    24,
      52,    25,    64,    65,    66,    67,    69,    67,    36,    68,
      75,    53,    30,    31,    32,    33,    23,    26,    27,    28,
      29,    23,    36,    65,    65,    66,    67,     7,     9,    10,
      11,    13,    36,    60,    61,    68,    74,    64,    64,    64,
      64,    59,    17,    17,    36,    36,    36,    68,     8,     8,
      36,    34,    67,    67,    36,    60,    61,    60,    61,    68,
      23,    23,    36,    60,    61,    59,     8,     8,    60,    61,
      60,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    41,    41,    42,
      42,    43,    43,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    46,    47,    48,
      48,    49,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    53,    53,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    64,    65,    65,    65,    66,
      66,    67,    67,    68,    69,    69,    69,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    72,    72,    73,
      73,    73,    73,    74,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     3,     4,     2,     3,     1,     3,     2,     4,     5,
       3,     4,     1,     3,     2,     3,     5,     5,     3,     4,
       4,     3,     3,     3,     4,     3,     4,     1,     2,     3,
       4,     2,     3,     1,     5,     6,     1,     3,     2,     4,
       3,     5,     1,     1,     1,     4,     1,     2,     1,     5,
       5,     7,     5,     7,     7,     7,     2,     2,     3,     2,
       4,     1,     2,     1,     5,     5,     7,     5,     7,     7,
       7,     2,     2,     3,     2,     3,     2,     1,     2,     1,
       1,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     4,     2,     2,     2,     1,     3,     3,
       1,     1,     1,     1,     1,     4,     4
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
#line 30 "./lrparser.y"
                       {showAst((yyvsp[-1].pAst),0);}
#line 1340 "./build/lrparser.tab.c"
    break;

  case 3: /* CompUnit: VarDef CompUnit  */
#line 33 "./lrparser.y"
                          {past l=newCompUnit((yyvsp[-1].pAst),NULL);l->right=(yyvsp[0].pAst);(yyval.pAst)=l;}
#line 1346 "./build/lrparser.tab.c"
    break;

  case 4: /* CompUnit: ConstDecl CompUnit  */
#line 34 "./lrparser.y"
                            {past l=newCompUnit((yyvsp[-1].pAst),NULL);l->right=(yyvsp[0].pAst);(yyval.pAst)=l;}
#line 1352 "./build/lrparser.tab.c"
    break;

  case 5: /* CompUnit: FuncDef CompUnit  */
#line 35 "./lrparser.y"
                          {past l=newCompUnit((yyvsp[-1].pAst),NULL);l->right=(yyvsp[0].pAst);(yyval.pAst)=l;}
#line 1358 "./build/lrparser.tab.c"
    break;

  case 6: /* CompUnit: Decl  */
#line 36 "./lrparser.y"
              {(yyval.pAst)=newCompUnit((yyvsp[0].pAst),NULL);}
#line 1364 "./build/lrparser.tab.c"
    break;

  case 7: /* CompUnit: FuncDef  */
#line 37 "./lrparser.y"
                {(yyval.pAst)=newCompUnit((yyvsp[0].pAst),NULL);}
#line 1370 "./build/lrparser.tab.c"
    break;

  case 8: /* CompUnit: VarDef  */
#line 38 "./lrparser.y"
               {(yyval.pAst)=newCompUnit((yyvsp[0].pAst),NULL);}
#line 1376 "./build/lrparser.tab.c"
    break;

  case 11: /* VarDecl: Type VarDef Y_SEMICOLON  */
#line 45 "./lrparser.y"
                                 {(yyval.pAst) = newDeclStmt(NULL, (yyvsp[-1].pAst));}
#line 1382 "./build/lrparser.tab.c"
    break;

  case 12: /* VarDecl: Type VarDef VarDecls Y_SEMICOLON  */
#line 46 "./lrparser.y"
                                           {(yyval.pAst) = newDeclStmt((yyvsp[-2].pAst), (yyvsp[-1].pAst));}
#line 1388 "./build/lrparser.tab.c"
    break;

  case 13: /* VarDecls: Y_COMMA VarDef  */
#line 49 "./lrparser.y"
                         {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1394 "./build/lrparser.tab.c"
    break;

  case 14: /* VarDecls: Y_COMMA VarDef VarDecls  */
#line 50 "./lrparser.y"
                                   {(yyval.pAst) = newDeclStmt1((yyvsp[-1].pAst), (yyvsp[0].pAst));}
#line 1400 "./build/lrparser.tab.c"
    break;

  case 15: /* VarDef: Y_ID  */
#line 53 "./lrparser.y"
             {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[0].id_name), NULL, NULL);}
#line 1406 "./build/lrparser.tab.c"
    break;

  case 16: /* VarDef: Y_ID Y_ASSIGN InitVal  */
#line 54 "./lrparser.y"
                               {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-2].id_name), NULL, (yyvsp[0].pAst));}
#line 1412 "./build/lrparser.tab.c"
    break;

  case 17: /* VarDef: Y_ID ConstExps  */
#line 55 "./lrparser.y"
                        {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-1].id_name), NULL, NULL); }
#line 1418 "./build/lrparser.tab.c"
    break;

  case 18: /* VarDef: Y_ID ConstExps Y_ASSIGN InitVal  */
#line 56 "./lrparser.y"
                                         {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-3].id_name), NULL, (yyvsp[0].pAst)); }
#line 1424 "./build/lrparser.tab.c"
    break;

  case 19: /* VarDef: Type Y_ID Y_ASSIGN InitVal Y_SEMICOLON  */
#line 57 "./lrparser.y"
                                               {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-3].id_name), NULL, (yyvsp[-1].pAst));}
#line 1430 "./build/lrparser.tab.c"
    break;

  case 20: /* VarDef: Type Y_ID Y_SEMICOLON  */
#line 58 "./lrparser.y"
                              {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-1].id_name), NULL, NULL);}
#line 1436 "./build/lrparser.tab.c"
    break;

  case 21: /* VarDef: Type Y_ID ConstExps Y_SEMICOLON  */
#line 59 "./lrparser.y"
                                        {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-2].id_name), NULL, NULL);}
#line 1442 "./build/lrparser.tab.c"
    break;

  case 23: /* InitVal: Exp Y_COMMA Exp  */
#line 63 "./lrparser.y"
                          {(yyval.pAst) = newInitList((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1448 "./build/lrparser.tab.c"
    break;

  case 24: /* InitVal: Y_LBRACKET Y_RBRACKET  */
#line 64 "./lrparser.y"
                                {(yyval.pAst) = newInitList(NULL,NULL);}
#line 1454 "./build/lrparser.tab.c"
    break;

  case 25: /* InitVal: Y_LBRACKET Exp Y_RBRACKET  */
#line 65 "./lrparser.y"
                                    {(yyval.pAst) = newInitList((yyvsp[-1].pAst),NULL);}
#line 1460 "./build/lrparser.tab.c"
    break;

  case 26: /* InitVal: Y_LBRACKET Exp Y_COMMA Exp Y_RBRACKET  */
#line 66 "./lrparser.y"
                                                {(yyval.pAst) = newInitList((yyvsp[-3].pAst),(yyvsp[-1].pAst));}
#line 1466 "./build/lrparser.tab.c"
    break;

  case 27: /* InitVal: Y_LBRACKET InitVals Y_COMMA InitVals Y_RBRACKET  */
#line 67 "./lrparser.y"
                                                          {(yyval.pAst) = newInitList(newDeclStmt1((yyvsp[-3].pAst),(yyvsp[-1].pAst)),NULL) ; }
#line 1472 "./build/lrparser.tab.c"
    break;

  case 28: /* InitVals: InitVal Y_COMMA InitVal  */
#line 70 "./lrparser.y"
                                  {(yyval.pAst) = newDeclStmt1((yyvsp[-2].pAst),(yyvsp[0].pAst)); }
#line 1478 "./build/lrparser.tab.c"
    break;

  case 29: /* ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON  */
#line 73 "./lrparser.y"
                                             {(yyval.pAst) = newDeclStmt1(NULL, (yyvsp[-1].pAst));}
#line 1484 "./build/lrparser.tab.c"
    break;

  case 30: /* ConstDecl: Y_CONST Type ConstDefs Y_SEMICOLON  */
#line 74 "./lrparser.y"
                                               {(yyval.pAst) = newDeclStmt1(NULL, (yyvsp[-1].pAst));}
#line 1490 "./build/lrparser.tab.c"
    break;

  case 31: /* ConstDefs: ConstDef Y_COMMA ConstDef  */
#line 77 "./lrparser.y"
                                     {(yyval.pAst) = newDeclStmt1((yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1496 "./build/lrparser.tab.c"
    break;

  case 32: /* ConstDefs: ConstDefs Y_COMMA ConstDef  */
#line 78 "./lrparser.y"
                                       {(yyval.pAst) = newDeclStmt1((yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1502 "./build/lrparser.tab.c"
    break;

  case 33: /* ConstDef: Y_ID Y_ASSIGN ConstInitVal  */
#line 81 "./lrparser.y"
                                     {(yyval.pAst) = newVarDecl(get_conststype(type), type, 1, (yyvsp[-2].id_name), NULL, (yyvsp[0].pAst));}
#line 1508 "./build/lrparser.tab.c"
    break;

  case 34: /* ConstDef: Y_ID ConstExps Y_ASSIGN ConstInitVal  */
#line 82 "./lrparser.y"
                                                {(yyval.pAst) = newVarDecl(get_conststype(type), type, 1, (yyvsp[-3].id_name), NULL, (yyvsp[0].pAst)); }
#line 1514 "./build/lrparser.tab.c"
    break;

  case 35: /* ConstExps: Y_LSQUARE ConstExp Y_RSQUARE  */
#line 85 "./lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1520 "./build/lrparser.tab.c"
    break;

  case 36: /* ConstExps: Y_LSQUARE ConstExp Y_RSQUARE ConstExps  */
#line 86 "./lrparser.y"
                                                  {(yyval.pAst) = (yyvsp[-2].pAst); }
#line 1526 "./build/lrparser.tab.c"
    break;

  case 38: /* ConstInitVal: Y_LBRACKET Y_RBRACKET  */
#line 90 "./lrparser.y"
                                     {(yyval.pAst) = NULL; }
#line 1532 "./build/lrparser.tab.c"
    break;

  case 39: /* ConstInitVal: Y_LBRACKET ConstInitVal Y_RBRACKET  */
#line 91 "./lrparser.y"
                                                  {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1538 "./build/lrparser.tab.c"
    break;

  case 40: /* ConstInitVal: Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET  */
#line 92 "./lrparser.y"
                                                                {(yyval.pAst) = newInitList((yyvsp[-2].pAst),(yyvsp[-1].pAst)); }
#line 1544 "./build/lrparser.tab.c"
    break;

  case 41: /* ConstInitVals: Y_COMMA ConstInitVal  */
#line 95 "./lrparser.y"
                                    {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1550 "./build/lrparser.tab.c"
    break;

  case 42: /* ConstInitVals: Y_COMMA ConstInitVal ConstInitVals  */
#line 96 "./lrparser.y"
                                                   {(yyval.pAst) = newDeclStmt1((yyvsp[-1].pAst),(yyvsp[0].pAst)); }
#line 1556 "./build/lrparser.tab.c"
    break;

  case 44: /* FuncDef: Type Y_ID Y_LPAR Y_RPAR Block  */
#line 102 "./lrparser.y"
                                       {(yyval.pAst) = newFuncDecl(get_stype((yyvsp[-4].pAst)->ivalue), (yyvsp[-4].pAst)->ivalue,(yyvsp[-3].id_name), NULL, newCompoundStmt(NULL, (yyvsp[0].pAst)));}
#line 1562 "./build/lrparser.tab.c"
    break;

  case 45: /* FuncDef: Type Y_ID Y_LPAR FuncParams Y_RPAR Block  */
#line 103 "./lrparser.y"
                                                   {(yyval.pAst) = newFuncDecl(get_stype((yyvsp[-5].pAst)->ivalue), (yyvsp[-5].pAst)->ivalue, (yyvsp[-4].id_name), (yyvsp[-2].pAst), newCompoundStmt(NULL, (yyvsp[0].pAst)));}
#line 1568 "./build/lrparser.tab.c"
    break;

  case 47: /* FuncParams: FuncParams Y_COMMA FuncParam  */
#line 107 "./lrparser.y"
                                          {(yyval.pAst)=newDeclStmt1((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1574 "./build/lrparser.tab.c"
    break;

  case 48: /* FuncParam: Type Y_ID  */
#line 110 "./lrparser.y"
                     {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-1].pAst)->ivalue), (yyvsp[0].id_name), NULL, NULL);}
#line 1580 "./build/lrparser.tab.c"
    break;

  case 49: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE  */
#line 111 "./lrparser.y"
                                          {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-3].pAst)->ivalue), (yyvsp[-2].id_name), NULL, NULL);}
#line 1586 "./build/lrparser.tab.c"
    break;

  case 50: /* FuncParam: Type Y_ID ArraySubscripts  */
#line 112 "./lrparser.y"
                                      {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-2].pAst)->ivalue), (yyvsp[-1].id_name), NULL, NULL);}
#line 1592 "./build/lrparser.tab.c"
    break;

  case 51: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE ArraySubscripts  */
#line 113 "./lrparser.y"
                                                          {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-4].pAst)->ivalue), (yyvsp[-3].id_name), NULL, NULL);}
#line 1598 "./build/lrparser.tab.c"
    break;

  case 52: /* Type: Y_INT  */
#line 116 "./lrparser.y"
            {yylval.int_value = Y_INT;(yyval.pAst) = newType(Y_INT);}
#line 1604 "./build/lrparser.tab.c"
    break;

  case 53: /* Type: Y_FLOAT  */
#line 117 "./lrparser.y"
               {yylval.int_value = Y_FLOAT;(yyval.pAst) = newType(Y_FLOAT);}
#line 1610 "./build/lrparser.tab.c"
    break;

  case 54: /* Type: Y_VOID  */
#line 118 "./lrparser.y"
              {yylval.int_value = Y_VOID;(yyval.pAst) = newType(Y_VOID);}
#line 1616 "./build/lrparser.tab.c"
    break;

  case 55: /* Stmt: LVal Y_ASSIGN Exp Y_SEMICOLON  */
#line 121 "./lrparser.y"
                                    {(yyval.pAst) = newBinaryOper("=", Y_ASSIGN, (yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 1622 "./build/lrparser.tab.c"
    break;

  case 56: /* Stmt: Y_SEMICOLON  */
#line 122 "./lrparser.y"
                   {(yyval.pAst) = NULL;}
#line 1628 "./build/lrparser.tab.c"
    break;

  case 57: /* Stmt: Exp Y_SEMICOLON  */
#line 123 "./lrparser.y"
                       {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1634 "./build/lrparser.tab.c"
    break;

  case 59: /* Stmt: Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt  */
#line 125 "./lrparser.y"
                                         {(yyval.pAst) = newWhileStmt((yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1640 "./build/lrparser.tab.c"
    break;

  case 60: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Block  */
#line 126 "./lrparser.y"
                                       {(yyval.pAst) = newIfStmt((yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)), NULL);}
#line 1646 "./build/lrparser.tab.c"
    break;

  case 61: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Block Y_ELSE Block  */
#line 127 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), newCompoundStmt(NULL,(yyvsp[-2].pAst)), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1652 "./build/lrparser.tab.c"
    break;

  case 62: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt1  */
#line 128 "./lrparser.y"
                                       {(yyval.pAst) = newIfStmt((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL);}
#line 1658 "./build/lrparser.tab.c"
    break;

  case 63: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt1 Y_ELSE Stmt1  */
#line 129 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1664 "./build/lrparser.tab.c"
    break;

  case 64: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt1 Y_ELSE Block  */
#line 130 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), (yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1670 "./build/lrparser.tab.c"
    break;

  case 65: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Block Y_ELSE Stmt1  */
#line 131 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), newCompoundStmt(NULL,(yyvsp[-2].pAst)), (yyvsp[0].pAst));}
#line 1676 "./build/lrparser.tab.c"
    break;

  case 66: /* Stmt: Y_BREAK Y_SEMICOLON  */
#line 132 "./lrparser.y"
                           {(yyval.pAst) = newBreakStmt();}
#line 1682 "./build/lrparser.tab.c"
    break;

  case 67: /* Stmt: Y_CONTINUE Y_SEMICOLON  */
#line 133 "./lrparser.y"
                              {(yyval.pAst) = newContinueStmt();}
#line 1688 "./build/lrparser.tab.c"
    break;

  case 68: /* Stmt: Y_RETURN Exp Y_SEMICOLON  */
#line 134 "./lrparser.y"
                                {(yyval.pAst) = newReturnStmt((yyvsp[-1].pAst), NULL);}
#line 1694 "./build/lrparser.tab.c"
    break;

  case 69: /* Stmt: Y_RETURN Y_SEMICOLON  */
#line 135 "./lrparser.y"
                            {(yyval.pAst) = newReturnStmt(NULL, NULL);}
#line 1700 "./build/lrparser.tab.c"
    break;

  case 70: /* Stmt1: LVal Y_ASSIGN Exp Y_SEMICOLON  */
#line 138 "./lrparser.y"
                                     {(yyval.pAst) = newBinaryOper("=", Y_ASSIGN, (yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 1706 "./build/lrparser.tab.c"
    break;

  case 71: /* Stmt1: Y_SEMICOLON  */
#line 139 "./lrparser.y"
                   {(yyval.pAst) = NULL;}
#line 1712 "./build/lrparser.tab.c"
    break;

  case 72: /* Stmt1: Exp Y_SEMICOLON  */
#line 140 "./lrparser.y"
                       {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1718 "./build/lrparser.tab.c"
    break;

  case 74: /* Stmt1: Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt  */
#line 142 "./lrparser.y"
                                         {(yyval.pAst) = newWhileStmt((yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1724 "./build/lrparser.tab.c"
    break;

  case 75: /* Stmt1: Y_IF Y_LPAR LOrExp Y_RPAR Block  */
#line 143 "./lrparser.y"
                                       {(yyval.pAst) = newIfStmt((yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)), NULL);}
#line 1730 "./build/lrparser.tab.c"
    break;

  case 76: /* Stmt1: Y_IF Y_LPAR LOrExp Y_RPAR Block Y_ELSE Block  */
#line 144 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), newCompoundStmt(NULL,(yyvsp[-2].pAst)), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1736 "./build/lrparser.tab.c"
    break;

  case 77: /* Stmt1: Y_IF Y_LPAR LOrExp Y_RPAR Stmt1  */
#line 145 "./lrparser.y"
                                       {(yyval.pAst) = newIfStmt((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL);}
#line 1742 "./build/lrparser.tab.c"
    break;

  case 78: /* Stmt1: Y_IF Y_LPAR LOrExp Y_RPAR Stmt1 Y_ELSE Stmt1  */
#line 146 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1748 "./build/lrparser.tab.c"
    break;

  case 79: /* Stmt1: Y_IF Y_LPAR LOrExp Y_RPAR Stmt1 Y_ELSE Block  */
#line 147 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), (yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1754 "./build/lrparser.tab.c"
    break;

  case 80: /* Stmt1: Y_IF Y_LPAR LOrExp Y_RPAR Block Y_ELSE Stmt1  */
#line 148 "./lrparser.y"
                                                    {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst), newCompoundStmt(NULL,(yyvsp[-2].pAst)), (yyvsp[0].pAst));}
#line 1760 "./build/lrparser.tab.c"
    break;

  case 81: /* Stmt1: Y_BREAK Y_SEMICOLON  */
#line 149 "./lrparser.y"
                           {(yyval.pAst) = newBreakStmt();}
#line 1766 "./build/lrparser.tab.c"
    break;

  case 82: /* Stmt1: Y_CONTINUE Y_SEMICOLON  */
#line 150 "./lrparser.y"
                              {(yyval.pAst) = newContinueStmt();}
#line 1772 "./build/lrparser.tab.c"
    break;

  case 83: /* Stmt1: Y_RETURN Exp Y_SEMICOLON  */
#line 151 "./lrparser.y"
                                {(yyval.pAst) = newReturnStmt((yyvsp[-1].pAst), NULL);}
#line 1778 "./build/lrparser.tab.c"
    break;

  case 84: /* Stmt1: Y_RETURN Y_SEMICOLON  */
#line 152 "./lrparser.y"
                            {(yyval.pAst) = newReturnStmt(NULL, NULL);}
#line 1784 "./build/lrparser.tab.c"
    break;

  case 85: /* Block: Y_LBRACKET BlockItems Y_RBRACKET  */
#line 154 "./lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1790 "./build/lrparser.tab.c"
    break;

  case 86: /* Block: Y_LBRACKET Y_RBRACKET  */
#line 155 "./lrparser.y"
                              {(yyval.pAst) = NULL;}
#line 1796 "./build/lrparser.tab.c"
    break;

  case 87: /* BlockItems: BlockItem  */
#line 158 "./lrparser.y"
                      {(yyval.pAst) = newCompoundStmt((yyvsp[0].pAst), NULL);}
#line 1802 "./build/lrparser.tab.c"
    break;

  case 88: /* BlockItems: BlockItem BlockItems  */
#line 159 "./lrparser.y"
                                  {past l = newCompoundStmt((yyvsp[-1].pAst), NULL); l->right = (yyvsp[0].pAst); (yyval.pAst) = l;}
#line 1808 "./build/lrparser.tab.c"
    break;

  case 92: /* RelExp: AddExp Y_LESS RelExp  */
#line 167 "./lrparser.y"
                              {(yyval.pAst) = newBinaryOper("<", Y_LESS, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1814 "./build/lrparser.tab.c"
    break;

  case 93: /* RelExp: AddExp Y_GREAT RelExp  */
#line 168 "./lrparser.y"
                               {(yyval.pAst) = newBinaryOper(">", Y_GREAT, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1820 "./build/lrparser.tab.c"
    break;

  case 94: /* RelExp: AddExp Y_LESSEQ RelExp  */
#line 169 "./lrparser.y"
                                {(yyval.pAst) = newBinaryOper("<=", Y_LESSEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1826 "./build/lrparser.tab.c"
    break;

  case 95: /* RelExp: AddExp Y_GREATEQ RelExp  */
#line 170 "./lrparser.y"
                                 {(yyval.pAst) = newBinaryOper(">=", Y_GREATEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1832 "./build/lrparser.tab.c"
    break;

  case 97: /* EqExp: RelExp Y_EQ EqExp  */
#line 174 "./lrparser.y"
                          {(yyval.pAst) = newBinaryOper("==", Y_EQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1838 "./build/lrparser.tab.c"
    break;

  case 98: /* EqExp: RelExp Y_NOTEQ EqExp  */
#line 175 "./lrparser.y"
                             {(yyval.pAst) = newBinaryOper("!=", Y_NOTEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1844 "./build/lrparser.tab.c"
    break;

  case 100: /* LAndExp: EqExp Y_AND LAndExp  */
#line 179 "./lrparser.y"
                              {(yyval.pAst) = newBinaryOper("&&", Y_AND, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1850 "./build/lrparser.tab.c"
    break;

  case 102: /* LOrExp: LAndExp Y_OR LOrExp  */
#line 183 "./lrparser.y"
                             {(yyval.pAst) = newBinaryOper("||", Y_OR, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1856 "./build/lrparser.tab.c"
    break;

  case 105: /* AddExp: AddExp Y_ADD MulExp  */
#line 191 "./lrparser.y"
                           {(yyval.pAst) = newBinaryOper("+", Y_ADD, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1862 "./build/lrparser.tab.c"
    break;

  case 106: /* AddExp: AddExp Y_SUB MulExp  */
#line 192 "./lrparser.y"
                           {(yyval.pAst) = newBinaryOper("-", Y_SUB, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1868 "./build/lrparser.tab.c"
    break;

  case 108: /* MulExp: MulExp Y_MUL UnaryExp  */
#line 196 "./lrparser.y"
                             {(yyval.pAst) = newBinaryOper("*", Y_MUL, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1874 "./build/lrparser.tab.c"
    break;

  case 109: /* MulExp: MulExp Y_DIV UnaryExp  */
#line 197 "./lrparser.y"
                             {(yyval.pAst) = newBinaryOper("/", Y_DIV, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1880 "./build/lrparser.tab.c"
    break;

  case 110: /* MulExp: MulExp Y_MODULO UnaryExp  */
#line 198 "./lrparser.y"
                                {(yyval.pAst) = newBinaryOper("%", Y_MODULO, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1886 "./build/lrparser.tab.c"
    break;

  case 112: /* UnaryExp: LVal Y_LPAR Y_RPAR  */
#line 202 "./lrparser.y"
                          {(yyval.pAst) = newCallExp(NULL, 0, NULL, (yyvsp[-2].pAst), NULL);}
#line 1892 "./build/lrparser.tab.c"
    break;

  case 113: /* UnaryExp: LVal Y_LPAR CallParams Y_RPAR  */
#line 203 "./lrparser.y"
                                     {(yyval.pAst) = newCallExp(NULL, 0, NULL, (yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 1898 "./build/lrparser.tab.c"
    break;

  case 114: /* UnaryExp: Y_ADD UnaryExp  */
#line 204 "./lrparser.y"
                      {(yyval.pAst) = newBinaryOper("+", Y_ADD, NULL, (yyvsp[0].pAst));}
#line 1904 "./build/lrparser.tab.c"
    break;

  case 115: /* UnaryExp: Y_SUB UnaryExp  */
#line 205 "./lrparser.y"
                      {(yyval.pAst) = newBinaryOper("-", Y_SUB, NULL, (yyvsp[0].pAst));}
#line 1910 "./build/lrparser.tab.c"
    break;

  case 116: /* UnaryExp: Y_NOT UnaryExp  */
#line 206 "./lrparser.y"
                      {(yyval.pAst) = newBinaryOper("!", Y_NOT, NULL, (yyvsp[0].pAst));}
#line 1916 "./build/lrparser.tab.c"
    break;

  case 118: /* CallParams: Exp Y_COMMA CallParams  */
#line 210 "./lrparser.y"
                              {(yyval.pAst) = newDeclStmt1((yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1922 "./build/lrparser.tab.c"
    break;

  case 119: /* PrimaryExp: Y_LPAR Exp Y_RPAR  */
#line 213 "./lrparser.y"
                              {(yyval.pAst) = newParen((yyvsp[-1].pAst),NULL);}
#line 1928 "./build/lrparser.tab.c"
    break;

  case 121: /* PrimaryExp: num_INT  */
#line 215 "./lrparser.y"
               {(yyval.pAst) = newIntVal((yyvsp[0].int_value));}
#line 1934 "./build/lrparser.tab.c"
    break;

  case 122: /* PrimaryExp: num_FLOAT  */
#line 216 "./lrparser.y"
                 {(yyval.pAst) = newFloatVal((yyvsp[0].float_value));}
#line 1940 "./build/lrparser.tab.c"
    break;

  case 123: /* LVal: Y_ID  */
#line 219 "./lrparser.y"
           {(yyval.pAst) = newDeclRefExp((yyvsp[0].id_name), NULL, NULL);}
#line 1946 "./build/lrparser.tab.c"
    break;

  case 124: /* LVal: ArraySubscripts  */
#line 220 "./lrparser.y"
                      {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1952 "./build/lrparser.tab.c"
    break;

  case 125: /* ArraySubscripts: ArraySubscripts Y_LSQUARE Exp Y_RSQUARE  */
#line 223 "./lrparser.y"
                                                         {(yyval.pAst)=newArraySubscriptsExp((yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 1958 "./build/lrparser.tab.c"
    break;

  case 126: /* ArraySubscripts: Y_ID Y_LSQUARE Exp Y_RSQUARE  */
#line 224 "./lrparser.y"
                                              {(yyval.pAst)=newArraySubscriptsExp(newDeclRefExp((yyvsp[-3].id_name),NULL,NULL), (yyvsp[-1].pAst));}
#line 1964 "./build/lrparser.tab.c"
    break;


#line 1968 "./build/lrparser.tab.c"

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

#line 226 "./lrparser.y"


void yyerror(char *s)
{
    printf("%s",s);
}
int main()
{
	yyparse();
	return 0;
}
