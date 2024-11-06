/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_AST_TAB_H_INCLUDED
# define YY_YY_BUILD_AST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    num_FLOAT = 258,               /* num_FLOAT  */
    num_INT = 259,                 /* num_INT  */
    NUMBER = 260,                  /* NUMBER  */
    Y_ID = 261,                    /* Y_ID  */
    Y_INT = 262,                   /* Y_INT  */
    Y_FLOAT = 263,                 /* Y_FLOAT  */
    Y_VOID = 264,                  /* Y_VOID  */
    Y_CONST = 265,                 /* Y_CONST  */
    Y_IF = 266,                    /* Y_IF  */
    Y_ELSE = 267,                  /* Y_ELSE  */
    Y_WHILE = 268,                 /* Y_WHILE  */
    Y_BREAK = 269,                 /* Y_BREAK  */
    Y_CONTINUE = 270,              /* Y_CONTINUE  */
    Y_RETURN = 271,                /* Y_RETURN  */
    Y_ADD = 272,                   /* Y_ADD  */
    Y_SUB = 273,                   /* Y_SUB  */
    Y_MUL = 274,                   /* Y_MUL  */
    Y_DIV = 275,                   /* Y_DIV  */
    Y_MODULO = 276,                /* Y_MODULO  */
    Y_LESS = 277,                  /* Y_LESS  */
    Y_LESSEQ = 278,                /* Y_LESSEQ  */
    Y_GREAT = 279,                 /* Y_GREAT  */
    Y_GREATEQ = 280,               /* Y_GREATEQ  */
    Y_NOTEQ = 281,                 /* Y_NOTEQ  */
    Y_EQ = 282,                    /* Y_EQ  */
    Y_NOT = 283,                   /* Y_NOT  */
    Y_AND = 284,                   /* Y_AND  */
    Y_OR = 285,                    /* Y_OR  */
    Y_ASSIGN = 286,                /* Y_ASSIGN  */
    Y_LPAR = 287,                  /* Y_LPAR  */
    Y_RPAR = 288,                  /* Y_RPAR  */
    Y_LBRACKET = 289,              /* Y_LBRACKET  */
    Y_RBRACKET = 290,              /* Y_RBRACKET  */
    Y_LSQUARE = 291,               /* Y_LSQUARE  */
    Y_RSQUARE = 292,               /* Y_RSQUARE  */
    Y_COMMA = 293,                 /* Y_COMMA  */
    Y_SEMICOLON = 294              /* Y_SEMICOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD_AST_TAB_H_INCLUDED  */
