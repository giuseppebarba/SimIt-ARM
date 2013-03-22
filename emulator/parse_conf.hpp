
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEMI = 258,
     COLON = 259,
     COMMA = 260,
     EQUAL = 261,
     STR = 262,
     PATH = 263,
     IDENT = 264,
     HCONST = 265,
     DCONST = 266,
     ELF = 267,
     IMG = 268,
     VAL = 269,
     PRE = 270,
     REG = 271,
     ADDR = 272,
     CPU = 273,
     MACH = 274,
     MAP = 275,
     MEM = 276,
     TYPE = 277,
     SIZE = 278
   };
#endif
/* Tokens.  */
#define SEMI 258
#define COLON 259
#define COMMA 260
#define EQUAL 261
#define STR 262
#define PATH 263
#define IDENT 264
#define HCONST 265
#define DCONST 266
#define ELF 267
#define IMG 268
#define VAL 269
#define PRE 270
#define REG 271
#define ADDR 272
#define CPU 273
#define MACH 274
#define MAP 275
#define MEM 276
#define TYPE 277
#define SIZE 278




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 42 "parse_conf.y"

	unsigned uval;
	char *strval;
	std::vector<char>     *nnstr;
	struct membank_info_t *mem_t;
	struct preload_info_t *pre_t;
	struct reginit_info_t *reg_t;



/* Line 1676 of yacc.c  */
#line 109 "parse_conf.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE conf_lval;


