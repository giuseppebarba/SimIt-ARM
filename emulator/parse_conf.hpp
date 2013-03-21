/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

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
     CPU = 262,
     MACH = 263,
     MEM = 264,
     MAP = 265,
     TYPE = 266,
     ADDR = 267,
     SIZE = 268,
     PRE = 269,
     FLE = 270,
     IMG = 271,
     ELF = 272,
     VAL = 273,
     REG = 274,
     STR = 275,
     PATH = 276,
     IDENT = 277,
     HCONST = 278,
     DCONST = 279
   };
#endif
#define SEMI 258
#define COLON 259
#define COMMA 260
#define EQUAL 261
#define CPU 262
#define MACH 263
#define MEM 264
#define MAP 265
#define TYPE 266
#define ADDR 267
#define SIZE 268
#define PRE 269
#define FLE 270
#define IMG 271
#define ELF 272
#define VAL 273
#define REG 274
#define STR 275
#define PATH 276
#define IDENT 277
#define HCONST 278
#define DCONST 279




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 27 "parse_conf.y"
typedef union YYSTYPE {
	unsigned uval;
	char *strval;
	std::vector<char>     *nnstr;
	struct membank_info_t *mem_t;
	struct preload_info_t *pre_t;
	struct reginit_info_t *reg_t;
} YYSTYPE;
/* Line 1275 of yacc.c.  */
#line 94 "parse_conf.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE conf_lval;



