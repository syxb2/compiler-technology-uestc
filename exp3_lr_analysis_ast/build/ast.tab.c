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
#line 6 "./src/ast.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
extern int yylex(void);
extern void yyerror(char* s);
extern void yyrestart();

#line 80 "./build/ast.tab.c"

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

#include "ast.tab.h"
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
  YYSYMBOL_CompUnit = 40,                  /* CompUnit  */
  YYSYMBOL_Decl = 41,                      /* Decl  */
  YYSYMBOL_ConstDecl = 42,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 43,                 /* ConstDefs  */
  YYSYMBOL_ConstDef = 44,                  /* ConstDef  */
  YYSYMBOL_ConstExps = 45,                 /* ConstExps  */
  YYSYMBOL_ConstInitVal = 46,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 47,             /* ConstInitVals  */
  YYSYMBOL_VarDecl = 48,                   /* VarDecl  */
  YYSYMBOL_VarDecls = 49,                  /* VarDecls  */
  YYSYMBOL_VarDef = 50,                    /* VarDef  */
  YYSYMBOL_InitVal = 51,                   /* InitVal  */
  YYSYMBOL_InitVals = 52,                  /* InitVals  */
  YYSYMBOL_FuncDef = 53,                   /* FuncDef  */
  YYSYMBOL_FuncParams = 54,                /* FuncParams  */
  YYSYMBOL_FuncParam = 55,                 /* FuncParam  */
  YYSYMBOL_Block = 56,                     /* Block  */
  YYSYMBOL_BlockItems = 57,                /* BlockItems  */
  YYSYMBOL_BlockItem = 58,                 /* BlockItem  */
  YYSYMBOL_Stmt = 59,                      /* Stmt  */
  YYSYMBOL_Exp = 60,                       /* Exp  */
  YYSYMBOL_LVal = 61,                      /* LVal  */
  YYSYMBOL_ArraySubscripts = 62,           /* ArraySubscripts  */
  YYSYMBOL_PrimaryExp = 63,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 64,                  /* UnaryExp  */
  YYSYMBOL_CallParams = 65,                /* CallParams  */
  YYSYMBOL_MulExp = 66,                    /* MulExp  */
  YYSYMBOL_AddExp = 67,                    /* AddExp  */
  YYSYMBOL_RelExp = 68,                    /* RelExp  */
  YYSYMBOL_EqExp = 69,                     /* EqExp  */
  YYSYMBOL_LAndExp = 70,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 71,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 72,                  /* ConstExp  */
  YYSYMBOL_Type = 73                       /* Type  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

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
       0,    39,    39,    40,    41,    42,    46,    47,    51,    52,
      56,    57,    61,    62,    66,    67,    71,    72,    73,    74,
      78,    79,    83,    84,    88,    89,    93,    94,    95,    96,
     100,   101,   102,   103,   107,   108,   112,   113,   117,   118,
     122,   123,   124,   125,   129,   130,   134,   135,   139,   140,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   158,   162,   163,   167,   168,   172,   173,   174,   175,
     179,   180,   181,   182,   183,   184,   188,   189,   193,   194,
     195,   196,   200,   201,   202,   206,   207,   208,   209,   210,
     214,   215,   216,   220,   221,   225,   226,   230,   234,   235,
     236
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
  "Y_COMMA", "Y_SEMICOLON", "$accept", "CompUnit", "Decl", "ConstDecl",
  "ConstDefs", "ConstDef", "ConstExps", "ConstInitVal", "ConstInitVals",
  "VarDecl", "VarDecls", "VarDef", "InitVal", "InitVals", "FuncDef",
  "FuncParams", "FuncParam", "Block", "BlockItems", "BlockItem", "Stmt",
  "Exp", "LVal", "ArraySubscripts", "PrimaryExp", "UnaryExp", "CallParams",
  "MulExp", "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp",
  "Type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,  -110,  -110,  -110,    49,    25,    86,  -110,  -110,    86,
      59,    91,  -110,  -110,  -110,     3,    -6,   -16,     4,    75,
     243,    20,   281,    73,   100,  -110,    81,   261,    96,    91,
    -110,    91,  -110,  -110,  -110,    32,   281,   281,   281,   281,
      94,  -110,  -110,  -110,  -110,  -110,   104,   113,   117,    38,
    -110,   128,   113,   125,   243,    43,   132,  -110,   224,  -110,
    -110,   261,  -110,  -110,   264,   281,  -110,  -110,  -110,  -110,
     142,  -110,    47,   281,   281,   281,   281,   281,   139,  -110,
     117,    49,   136,   140,  -110,  -110,  -110,    51,  -110,  -110,
     149,   144,   157,  -110,  -110,   243,   160,  -110,  -110,  -110,
     104,   104,   164,   165,   159,   161,    13,  -110,  -110,  -110,
    -110,   166,   175,  -110,   163,   168,   100,  -110,  -110,    55,
    -110,  -110,  -110,   261,   169,   281,  -110,   170,   167,  -110,
     281,   281,  -110,  -110,  -110,   174,  -110,  -110,  -110,   281,
     170,   177,  -110,  -110,  -110,  -110,   141,   106,   179,   186,
     185,   192,  -110,   187,  -110,  -110,   281,   281,   281,   281,
     281,   281,   281,   281,   206,   206,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,   215,  -110,   206,  -110
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    98,    99,   100,     0,     0,     4,     6,     7,     5,
       0,     0,     1,     2,     3,    26,     0,     0,     0,     0,
       0,     0,     0,    28,     0,    22,     0,     0,     0,     0,
       9,     0,     8,    68,    69,    62,     0,     0,     0,     0,
       0,    27,    30,    67,    70,    78,    82,    61,     0,     0,
      38,     0,    97,     0,     0,    26,    24,    23,     0,    12,
      16,     0,    11,    10,     0,     0,    63,    73,    74,    75,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,    40,    14,    29,    25,    17,     0,    13,    71,
      76,     0,     0,    66,    32,     0,     0,    79,    80,    81,
      83,    84,     0,     0,     0,     0,     0,    45,    51,    48,
      53,     0,    46,    49,     0,    67,     0,    37,    39,     0,
      42,    15,    18,     0,     0,     0,    72,    64,    34,    33,
       0,     0,    57,    58,    60,     0,    44,    47,    52,     0,
      41,    20,    19,    77,    65,    35,    85,    90,    93,    95,
       0,     0,    59,     0,    43,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    86,    88,    87,
      89,    92,    91,    94,    96,    55,    54,     0,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,    98,   -69,  -110,  -110,    48,   -15,   -54,    89,  -110,
     176,   207,   -30,   107,  -110,  -110,   153,   -33,   124,  -110,
    -103,   -19,   -75,   -74,  -110,   -25,   118,    83,   -22,   -41,
       7,    76,  -109,   220,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    18,    19,    23,    59,   124,     8,
      26,    16,    41,    96,     9,    49,    50,   110,   111,   112,
     113,   114,    43,    66,    44,    45,    91,    46,    47,   147,
     148,   149,   150,    60,    10
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    42,    28,   115,    87,    52,    11,    88,   120,   109,
      72,    67,    68,    69,    27,    79,    33,    34,    35,    22,
      70,    42,   151,    51,    84,    12,     1,     2,     3,    36,
      37,    24,    25,    20,    21,    42,    52,   115,    22,    52,
      38,    29,    30,   109,    39,    90,    92,   117,    97,    98,
      99,   134,    48,   144,   174,     1,     2,     3,    33,    34,
      35,   175,   176,    64,    15,   128,   154,    65,   121,   141,
      80,    36,    37,    20,   178,    81,    42,    62,    22,    63,
     116,    94,    38,    51,    95,   122,    39,   135,   123,   115,
     115,   140,     1,     2,     3,     4,    17,    33,    34,    35,
      92,    52,   115,    54,    13,    55,    90,    14,   146,   146,
      36,    37,    31,    32,   116,   167,   168,   169,   170,    57,
     153,    38,    73,    74,    75,    39,    61,    40,    71,    76,
      77,   160,   161,    82,   146,   146,   146,   146,   146,   146,
     146,   146,    33,    34,    35,     1,     2,     3,     4,   102,
      78,   103,   104,   105,   106,    36,    37,    76,    77,   100,
     101,    83,   156,   157,   158,   159,    38,   171,   172,    24,
      39,   119,    78,   107,    93,    22,   126,   108,    33,    34,
      35,     1,     2,     3,     4,   102,   125,   103,   104,   105,
     106,    36,    37,   127,   129,   130,   131,   132,   139,   133,
     136,   138,    38,   142,    95,    65,    39,   162,    78,    33,
      34,    35,   152,   108,   123,   163,   102,   164,   103,   104,
     105,   106,    36,    37,   165,   166,   177,    33,    34,    35,
     155,    56,    85,    38,   118,   145,   137,    39,   173,    78,
      36,    37,    53,   143,   108,     0,    33,    34,    35,     0,
       0,    38,     0,     0,     0,    39,     0,    58,    86,    36,
      37,     0,     0,     0,    33,    34,    35,    33,    34,    35,
      38,     0,     0,     0,    39,     0,    40,    36,    37,     0,
      36,    37,     0,     0,    33,    34,    35,     0,    38,     0,
       0,    38,    39,     0,    58,    39,    89,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      22,    20,    17,    78,    58,    27,     4,    61,    82,    78,
      40,    36,    37,    38,    30,    48,     3,     4,     5,    35,
      39,    40,   131,    21,    54,     0,     6,     7,     8,    16,
      17,    37,    38,    30,    31,    54,    58,   112,    35,    61,
      27,    37,    38,   112,    31,    64,    65,    80,    73,    74,
      75,    38,    32,   127,   163,     6,     7,     8,     3,     4,
       5,   164,   165,    31,     5,    95,   140,    35,    83,   123,
      32,    16,    17,    30,   177,    37,    95,    29,    35,    31,
      78,    34,    27,    81,    37,    34,    31,   106,    37,   164,
     165,    36,     6,     7,     8,     9,     5,     3,     4,     5,
     119,   123,   177,    30,     6,     5,   125,     9,   130,   131,
      16,    17,    37,    38,   112,   156,   157,   158,   159,    38,
     139,    27,    18,    19,    20,    31,    30,    33,    34,    16,
      17,    25,    26,     5,   156,   157,   158,   159,   160,   161,
     162,   163,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    12,    13,    14,    15,    16,    17,    16,    17,    76,
      77,    36,    21,    22,    23,    24,    27,   160,   161,    37,
      31,    35,    33,    34,    32,    35,    32,    38,     3,     4,
       5,     6,     7,     8,     9,    10,    37,    12,    13,    14,
      15,    16,    17,    36,    34,    31,    31,    38,    30,    38,
      34,    38,    27,    34,    37,    35,    31,    28,    33,     3,
       4,     5,    38,    38,    37,    29,    10,    32,    12,    13,
      14,    15,    16,    17,    32,    38,    11,     3,     4,     5,
     141,    24,    56,    27,    81,   128,   112,    31,   162,    33,
      16,    17,    22,   125,    38,    -1,     3,     4,     5,    -1,
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
       0,     6,     7,     8,     9,    40,    41,    42,    48,    53,
      73,    73,     0,    40,    40,     5,    50,     5,    43,    44,
      30,    31,    35,    45,    37,    38,    49,    30,    45,    37,
      38,    37,    38,     3,     4,     5,    16,    17,    27,    31,
      33,    51,    60,    61,    63,    64,    66,    67,    32,    54,
      55,    73,    67,    72,    30,     5,    50,    38,    33,    46,
      72,    30,    44,    44,    31,    35,    62,    64,    64,    64,
      60,    34,    51,    18,    19,    20,    16,    17,    33,    56,
      32,    37,     5,    36,    51,    49,    34,    46,    46,    32,
      60,    65,    60,    32,    34,    37,    52,    64,    64,    64,
      66,    66,    10,    12,    13,    14,    15,    34,    38,    41,
      56,    57,    58,    59,    60,    61,    73,    56,    55,    35,
      62,    45,    34,    37,    47,    37,    32,    36,    51,    34,
      31,    31,    38,    38,    38,    60,    34,    57,    38,    30,
      36,    46,    34,    65,    62,    52,    67,    68,    69,    70,
      71,    71,    38,    60,    62,    47,    21,    22,    23,    24,
      25,    26,    28,    29,    32,    32,    38,    68,    68,    68,
      68,    69,    69,    70,    71,    59,    59,    11,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    40,    40,    41,    41,    42,    42,
      43,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      47,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      51,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    73,    73,
      73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     4,     4,
       3,     3,     3,     4,     3,     4,     1,     2,     3,     4,
       2,     3,     3,     4,     2,     3,     1,     3,     2,     4,
       1,     2,     3,     4,     2,     3,     5,     6,     1,     3,
       2,     4,     3,     5,     3,     2,     1,     2,     1,     1,
       4,     1,     2,     1,     5,     5,     7,     2,     2,     3,
       2,     1,     1,     2,     3,     4,     3,     1,     1,     1,
       1,     3,     4,     2,     2,     2,     1,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       1
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
  case 2: /* CompUnit: Decl CompUnit  */
#line 39 "./src/ast.y"
                        { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1290 "./build/ast.tab.c"
    break;

  case 3: /* CompUnit: FuncDef CompUnit  */
#line 40 "./src/ast.y"
                           { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1296 "./build/ast.tab.c"
    break;

  case 4: /* CompUnit: Decl  */
#line 41 "./src/ast.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1302 "./build/ast.tab.c"
    break;

  case 5: /* CompUnit: FuncDef  */
#line 42 "./src/ast.y"
                  { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1308 "./build/ast.tab.c"
    break;

  case 6: /* Decl: ConstDecl  */
#line 46 "./src/ast.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1314 "./build/ast.tab.c"
    break;

  case 7: /* Decl: VarDecl  */
#line 47 "./src/ast.y"
              { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1320 "./build/ast.tab.c"
    break;

  case 8: /* ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON  */
#line 51 "./src/ast.y"
                                             { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1326 "./build/ast.tab.c"
    break;

  case 9: /* ConstDecl: Y_CONST Type ConstDefs Y_SEMICOLON  */
#line 52 "./src/ast.y"
                                              { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1332 "./build/ast.tab.c"
    break;

  case 10: /* ConstDefs: ConstDef Y_COMMA ConstDef  */
#line 56 "./src/ast.y"
                                     { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1338 "./build/ast.tab.c"
    break;

  case 11: /* ConstDefs: ConstDefs Y_COMMA ConstDef  */
#line 57 "./src/ast.y"
                                      { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1344 "./build/ast.tab.c"
    break;

  case 12: /* ConstDef: Y_ID Y_ASSIGN ConstInitVal  */
#line 61 "./src/ast.y"
                                     { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-2].sValue), NULL, NULL), (yyvsp[0].pAst)); }
#line 1350 "./build/ast.tab.c"
    break;

  case 13: /* ConstDef: Y_ID ConstExps Y_ASSIGN ConstInitVal  */
#line 62 "./src/ast.y"
                                               { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-3].sValue), (yyvsp[-2].pAst), NULL), (yyvsp[0].pAst)); }
#line 1356 "./build/ast.tab.c"
    break;

  case 14: /* ConstExps: Y_LSQUARE ConstExp Y_RSQUARE  */
#line 66 "./src/ast.y"
                                        { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1362 "./build/ast.tab.c"
    break;

  case 15: /* ConstExps: Y_LSQUARE ConstExp Y_RSQUARE ConstExps  */
#line 67 "./src/ast.y"
                                                  { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1368 "./build/ast.tab.c"
    break;

  case 16: /* ConstInitVal: ConstExp  */
#line 71 "./src/ast.y"
                       { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1374 "./build/ast.tab.c"
    break;

  case 17: /* ConstInitVal: Y_LBRACKET Y_RBRACKET  */
#line 72 "./src/ast.y"
                                    { (yyval.pAst) = NULL; }
#line 1380 "./build/ast.tab.c"
    break;

  case 18: /* ConstInitVal: Y_LBRACKET ConstInitVal Y_RBRACKET  */
#line 73 "./src/ast.y"
                                                 { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1386 "./build/ast.tab.c"
    break;

  case 19: /* ConstInitVal: Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET  */
#line 74 "./src/ast.y"
                                                               { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[-1].pAst)); }
#line 1392 "./build/ast.tab.c"
    break;

  case 20: /* ConstInitVals: Y_COMMA ConstInitVal  */
#line 78 "./src/ast.y"
                                    { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1398 "./build/ast.tab.c"
    break;

  case 21: /* ConstInitVals: Y_COMMA ConstInitVal ConstInitVals  */
#line 79 "./src/ast.y"
                                                  { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1404 "./build/ast.tab.c"
    break;

  case 22: /* VarDecl: Type VarDef Y_SEMICOLON  */
#line 83 "./src/ast.y"
                                 { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), (yyvsp[-1].pAst), NULL); }
#line 1410 "./build/ast.tab.c"
    break;

  case 23: /* VarDecl: Type VarDef VarDecls Y_SEMICOLON  */
#line 84 "./src/ast.y"
                                          { (yyval.pAst) = ParaDecl((yyvsp[-3].pAst), (yyvsp[-2].pAst), (yyvsp[-1].pAst)); }
#line 1416 "./build/ast.tab.c"
    break;

  case 24: /* VarDecls: Y_COMMA VarDef  */
#line 88 "./src/ast.y"
                         { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1422 "./build/ast.tab.c"
    break;

  case 25: /* VarDecls: Y_COMMA VarDef VarDecls  */
#line 89 "./src/ast.y"
                                  { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1428 "./build/ast.tab.c"
    break;

  case 26: /* VarDef: Y_ID  */
#line 93 "./src/ast.y"
             { (yyval.pAst) = DeclRefExp((yyvsp[0].sValue), NULL, NULL); }
#line 1434 "./build/ast.tab.c"
    break;

  case 27: /* VarDef: Y_ID Y_ASSIGN InitVal  */
#line 94 "./src/ast.y"
                              { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-2].sValue), NULL, NULL), (yyvsp[0].pAst)); }
#line 1440 "./build/ast.tab.c"
    break;

  case 28: /* VarDef: Y_ID ConstExps  */
#line 95 "./src/ast.y"
                       { (yyval.pAst) = DeclRefExp((yyvsp[-1].sValue), (yyvsp[0].pAst), NULL); }
#line 1446 "./build/ast.tab.c"
    break;

  case 29: /* VarDef: Y_ID ConstExps Y_ASSIGN InitVal  */
#line 96 "./src/ast.y"
                                        { (yyval.pAst) = BinaryOper(Y_ASSIGN, DeclRefExp((yyvsp[-3].sValue), (yyvsp[-2].pAst), NULL), (yyvsp[0].pAst)); }
#line 1452 "./build/ast.tab.c"
    break;

  case 30: /* InitVal: Exp  */
#line 100 "./src/ast.y"
             { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1458 "./build/ast.tab.c"
    break;

  case 31: /* InitVal: Y_LBRACKET Y_RBRACKET  */
#line 101 "./src/ast.y"
                               { (yyval.pAst) = NULL; }
#line 1464 "./build/ast.tab.c"
    break;

  case 32: /* InitVal: Y_LBRACKET InitVal Y_RBRACKET  */
#line 102 "./src/ast.y"
                                       { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1470 "./build/ast.tab.c"
    break;

  case 33: /* InitVal: Y_LBRACKET InitVal InitVals Y_RBRACKET  */
#line 103 "./src/ast.y"
                                                { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[-1].pAst)); }
#line 1476 "./build/ast.tab.c"
    break;

  case 34: /* InitVals: Y_COMMA InitVal  */
#line 107 "./src/ast.y"
                          { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1482 "./build/ast.tab.c"
    break;

  case 35: /* InitVals: Y_COMMA InitVal InitVals  */
#line 108 "./src/ast.y"
                                   { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1488 "./build/ast.tab.c"
    break;

  case 36: /* FuncDef: Type Y_ID Y_LPAR Y_RPAR Block  */
#line 112 "./src/ast.y"
                                       { (yyval.pAst) = FuncDef((yyvsp[-4].pAst), (yyvsp[-3].sValue), NULL, (yyvsp[0].pAst)); }
#line 1494 "./build/ast.tab.c"
    break;

  case 37: /* FuncDef: Type Y_ID Y_LPAR FuncParams Y_RPAR Block  */
#line 113 "./src/ast.y"
                                                  { (yyval.pAst) = FuncDef((yyvsp[-5].pAst), (yyvsp[-4].sValue), (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1500 "./build/ast.tab.c"
    break;

  case 38: /* FuncParams: FuncParam  */
#line 117 "./src/ast.y"
                      { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1506 "./build/ast.tab.c"
    break;

  case 39: /* FuncParams: FuncParams Y_COMMA FuncParam  */
#line 118 "./src/ast.y"
                                         { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1512 "./build/ast.tab.c"
    break;

  case 40: /* FuncParam: Type Y_ID  */
#line 122 "./src/ast.y"
                     { (yyval.pAst) = ParaDecl((yyvsp[-1].pAst), DeclRefExp((yyvsp[0].sValue), NULL, NULL), NULL); }
#line 1518 "./build/ast.tab.c"
    break;

  case 41: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE  */
#line 123 "./src/ast.y"
                                         { (yyval.pAst) = ParaDecl((yyvsp[-3].pAst), DeclRefExp((yyvsp[-2].sValue), NULL, NULL), NULL); }
#line 1524 "./build/ast.tab.c"
    break;

  case 42: /* FuncParam: Type Y_ID ArraySubscripts  */
#line 124 "./src/ast.y"
                                     { (yyval.pAst) = ParaDecl((yyvsp[-2].pAst), DeclRefExp((yyvsp[-1].sValue), (yyvsp[0].pAst), NULL), NULL); }
#line 1530 "./build/ast.tab.c"
    break;

  case 43: /* FuncParam: Type Y_ID Y_LSQUARE Y_RSQUARE ArraySubscripts  */
#line 125 "./src/ast.y"
                                                         { (yyval.pAst) = ParaDecl((yyvsp[-4].pAst), DeclRefExp((yyvsp[-3].sValue), (yyvsp[0].pAst), NULL), NULL); }
#line 1536 "./build/ast.tab.c"
    break;

  case 44: /* Block: Y_LBRACKET BlockItems Y_RBRACKET  */
#line 129 "./src/ast.y"
                                        { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1542 "./build/ast.tab.c"
    break;

  case 45: /* Block: Y_LBRACKET Y_RBRACKET  */
#line 130 "./src/ast.y"
                             { (yyval.pAst) = NULL; }
#line 1548 "./build/ast.tab.c"
    break;

  case 46: /* BlockItems: BlockItem  */
#line 134 "./src/ast.y"
                      { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1554 "./build/ast.tab.c"
    break;

  case 47: /* BlockItems: BlockItem BlockItems  */
#line 135 "./src/ast.y"
                                 { (yyval.pAst) = CompoundStmt((yyvsp[-1].pAst), (yyvsp[0].pAst)); }
#line 1560 "./build/ast.tab.c"
    break;

  case 48: /* BlockItem: Decl  */
#line 139 "./src/ast.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1566 "./build/ast.tab.c"
    break;

  case 49: /* BlockItem: Stmt  */
#line 140 "./src/ast.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1572 "./build/ast.tab.c"
    break;

  case 50: /* Stmt: LVal Y_ASSIGN Exp Y_SEMICOLON  */
#line 144 "./src/ast.y"
                                    { (yyval.pAst) = BinaryOper(Y_ASSIGN, (yyvsp[-3].pAst), (yyvsp[-1].pAst)); }
#line 1578 "./build/ast.tab.c"
    break;

  case 51: /* Stmt: Y_SEMICOLON  */
#line 145 "./src/ast.y"
                  { (yyval.pAst) = NULL; }
#line 1584 "./build/ast.tab.c"
    break;

  case 52: /* Stmt: Exp Y_SEMICOLON  */
#line 146 "./src/ast.y"
                      { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1590 "./build/ast.tab.c"
    break;

  case 53: /* Stmt: Block  */
#line 147 "./src/ast.y"
            { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1596 "./build/ast.tab.c"
    break;

  case 54: /* Stmt: Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt  */
#line 148 "./src/ast.y"
                                        { (yyval.pAst) = WhileStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1602 "./build/ast.tab.c"
    break;

  case 55: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt  */
#line 149 "./src/ast.y"
                                     { (yyval.pAst) = IfStmt((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL); }
#line 1608 "./build/ast.tab.c"
    break;

  case 56: /* Stmt: Y_IF Y_LPAR LOrExp Y_RPAR Stmt Y_ELSE Stmt  */
#line 150 "./src/ast.y"
                                                 { (yyval.pAst) = IfStmt((yyvsp[-4].pAst), (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1614 "./build/ast.tab.c"
    break;

  case 57: /* Stmt: Y_BREAK Y_SEMICOLON  */
#line 151 "./src/ast.y"
                          { (yyval.pAst) = BreakStmt(); }
#line 1620 "./build/ast.tab.c"
    break;

  case 58: /* Stmt: Y_CONTINUE Y_SEMICOLON  */
#line 152 "./src/ast.y"
                             { (yyval.pAst) = ContinueStmt(); }
#line 1626 "./build/ast.tab.c"
    break;

  case 59: /* Stmt: Y_RETURN Exp Y_SEMICOLON  */
#line 153 "./src/ast.y"
                               { (yyval.pAst) = ReturnStmt((yyvsp[-1].pAst), NULL); }
#line 1632 "./build/ast.tab.c"
    break;

  case 60: /* Stmt: Y_RETURN Y_SEMICOLON  */
#line 154 "./src/ast.y"
                           { (yyval.pAst) = ReturnStmt(NULL, NULL); }
#line 1638 "./build/ast.tab.c"
    break;

  case 61: /* Exp: AddExp  */
#line 158 "./src/ast.y"
            { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1644 "./build/ast.tab.c"
    break;

  case 62: /* LVal: Y_ID  */
#line 162 "./src/ast.y"
           { (yyval.pAst) = DeclRefExp((yyvsp[0].sValue), NULL, NULL); }
#line 1650 "./build/ast.tab.c"
    break;

  case 63: /* LVal: Y_ID ArraySubscripts  */
#line 163 "./src/ast.y"
                           { (yyval.pAst) = DeclRefExp((yyvsp[-1].sValue), (yyvsp[0].pAst), NULL); }
#line 1656 "./build/ast.tab.c"
    break;

  case 64: /* ArraySubscripts: Y_LSQUARE Exp Y_RSQUARE  */
#line 167 "./src/ast.y"
                                         { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1662 "./build/ast.tab.c"
    break;

  case 65: /* ArraySubscripts: Y_LSQUARE Exp Y_RSQUARE ArraySubscripts  */
#line 168 "./src/ast.y"
                                                         { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1668 "./build/ast.tab.c"
    break;

  case 66: /* PrimaryExp: Y_LPAR Exp Y_RPAR  */
#line 172 "./src/ast.y"
                              { (yyval.pAst) = (yyvsp[-1].pAst); }
#line 1674 "./build/ast.tab.c"
    break;

  case 67: /* PrimaryExp: LVal  */
#line 173 "./src/ast.y"
                 { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1680 "./build/ast.tab.c"
    break;

  case 68: /* PrimaryExp: num_INT  */
#line 174 "./src/ast.y"
                    { (yyval.pAst) = newInt((yyvsp[0].iValue)); }
#line 1686 "./build/ast.tab.c"
    break;

  case 69: /* PrimaryExp: num_FLOAT  */
#line 175 "./src/ast.y"
                      { (yyval.pAst) = newFloat((yyvsp[0].fValue)); }
#line 1692 "./build/ast.tab.c"
    break;

  case 70: /* UnaryExp: PrimaryExp  */
#line 179 "./src/ast.y"
                     { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1698 "./build/ast.tab.c"
    break;

  case 71: /* UnaryExp: Y_ID Y_LPAR Y_RPAR  */
#line 180 "./src/ast.y"
                             { (yyval.pAst) = DeclRefExp((yyvsp[-2].sValue), NULL, NULL); }
#line 1704 "./build/ast.tab.c"
    break;

  case 72: /* UnaryExp: Y_ID Y_LPAR CallParams Y_RPAR  */
#line 181 "./src/ast.y"
                                        { (yyval.pAst) = DeclRefExp((yyvsp[-3].sValue), (yyvsp[-1].pAst), NULL); }
#line 1710 "./build/ast.tab.c"
    break;

  case 73: /* UnaryExp: Y_ADD UnaryExp  */
#line 182 "./src/ast.y"
                         { (yyval.pAst) = UnaryOper(Y_ADD, (yyvsp[0].pAst)); }
#line 1716 "./build/ast.tab.c"
    break;

  case 74: /* UnaryExp: Y_SUB UnaryExp  */
#line 183 "./src/ast.y"
                         { (yyval.pAst) = UnaryOper(Y_SUB, (yyvsp[0].pAst)); }
#line 1722 "./build/ast.tab.c"
    break;

  case 75: /* UnaryExp: Y_NOT UnaryExp  */
#line 184 "./src/ast.y"
                         { (yyval.pAst) = UnaryOper(Y_NOT, (yyvsp[0].pAst)); }
#line 1728 "./build/ast.tab.c"
    break;

  case 76: /* CallParams: Exp  */
#line 188 "./src/ast.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1734 "./build/ast.tab.c"
    break;

  case 77: /* CallParams: Exp Y_COMMA CallParams  */
#line 189 "./src/ast.y"
                                   { (yyval.pAst) = CompoundStmt((yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1740 "./build/ast.tab.c"
    break;

  case 78: /* MulExp: UnaryExp  */
#line 193 "./src/ast.y"
                 { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1746 "./build/ast.tab.c"
    break;

  case 79: /* MulExp: MulExp Y_MUL UnaryExp  */
#line 194 "./src/ast.y"
                              { (yyval.pAst) = BinaryOper(Y_MUL, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1752 "./build/ast.tab.c"
    break;

  case 80: /* MulExp: MulExp Y_DIV UnaryExp  */
#line 195 "./src/ast.y"
                              { (yyval.pAst) = BinaryOper(Y_DIV, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1758 "./build/ast.tab.c"
    break;

  case 81: /* MulExp: MulExp Y_MODULO UnaryExp  */
#line 196 "./src/ast.y"
                                 { (yyval.pAst) = BinaryOper(Y_MODULO, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1764 "./build/ast.tab.c"
    break;

  case 82: /* AddExp: MulExp  */
#line 200 "./src/ast.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1770 "./build/ast.tab.c"
    break;

  case 83: /* AddExp: AddExp Y_ADD MulExp  */
#line 201 "./src/ast.y"
                            { (yyval.pAst) = BinaryOper(Y_ADD, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1776 "./build/ast.tab.c"
    break;

  case 84: /* AddExp: AddExp Y_SUB MulExp  */
#line 202 "./src/ast.y"
                            { (yyval.pAst) = BinaryOper(Y_SUB, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1782 "./build/ast.tab.c"
    break;

  case 85: /* RelExp: AddExp  */
#line 206 "./src/ast.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1788 "./build/ast.tab.c"
    break;

  case 86: /* RelExp: AddExp Y_LESS RelExp  */
#line 207 "./src/ast.y"
                             { (yyval.pAst) = BinaryOper(Y_LESS, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1794 "./build/ast.tab.c"
    break;

  case 87: /* RelExp: AddExp Y_GREAT RelExp  */
#line 208 "./src/ast.y"
                              { (yyval.pAst) = BinaryOper(Y_GREAT, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1800 "./build/ast.tab.c"
    break;

  case 88: /* RelExp: AddExp Y_LESSEQ RelExp  */
#line 209 "./src/ast.y"
                               { (yyval.pAst) = BinaryOper(Y_LESSEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1806 "./build/ast.tab.c"
    break;

  case 89: /* RelExp: AddExp Y_GREATEQ RelExp  */
#line 210 "./src/ast.y"
                                { (yyval.pAst) = BinaryOper(Y_GREATEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1812 "./build/ast.tab.c"
    break;

  case 90: /* EqExp: RelExp  */
#line 214 "./src/ast.y"
              { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1818 "./build/ast.tab.c"
    break;

  case 91: /* EqExp: RelExp Y_EQ EqExp  */
#line 215 "./src/ast.y"
                         { (yyval.pAst) = BinaryOper(Y_EQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1824 "./build/ast.tab.c"
    break;

  case 92: /* EqExp: RelExp Y_NOTEQ EqExp  */
#line 216 "./src/ast.y"
                            { (yyval.pAst) = BinaryOper(Y_NOTEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1830 "./build/ast.tab.c"
    break;

  case 93: /* LAndExp: EqExp  */
#line 220 "./src/ast.y"
               { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1836 "./build/ast.tab.c"
    break;

  case 94: /* LAndExp: EqExp Y_AND LAndExp  */
#line 221 "./src/ast.y"
                             { (yyval.pAst) = BinaryOper(Y_AND, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1842 "./build/ast.tab.c"
    break;

  case 95: /* LOrExp: LAndExp  */
#line 225 "./src/ast.y"
                { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1848 "./build/ast.tab.c"
    break;

  case 96: /* LOrExp: LAndExp Y_OR LOrExp  */
#line 226 "./src/ast.y"
                            { (yyval.pAst) = BinaryOper(Y_OR, (yyvsp[-2].pAst), (yyvsp[0].pAst)); }
#line 1854 "./build/ast.tab.c"
    break;

  case 97: /* ConstExp: AddExp  */
#line 230 "./src/ast.y"
                 { (yyval.pAst) = (yyvsp[0].pAst); }
#line 1860 "./build/ast.tab.c"
    break;

  case 98: /* Type: Y_INT  */
#line 234 "./src/ast.y"
            { (yyval.pAst) = newType(Y_INT); }
#line 1866 "./build/ast.tab.c"
    break;

  case 99: /* Type: Y_FLOAT  */
#line 235 "./src/ast.y"
              { (yyval.pAst) = newType(Y_FLOAT); }
#line 1872 "./build/ast.tab.c"
    break;

  case 100: /* Type: Y_VOID  */
#line 236 "./src/ast.y"
             { (yyval.pAst) = newType(Y_VOID); }
#line 1878 "./build/ast.tab.c"
    break;


#line 1882 "./build/ast.tab.c"

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

#line 239 "./src/ast.y"


int main() {
    while (yylex()) {
        yyparse(); // 执行语法分析过程
    }

    return 0;
}
