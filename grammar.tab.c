/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     L_STRING = 258,
     L_NUMBER = 259,
     L_REAL = 260,
     L_BASIC_TYPE = 261,
     L_TYPE_MODIFIER = 262,
     L_DEFINED_NAME = 263,
     L_IDENTIFIER = 264,
     L_EFUN = 265,
     L_INC = 266,
     L_DEC = 267,
     L_ASSIGN = 268,
     L_LAND = 269,
     L_LOR = 270,
     L_LSH = 271,
     L_RSH = 272,
     L_ORDER = 273,
     L_NOT = 274,
     L_IF = 275,
     L_ELSE = 276,
     L_SWITCH = 277,
     L_CASE = 278,
     L_DEFAULT = 279,
     L_RANGE = 280,
     L_DOT_DOT_DOT = 281,
     L_WHILE = 282,
     L_DO = 283,
     L_FOR = 284,
     L_FOREACH = 285,
     L_IN = 286,
     L_BREAK = 287,
     L_CONTINUE = 288,
     L_RETURN = 289,
     L_ARROW = 290,
     L_INHERIT = 291,
     L_COLON_COLON = 292,
     L_ARRAY_OPEN = 293,
     L_MAPPING_OPEN = 294,
     L_FUNCTION_OPEN = 295,
     L_NEW_FUNCTION_OPEN = 296,
     L_SSCANF = 297,
     L_CATCH = 298,
     L_PARSE_COMMAND = 299,
     L_TIME_EXPRESSION = 300,
     L_CLASS = 301,
     L_NEW = 302,
     L_PARAMETER = 303,
     LOWER_THAN_ELSE = 304,
     L_NE = 305,
     L_EQ = 306
   };
#endif
/* Tokens.  */
#define L_STRING 258
#define L_NUMBER 259
#define L_REAL 260
#define L_BASIC_TYPE 261
#define L_TYPE_MODIFIER 262
#define L_DEFINED_NAME 263
#define L_IDENTIFIER 264
#define L_EFUN 265
#define L_INC 266
#define L_DEC 267
#define L_ASSIGN 268
#define L_LAND 269
#define L_LOR 270
#define L_LSH 271
#define L_RSH 272
#define L_ORDER 273
#define L_NOT 274
#define L_IF 275
#define L_ELSE 276
#define L_SWITCH 277
#define L_CASE 278
#define L_DEFAULT 279
#define L_RANGE 280
#define L_DOT_DOT_DOT 281
#define L_WHILE 282
#define L_DO 283
#define L_FOR 284
#define L_FOREACH 285
#define L_IN 286
#define L_BREAK 287
#define L_CONTINUE 288
#define L_RETURN 289
#define L_ARROW 290
#define L_INHERIT 291
#define L_COLON_COLON 292
#define L_ARRAY_OPEN 293
#define L_MAPPING_OPEN 294
#define L_FUNCTION_OPEN 295
#define L_NEW_FUNCTION_OPEN 296
#define L_SSCANF 297
#define L_CATCH 298
#define L_PARSE_COMMAND 299
#define L_TIME_EXPRESSION 300
#define L_CLASS 301
#define L_NEW 302
#define L_PARAMETER 303
#define LOWER_THAN_ELSE 304
#define L_NE 305
#define L_EQ 306




/* Copy the first part of user declarations.  */
#line 3 "grammar.y"


#include "std.h"
#include "compiler.h"
#include "lex.h"
#include "scratchpad.h"

#include "lpc_incl.h"
#include "simul_efun.h"
#include "generate.h"

#line 13 "grammar.y.pre"
/*
 * This is the grammar definition of LPC, and its parse tree generator.
 */

/* down to one global :) 
   bits:
      SWITCH_CONTEXT     - we're inside a switch
      LOOP_CONTEXT       - we're inside a loop
      SWITCH_STRINGS     - a string case has been found
      SWITCH_NUMBERS     - a non-zero numeric case has been found
      SWITCH_RANGES      - a range has been found
      SWITCH_DEFAULT     - a default has been found
 */
int context;

/*
 * bison & yacc don't prototype this in y.tab.h
 */
int yyparse PROT((void));



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 113 "grammar.y"
{
    POINTER_INT pointer_int;
    int number;
    float real;
    char *string;
    int type;
    struct { short num_arg; char flags; } argument;
    ident_hash_elem_t *ihe;
    parse_node_t *node;
    function_context_t *contextp;
    struct {
	parse_node_t *node;
        char num;
    } decl; /* 5 */
    struct {
	char num_local;
	char max_num_locals; 
	short context; 
	short save_current_type; 
	short save_exact_types;
    } func_block; /* 8 */
}
/* Line 187 of yacc.c.  */
#line 255 "grammar.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 268 "grammar.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1905

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNRULES -- Number of states.  */
#define YYNSTATES  461

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    70,    60,    53,     2,
      64,    65,    59,    57,    67,    58,     2,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    63,
      56,     2,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    51,    69,    62,     2,     2,     2,
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
      45,    46,    47,    48,    49,    54,    55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    10,    11,    13,    18,    20,
      22,    23,    25,    27,    29,    31,    33,    35,    36,    37,
      47,    51,    53,    55,    57,    60,    63,    65,    69,    70,
      75,    76,    84,    86,    88,    90,    93,    95,    98,   102,
     104,   105,   107,   110,   112,   116,   117,   120,   123,   128,
     130,   131,   133,   137,   140,   145,   150,   152,   154,   156,
     157,   158,   164,   167,   172,   176,   180,   182,   186,   187,
     190,   193,   196,   198,   200,   202,   204,   206,   208,   210,
     213,   216,   217,   224,   225,   234,   235,   246,   248,   250,
     252,   254,   258,   259,   268,   269,   271,   273,   275,   276,
     287,   290,   293,   294,   298,   304,   307,   309,   311,   315,
     319,   323,   327,   331,   335,   339,   343,   347,   351,   355,
     359,   363,   367,   371,   373,   376,   379,   382,   384,   388,
     392,   396,   402,   406,   410,   414,   418,   422,   426,   430,
     434,   438,   442,   446,   450,   454,   458,   462,   466,   469,
     472,   475,   478,   481,   484,   487,   490,   492,   494,   496,
     498,   500,   502,   505,   509,   510,   512,   515,   517,   520,
     522,   526,   527,   529,   532,   534,   538,   542,   544,   546,
     548,   550,   552,   553,   559,   563,   570,   578,   587,   595,
     601,   608,   614,   619,   621,   625,   627,   628,   635,   639,
     645,   650,   655,   660,   662,   666,   667,   671,   679,   689,
     690,   694,   695,   699,   701,   703,   707,   711,   713,   716,
     720,   721,   725,   730,   735,   742,   747,   752,   759,   767,
     771,   775,   777,   780,   784,   788,   795,   796
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,    75,    -1,    75,    83,    76,    -1,    -1,
      -1,    63,    -1,    98,    36,   154,    63,    -1,     5,    -1,
       4,    -1,    -1,    59,    -1,   104,    -1,    63,    -1,     1,
      -1,     8,    -1,     9,    -1,    -1,    -1,    99,    80,    82,
      84,    64,    96,    65,    85,    81,    -1,    99,   102,    63,
      -1,    77,    -1,    90,    -1,    86,    -1,    98,    66,    -1,
      80,    82,    -1,    87,    -1,    87,    67,    88,    -1,    -1,
      89,    99,    88,    63,    -1,    -1,    98,    46,    82,    68,
      91,    89,    69,    -1,     9,    -1,     8,    -1,     6,    -1,
      46,     8,    -1,    93,    -1,    94,    80,    -1,    94,    80,
      92,    -1,    92,    -1,    -1,    97,    -1,    97,    26,    -1,
      95,    -1,    97,    67,    95,    -1,    -1,     7,    98,    -1,
      98,   101,    -1,    64,    94,    80,    65,    -1,    94,    -1,
      -1,   103,    -1,   103,    67,   102,    -1,    80,    82,    -1,
      80,    82,    13,   133,    -1,    68,   106,   112,    69,    -1,
     104,    -1,   118,    -1,   122,    -1,    -1,    -1,   106,    94,
     107,   111,    63,    -1,    80,    92,    -1,    80,    92,    13,
     133,    -1,    94,    80,    92,    -1,   109,    13,   133,    -1,
     108,    -1,   108,    67,   111,    -1,    -1,   113,   112,    -1,
       1,    63,    -1,   132,    63,    -1,   161,    -1,   114,    -1,
     116,    -1,   126,    -1,   134,    -1,   105,    -1,    63,    -1,
      32,    63,    -1,    33,    63,    -1,    -1,    27,    64,   132,
      65,   115,   113,    -1,    -1,    28,   117,   113,    27,    64,
     132,    65,    63,    -1,    -1,    29,    64,   125,    63,   124,
      63,   124,    65,   119,   113,    -1,     8,    -1,   109,    -1,
       9,    -1,   120,    -1,   120,    67,   120,    -1,    -1,    30,
      64,   121,    31,   133,    65,   123,   113,    -1,    -1,   132,
      -1,   124,    -1,   110,    -1,    -1,    22,    64,   132,    65,
     127,    68,   106,   129,   128,    69,    -1,   129,   128,    -1,
     113,   128,    -1,    -1,    23,   130,    66,    -1,    23,   130,
      25,   130,    66,    -1,    24,    66,    -1,   131,    -1,   154,
      -1,   131,    51,   131,    -1,   131,    52,   131,    -1,   131,
      53,   131,    -1,   131,    55,   131,    -1,   131,    54,   131,
      -1,   131,    18,   131,    -1,   131,    56,   131,    -1,   131,
      16,   131,    -1,   131,    17,   131,    -1,   131,    57,   131,
      -1,   131,    58,   131,    -1,   131,    59,   131,    -1,   131,
      60,   131,    -1,   131,    61,   131,    -1,    64,   131,    65,
      -1,     4,    -1,    58,     4,    -1,    19,     4,    -1,    62,
       4,    -1,   133,    -1,   132,    67,   133,    -1,   141,    13,
     133,    -1,     1,    13,   133,    -1,   133,    50,   133,    66,
     133,    -1,   133,    15,   133,    -1,   133,    14,   133,    -1,
     133,    51,   133,    -1,   133,    52,   133,    -1,   133,    53,
     133,    -1,   133,    55,   133,    -1,   133,    54,   133,    -1,
     133,    18,   133,    -1,   133,    56,   133,    -1,   133,    16,
     133,    -1,   133,    17,   133,    -1,   133,    57,   133,    -1,
     133,    58,   133,    -1,   133,    59,   133,    -1,   133,    60,
     133,    -1,   133,    61,   133,    -1,   100,   133,    -1,    11,
     141,    -1,    12,   141,    -1,    19,   133,    -1,    62,   133,
      -1,    58,   133,    -1,   141,    11,    -1,   141,    12,    -1,
     142,    -1,   148,    -1,   149,    -1,   150,    -1,    79,    -1,
      78,    -1,    34,    63,    -1,    34,   132,    63,    -1,    -1,
     137,    -1,   137,    67,    -1,   133,    -1,   133,    26,    -1,
     136,    -1,   137,    67,   136,    -1,    -1,   139,    -1,   139,
      67,    -1,   140,    -1,   139,    67,   140,    -1,   133,    66,
     133,    -1,   142,    -1,   158,    -1,     8,    -1,     9,    -1,
      48,    -1,    -1,    70,    64,   143,   132,    65,    -1,   142,
      35,    82,    -1,   142,    71,   132,    25,   132,    72,    -1,
     142,    71,    56,   132,    25,   132,    72,    -1,   142,    71,
      56,   132,    25,    56,   132,    72,    -1,   142,    71,   132,
      25,    56,   132,    72,    -1,   142,    71,   132,    25,    72,
      -1,   142,    71,    56,   132,    25,    72,    -1,   142,    71,
      56,   132,    72,    -1,   142,    71,   132,    72,    -1,   153,
      -1,    64,   132,    65,    -1,   146,    -1,    -1,     6,   144,
      64,    96,    65,   104,    -1,    41,    66,    65,    -1,    41,
      67,   137,    66,    65,    -1,    40,   132,    66,    65,    -1,
      39,   138,    72,    65,    -1,    38,   135,    69,    65,    -1,
     104,    -1,    64,   132,    65,    -1,    -1,    43,   147,   145,
      -1,    42,    64,   133,    67,   133,   152,    65,    -1,    44,
      64,   133,    67,   133,    67,   133,   152,    65,    -1,    -1,
      45,   151,   145,    -1,    -1,    67,   141,   152,    -1,   155,
      -1,   155,    -1,    64,   154,    65,    -1,   154,    57,   154,
      -1,     3,    -1,   155,     3,    -1,    82,    66,   133,    -1,
      -1,   157,    67,   156,    -1,   159,    64,   135,    65,    -1,
      47,    64,   135,    65,    -1,    47,    64,    46,     8,   157,
      65,    -1,     8,    64,   135,    65,    -1,   160,    64,   135,
      65,    -1,   142,    35,    82,    64,   135,    65,    -1,    64,
      59,   132,    65,    64,   135,    65,    -1,    10,    37,    82,
      -1,    10,    37,    47,    -1,     9,    -1,    37,    82,    -1,
       6,    37,    82,    -1,    82,    37,    82,    -1,    20,    64,
     132,    65,   113,   162,    -1,    -1,    21,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   200,   200,   204,   205,   208,   210,   220,   263,   271,
     280,   284,   292,   300,   305,   313,   318,   323,   341,   322,
     394,   399,   400,   401,   404,   412,   423,   424,   427,   429,
     434,   433,   481,   482,   500,   501,   520,   524,   532,   541,
     555,   560,   561,   575,   581,   592,   596,   604,   613,   621,
     623,   630,   631,   635,   643,   683,   693,   693,   693,   697,
     703,   702,   724,   731,   760,   772,   799,   805,   817,   821,
     828,   836,   849,   850,   851,   852,   853,   854,   860,   865,
     888,   902,   901,   917,   916,   932,   931,   957,   978,   984,
    1002,  1008,  1018,  1017,  1039,  1043,  1047,  1053,  1063,  1062,
    1096,  1103,  1111,  1119,  1127,  1142,  1159,  1170,  1187,  1192,
    1197,  1202,  1207,  1212,  1221,  1226,  1231,  1236,  1241,  1246,
    1251,  1256,  1261,  1266,  1271,  1276,  1281,  1289,  1294,  1302,
    1326,  1332,  1357,  1364,  1371,  1378,  1383,  1407,  1430,  1445,
    1490,  1528,  1533,  1538,  1690,  1785,  1866,  1871,  1967,  1989,
    2011,  2034,  2044,  2056,  2081,  2104,  2126,  2127,  2128,  2129,
    2130,  2131,  2135,  2142,  2164,  2168,  2173,  2181,  2186,  2194,
    2201,  2215,  2220,  2225,  2233,  2244,  2263,  2271,  2381,  2382,
    2421,  2438,  2444,  2443,  2475,  2489,  2496,  2501,  2509,  2517,
    2522,  2527,  2571,  2624,  2625,  2630,  2632,  2631,  2693,  2727,
    2817,  2836,  2841,  2849,  2854,  2863,  2862,  2878,  2888,  2900,
    2899,  2915,  2921,  2936,  2945,  2946,  2951,  2959,  2960,  2967,
    2979,  2983,  2993,  2998,  3006,  3042,  3115,  3179,  3206,  3228,
    3254,  3272,  3273,  3288,  3304,  3320,  3355,  3360
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_STRING", "L_NUMBER", "L_REAL",
  "L_BASIC_TYPE", "L_TYPE_MODIFIER", "L_DEFINED_NAME", "L_IDENTIFIER",
  "L_EFUN", "L_INC", "L_DEC", "L_ASSIGN", "L_LAND", "L_LOR", "L_LSH",
  "L_RSH", "L_ORDER", "L_NOT", "L_IF", "L_ELSE", "L_SWITCH", "L_CASE",
  "L_DEFAULT", "L_RANGE", "L_DOT_DOT_DOT", "L_WHILE", "L_DO", "L_FOR",
  "L_FOREACH", "L_IN", "L_BREAK", "L_CONTINUE", "L_RETURN", "L_ARROW",
  "L_INHERIT", "L_COLON_COLON", "L_ARRAY_OPEN", "L_MAPPING_OPEN",
  "L_FUNCTION_OPEN", "L_NEW_FUNCTION_OPEN", "L_SSCANF", "L_CATCH",
  "L_PARSE_COMMAND", "L_TIME_EXPRESSION", "L_CLASS", "L_NEW",
  "L_PARAMETER", "LOWER_THAN_ELSE", "'?'", "'|'", "'^'", "'&'", "L_NE",
  "L_EQ", "'<'", "'+'", "'-'", "'*'", "'%'", "'/'", "'~'", "';'", "'('",
  "')'", "':'", "','", "'{'", "'}'", "'$'", "'['", "']'", "$accept", "all",
  "program", "possible_semi_colon", "inheritance", "real", "number",
  "optional_star", "block_or_semi", "identifier", "def", "@1", "@2",
  "modifier_change", "member_name", "member_name_list", "member_list",
  "type_decl", "@3", "new_local_name", "atomic_type", "basic_type",
  "new_arg", "argument", "argument_list", "type_modifier_list", "type",
  "cast", "opt_basic_type", "name_list", "new_name", "block", "decl_block",
  "local_declarations", "@4", "new_local_def", "single_new_local_def",
  "single_new_local_def_with_init", "local_name_list", "statements",
  "statement", "while", "@5", "do", "@6", "for", "@7", "foreach_var",
  "foreach_vars", "foreach", "@8", "for_expr", "first_for_expr", "switch",
  "@9", "switch_block", "case", "case_label", "constant", "comma_expr",
  "expr0", "return", "expr_list", "expr_list_node", "expr_list2",
  "expr_list3", "expr_list4", "assoc_pair", "lvalue", "expr4", "@10",
  "@11", "expr_or_block", "catch", "@12", "sscanf", "parse_command",
  "time_expression", "@13", "lvalue_list", "string", "string_con1",
  "string_con2", "class_init", "opt_class_init", "function_call",
  "efun_override", "function_name", "cond", "optional_else_part", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      63,   124,    94,    38,   305,   306,    60,    43,    45,    42,
      37,    47,   126,    59,    40,    41,    58,    44,   123,   125,
      36,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    77,    78,    79,
      80,    80,    81,    81,    81,    82,    82,    84,    85,    83,
      83,    83,    83,    83,    86,    87,    88,    88,    89,    89,
      91,    90,    92,    92,    93,    93,    94,    95,    95,    95,
      96,    96,    96,    97,    97,    98,    98,    99,   100,   101,
     101,   102,   102,   103,   103,   104,   105,   105,   105,   106,
     107,   106,   108,   108,   109,   110,   111,   111,   112,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   115,   114,   117,   116,   119,   118,   120,   120,   120,
     121,   121,   123,   122,   124,   124,   125,   125,   127,   126,
     128,   128,   128,   129,   129,   129,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   139,   139,   140,   141,   142,   142,
     142,   142,   143,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   144,   142,   142,   142,
     142,   142,   142,   145,   145,   147,   146,   148,   149,   151,
     150,   152,   152,   153,   154,   154,   154,   155,   155,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   159,
     159,   160,   160,   160,   160,   161,   162,   162
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     0,     0,     1,     4,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     0,     0,     9,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     4,
       0,     7,     1,     1,     1,     2,     1,     2,     3,     1,
       0,     1,     2,     1,     3,     0,     2,     2,     4,     1,
       0,     1,     3,     2,     4,     4,     1,     1,     1,     0,
       0,     5,     2,     4,     3,     3,     1,     3,     0,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     6,     0,     8,     0,    10,     1,     1,     1,
       1,     3,     0,     8,     0,     1,     1,     1,     0,    10,
       2,     2,     0,     3,     5,     2,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     1,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     3,     0,     1,     2,     1,     2,     1,
       3,     0,     1,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     0,     5,     3,     6,     7,     8,     7,     5,
       6,     5,     4,     1,     3,     1,     0,     6,     3,     5,
       4,     4,     4,     1,     3,     0,     3,     7,     9,     0,
       3,     0,     3,     1,     1,     3,     3,     1,     2,     3,
       0,     3,     4,     4,     6,     4,     4,     6,     7,     3,
       3,     1,     2,     3,     3,     6,     0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    45,     1,    45,    21,     5,    23,    22,    50,
      10,    46,     6,     3,    34,     0,     0,    24,    36,    49,
      47,    11,     0,     0,    51,   217,     0,     0,   214,    35,
      16,     0,    15,    53,    20,    10,     0,     0,     7,   218,
      30,     0,     0,     0,    52,   215,   216,    28,     0,     9,
       8,   196,   179,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,   209,     0,   181,     0,
       0,     0,     0,   161,   160,     0,     0,    54,     0,   156,
     195,   157,   158,   159,   193,   213,   178,     0,     0,    40,
      53,    45,     0,     0,     0,     0,     0,     0,   149,   177,
     150,   151,   232,   167,     0,   169,   165,     0,     0,   172,
     174,     0,   127,     0,     0,     0,     0,     0,     0,     0,
     153,   152,    34,     0,     0,    10,     0,   182,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,    33,    32,    39,    10,    43,     0,
      41,    31,    50,    10,   130,   233,    40,     0,   230,   229,
     168,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,    59,   203,   206,     0,   210,     0,     0,    35,
       0,     0,   194,     0,   234,   133,   132,   141,   142,   139,
       0,   134,   135,   136,   138,   137,   140,   143,   144,   145,
     146,   147,   129,   184,     0,     0,     0,     0,    37,    18,
      42,     0,     0,    26,     0,     0,   225,   202,   170,   176,
     201,   175,   200,   128,     0,     0,     0,     0,     0,     0,
     220,   223,     0,    48,     0,     0,     0,     0,     0,   192,
     222,   226,    38,     0,    44,    25,    10,    29,     0,   199,
     211,   204,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,    78,    60,    56,    77,     0,     0,    73,    74,
      57,    58,    75,     0,    76,    72,     0,     0,     0,   183,
     131,     0,     0,   191,     0,   189,     0,    14,    13,    19,
      12,    27,   197,     0,     0,    70,     0,     0,     0,     0,
       0,     0,    79,    80,   162,     0,    10,    55,    69,    71,
       0,   224,     0,     0,   227,     0,   190,     0,     0,   185,
     211,   207,     0,     0,     0,     0,    10,     0,    97,    96,
       0,    95,    87,    89,    88,    90,     0,   163,     0,    66,
       0,   211,     0,   221,   228,     0,   186,   188,   212,     0,
      98,    81,     0,     0,     0,     0,     0,     0,    62,    10,
      61,     0,     0,   187,   236,     0,     0,     0,    64,    65,
       0,    91,     0,     0,    67,   208,   219,     0,   235,    59,
      82,     0,     0,    92,    63,   237,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    93,   123,     0,     0,     0,
       0,     0,   106,   107,   105,     0,     0,     0,     0,   125,
     124,   126,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
      99,   100,    86,   122,     0,     0,   115,   116,   113,   108,
     109,   110,   112,   111,   114,   117,   118,   119,   120,   121,
     104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    13,     5,    73,    74,   222,   299,    75,
       6,    42,   253,     7,   223,   224,    91,     8,    47,   156,
      18,   157,   158,   159,   160,     9,    10,    76,    20,    23,
      24,   274,   275,   238,   316,   349,   344,   338,   350,   276,
     415,   278,   376,   279,   309,   280,   418,   345,   346,   281,
     399,   339,   340,   282,   375,   416,   417,   411,   412,   283,
     112,   284,   104,   105,   106,   108,   109,   110,    78,    79,
     193,    94,   184,    80,   116,    81,    82,    83,   118,   304,
      84,    36,    85,   353,   287,    86,    87,    88,   285,   388
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -239
static const yytype_int16 yypact[] =
{
    -239,    67,   135,  -239,    89,  -239,   105,  -239,  -239,   117,
      71,  -239,  -239,  -239,  -239,    30,    42,  -239,  -239,  -239,
    -239,  -239,   259,   118,   121,  -239,    30,   -21,   202,   148,
    -239,   166,  -239,     7,  -239,    71,     1,    30,  -239,  -239,
    -239,  1703,   183,   259,  -239,  -239,  -239,  -239,   227,  -239,
    -239,   216,    -5,    -2,   223,   236,   236,  1703,   259,  1225,
     533,  1703,    83,   222,  -239,   238,  -239,   247,  -239,  1703,
    1703,   951,   253,  -239,  -239,   261,  1703,  1057,   199,    44,
    -239,  -239,  -239,  -239,  -239,   202,  -239,   255,   256,   120,
     292,    19,  1703,   259,   267,  1295,    37,  1363,  -239,    99,
    -239,  -239,  -239,  1196,   268,  -239,   271,   363,   269,   272,
    -239,   241,  1057,   277,  1703,  1703,    -3,  1703,    -3,  1019,
    -239,  -239,     6,   335,  1703,    71,   129,  -239,   259,  -239,
    1703,  1703,  1703,  1703,  1703,  1703,  1703,  1703,  1703,  1703,
    1703,  1703,  1703,  1703,  1703,  1703,  1703,  -239,  -239,  1703,
     259,  1431,  1295,  1295,  -239,  -239,  -239,    71,  -239,   279,
       5,  -239,    70,    71,  1057,  -239,   120,   280,  -239,  -239,
    -239,   281,  1087,  1703,   282,   603,   283,  1703,  -239,   249,
    1738,  1703,  -239,  -239,  -239,  1760,  -239,   341,   285,  -239,
     165,   293,  -239,  1703,  -239,   506,   436,   141,   141,   232,
     921,  1125,   311,  1338,   296,   296,   232,   198,   198,  -239,
    -239,  -239,  1057,   297,  1703,    72,   295,   308,   325,  -239,
    -239,   120,   259,   307,   299,   310,  -239,  -239,  -239,  1057,
    -239,  -239,  -239,  1057,   317,  1703,  1703,   170,   743,  1703,
    -239,  -239,   312,  -239,   176,  1703,  1295,    97,   393,  -239,
    -239,  -239,  -239,    23,  -239,  -239,    71,  -239,   315,  -239,
    1786,  -239,    17,   320,   323,   324,  -239,   326,   327,   329,
     330,  1499,  -239,  -239,  -239,  -239,   331,   813,  -239,  -239,
    -239,  -239,  -239,   126,  -239,  -239,  1808,   213,  1295,  -239,
    1057,   342,   463,  -239,  1703,  -239,   -20,  -239,  -239,  -239,
    -239,  -239,  -239,   236,   345,  -239,  1703,  1703,  1703,   883,
    1157,   171,  -239,  -239,  -239,   128,    71,  -239,  -239,  -239,
    1703,  -239,   259,   346,  -239,  1703,  -239,   -19,    93,  -239,
     339,  -239,   220,   229,   230,   398,    71,   413,  -239,  -239,
     364,   361,  -239,  -239,  -239,   372,   411,  -239,   325,   376,
     381,  1786,   379,  -239,  -239,   115,  -239,  -239,  -239,   883,
    -239,  -239,   382,   325,  1703,  1567,   171,  1703,   434,    71,
    -239,   383,  1703,  -239,   435,   390,   883,  1703,  -239,  1057,
     396,  -239,   989,  1703,  -239,  -239,  1057,   883,  -239,  -239,
    -239,   234,  1635,  -239,  1057,  -239,   151,   397,   405,   883,
      74,   395,   673,  -239,  -239,  -239,  -239,   458,   472,   473,
      74,     9,   572,   421,  -239,   673,   410,   673,   883,  -239,
    -239,  -239,   168,    74,  -239,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,  -239,
    -239,  -239,  -239,  -239,   414,   114,   205,   205,   265,  1263,
    1330,  1397,  1464,  1464,   265,   211,   211,  -239,  -239,  -239,
    -239
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,  -239,  -239,  -239,  -239,    -6,  -239,    -4,
    -239,  -239,  -239,  -239,  -239,   225,  -239,  -239,  -239,  -201,
    -239,    -7,   262,   318,  -239,    -1,   394,  -239,  -239,   451,
    -239,   -97,  -239,   109,  -239,  -239,   189,  -239,   140,   235,
    -228,  -239,  -239,  -239,  -239,  -239,  -239,   147,  -239,  -239,
    -239,  -238,  -239,  -239,  -239,  -209,   119,    91,  1460,   -56,
     -32,  -239,   -79,  -166,   402,  -239,  -239,   343,   -48,   -42,
    -239,  -239,   399,  -239,  -239,  -239,  -239,  -239,  -239,  -178,
    -239,   -14,   -15,  -239,  -239,  -239,  -239,  -239,  -239,  -239
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -232
static const yytype_int16 yytable[] =
{
      28,    27,    19,    11,    22,   111,   228,    98,   100,    77,
     277,    28,    31,    99,    99,   126,   167,   252,    33,   183,
      41,   183,    28,    46,   297,   101,     4,   103,   107,    43,
      92,   220,   -15,    25,   423,   -16,    37,   120,   121,    90,
     188,   126,    38,    93,   129,    32,    30,   177,   177,   277,
      29,    30,   329,   356,   102,  -177,  -177,  -177,    37,    95,
     164,   181,  -231,   103,   125,   182,    45,     3,   190,   228,
    -196,   -17,   221,   216,   217,   424,    14,    25,   406,   150,
     305,   335,   103,   180,   168,   185,   298,   103,   161,   165,
     162,   182,   169,   407,    26,   215,     4,   248,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   151,   123,   212,   406,   191,
     103,   103,   292,    14,   194,   237,    14,   380,   154,   155,
      21,   374,   408,   407,   150,    -2,   409,   244,   410,   177,
     103,   229,     4,   107,   249,   233,   213,   368,   390,   113,
     114,   218,   358,    15,   398,    19,   300,    14,   247,   395,
     177,   302,   378,    16,   177,   357,   123,   291,    12,   293,
     151,   405,   408,   371,   400,   401,   409,    14,   445,   342,
     343,    34,   177,    17,   425,   426,   427,   373,    35,   319,
     442,   347,   296,   177,   192,   177,   177,   123,   142,   143,
     144,   145,   146,   103,   260,    39,   439,   286,   441,   323,
     147,   148,   149,   290,   103,   315,   -15,   123,   255,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     242,   273,   177,   443,    40,   261,   327,   177,   328,    25,
      92,   289,    51,   177,    52,    53,    54,    89,   132,   133,
     332,   333,   334,    93,   341,   330,   103,   144,   145,   146,
      96,    99,   434,   435,   436,   437,   438,    32,    30,   355,
     436,   437,   438,    58,    59,    60,    61,    62,   321,    64,
     322,   425,   426,    67,    68,   359,   115,   177,   351,   142,
     143,   144,   145,   146,   360,   361,   177,   177,   128,   397,
      97,   177,   117,   336,   336,    41,    72,   176,   177,   341,
     348,   119,   132,   133,   134,   234,   235,   127,   352,   152,
     153,   391,   434,   435,   436,   437,   438,   132,   133,   134,
     363,   166,   379,   154,   155,   382,   341,   171,   172,   175,
     386,   174,   178,   189,   219,   226,   227,   230,   232,   240,
     241,   394,   141,   142,   143,   144,   145,   146,   243,   336,
     250,   246,   257,   348,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   251,   256,   258,   288,   130,   131,   132,
     133,   134,   259,   182,   306,    28,   413,   307,   308,   273,
     310,   311,   312,   313,    48,    28,    25,    49,    50,    51,
     317,    52,    53,    54,    55,    56,   303,   324,    28,   413,
     331,   354,    57,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   362,   364,   365,   177,   173,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   366,
      67,    68,   367,   369,   370,   372,   377,   383,   385,   294,
     130,    69,   132,   133,   134,    70,   387,    71,   389,   392,
     403,   414,   419,    72,    48,   295,    25,    49,    50,    51,
     404,    52,    53,    54,    55,    56,   420,   421,    37,   440,
     460,   301,    57,   254,   225,   163,    44,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   396,   337,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   384,
      67,    68,   318,   381,   444,   402,   179,   186,   231,   325,
       0,    69,   132,   133,   134,    70,     0,    71,     0,     0,
       0,     0,     0,    72,    48,   326,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,     0,     0,     0,   425,   426,
     427,    69,     0,     0,     0,    70,     0,    71,     0,     0,
       0,     0,     0,    72,    48,  -171,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,    70,     0,    71,     0,     0,
       0,     0,     0,    72,    48,  -173,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,   263,     0,   264,   400,   401,     0,     0,
     265,   266,   267,   268,     0,   269,   270,   271,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,    70,   272,    71,     0,     0,
       0,   182,  -102,    72,   262,     0,    25,    49,    50,   122,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,   263,     0,   264,     0,     0,     0,     0,
     265,   266,   267,   268,     0,   269,   270,   271,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   123,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,    70,   272,    71,     0,     0,
       0,   182,   -68,    72,   262,     0,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,   263,     0,   264,     0,     0,     0,     0,
     265,   266,   267,   268,     0,   269,   270,   271,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,    70,   272,    71,     0,     0,
       0,   182,   -68,    72,    48,     0,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,   263,     0,   264,     0,     0,     0,     0,
     265,   266,   267,   268,     0,   269,   270,   271,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,   130,   131,   132,   133,   134,
       0,    69,     0,     0,     0,    70,   272,    71,     0,     0,
       0,   182,    48,    72,    25,    49,    50,   122,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
      57,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,     0,     0,     0,     0,   245,    58,    59,
      60,    61,    62,    63,    64,    65,    66,   123,    67,    68,
       0,     0,     0,   130,   131,   132,   133,   134,     0,    69,
     124,     0,     0,    70,     0,    71,     0,     0,     0,     0,
      48,    72,    25,    49,    50,    51,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,    57,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,     0,     0,   393,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   187,    67,    68,     0,     0,
       0,   130,   131,   132,   133,   134,     0,    69,     0,     0,
       0,    70,     0,    71,  -164,     0,     0,     0,    48,    72,
      25,    49,    50,    51,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,    57,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,     0,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,    67,    68,     0,     0,     0,     0,
       0,   132,   133,   134,     0,    69,     0,     0,     0,    70,
       0,    71,  -166,     0,     0,     0,  -166,    72,    48,     0,
      25,    49,    50,   122,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,    57,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,   123,    67,    68,     0,     0,     0,     0,
     130,   131,   132,   133,   134,    69,     0,     0,     0,    70,
     -94,    71,   170,     0,     0,     0,    48,    72,    25,    49,
      50,    51,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,    57,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,    67,    68,     0,     0,     0,     0,     0,   425,
     426,   427,     0,    69,     0,     0,     0,    70,     0,    71,
       0,     0,     0,     0,  -164,    72,    48,     0,    25,    49,
      50,    51,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,    57,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,     0,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,    67,    68,     0,     0,   425,   426,   427,     0,
       0,     0,     0,    69,   132,   133,   134,    70,     0,    71,
    -164,     0,     0,     0,    48,    72,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   139,   140,   141,   142,   143,   144,   145,   146,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,   425,   426,   427,     0,     0,     0,     0,
       0,    69,   124,     0,     0,    70,     0,    71,     0,     0,
       0,     0,    48,    72,    25,    49,    50,    51,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
      57,   431,   432,   433,   434,   435,   436,   437,   438,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,    67,    68,
     425,   426,   427,     0,     0,     0,     0,   214,     0,    69,
       0,     0,     0,    70,     0,    71,     0,     0,     0,     0,
      48,    72,    25,    49,    50,    51,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,    57,     0,
     433,   434,   435,   436,   437,   438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,    70,   314,    71,     0,     0,     0,     0,    48,    72,
      25,    49,    50,    51,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,    70,
     -94,    71,     0,     0,     0,     0,    48,    72,    25,    49,
      50,    51,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,    70,     0,    71,
     -94,     0,     0,     0,    48,    72,    25,    49,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,   130,   131,   132,   133,   134,     0,     0,     0,
       0,    69,     0,     0,     0,    70,     0,    71,     0,     0,
       0,     0,     0,    72,   130,   131,   132,   133,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     130,   131,   132,   133,   134,   236,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   130,   131,   132,   133,   134,   239,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     0,     0,
       0,     0,     0,   303,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     422,     0,     0,     0,     0,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,     0,
       0,     0,     0,     0,     0,   422
};

static const yytype_int16 yycheck[] =
{
      15,    15,     9,     4,    10,    61,   172,    55,    56,    41,
     238,    26,    16,    55,    56,    71,    95,   218,    22,   116,
      13,   118,    37,    37,     1,    57,     7,    59,    60,    35,
      13,    26,    37,     3,    25,    37,    57,    69,    70,    43,
     119,    97,    63,    37,    76,     8,     9,    67,    67,   277,
       8,     9,    72,    72,    58,    11,    12,    13,    57,    64,
      92,    64,    64,    95,    71,    68,    65,     0,   124,   235,
      64,    64,    67,   152,   153,    66,     6,     3,     4,    35,
      63,   309,   114,   115,    47,   117,    63,   119,    69,    93,
      91,    68,    96,    19,    64,   151,     7,    25,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    71,    46,   149,     4,   125,
     152,   153,    25,     6,   128,   181,     6,   365,     8,     9,
      59,   359,    58,    19,    35,     0,    62,   193,    64,    67,
     172,   173,     7,   175,    72,   177,   150,   348,   376,    66,
      67,   157,   330,    36,   392,   162,   253,     6,   214,   387,
      67,   258,   363,    46,    67,    72,    46,   246,    63,    72,
      71,   399,    58,   351,    23,    24,    62,     6,    64,     8,
       9,    63,    67,    66,    16,    17,    18,    72,    67,    63,
     418,    63,   248,    67,    65,    67,    67,    46,    57,    58,
      59,    60,    61,   235,   236,     3,   415,   239,   417,   288,
      11,    12,    13,   245,   246,   271,    68,    46,   222,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      65,   238,    67,    65,    68,    65,   292,    67,   294,     3,
      13,    65,     6,    67,     8,     9,    10,    64,    16,    17,
     306,   307,   308,    37,   310,   303,   288,    59,    60,    61,
      37,   303,    57,    58,    59,    60,    61,     8,     9,   325,
      59,    60,    61,    37,    38,    39,    40,    41,    65,    43,
      67,    16,    17,    47,    48,    65,    64,    67,   320,    57,
      58,    59,    60,    61,    65,    65,    67,    67,    37,    65,
      64,    67,    64,   310,   311,    13,    70,    66,    67,   365,
     316,    64,    16,    17,    18,    66,    67,    64,   322,    64,
      64,   377,    57,    58,    59,    60,    61,    16,    17,    18,
     336,    64,   364,     8,     9,   367,   392,    69,    67,    67,
     372,    72,    65,     8,    65,    65,    65,    65,    65,     8,
      65,   383,    56,    57,    58,    59,    60,    61,    65,   366,
      65,    64,    63,   369,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    65,    67,    65,    64,    14,    15,    16,
      17,    18,    65,    68,    64,   400,   400,    64,    64,   396,
      64,    64,    63,    63,     1,   410,     3,     4,     5,     6,
      69,     8,     9,    10,    11,    12,    67,    65,   423,   423,
      65,    65,    19,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    27,    13,    63,    67,    66,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    67,
      47,    48,    31,    67,    63,    66,    64,    13,    65,    56,
      14,    58,    16,    17,    18,    62,    21,    64,    68,    63,
      63,    66,     4,    70,     1,    72,     3,     4,     5,     6,
      65,     8,     9,    10,    11,    12,     4,     4,    57,    69,
      66,   256,    19,   221,   166,    91,    35,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   389,   310,
      37,    38,    39,    40,    41,    42,    43,    44,    45,   369,
      47,    48,   277,   366,   423,   396,   114,   118,   175,    56,
      -1,    58,    16,    17,    18,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,     1,    72,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,     1,    72,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,     1,    72,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      -1,    68,    69,    70,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      -1,    68,    69,    70,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      -1,    68,    69,    70,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      -1,    68,     1,    70,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
       1,    70,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    65,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    58,    -1,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    -1,     1,    70,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    58,    -1,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    -1,    69,    70,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    58,    -1,    -1,    -1,    62,
      63,    64,    26,    -1,    -1,    -1,     1,    70,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    58,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    69,    70,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    58,    16,    17,    18,    62,    -1,    64,
      65,    -1,    -1,    -1,     1,    70,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    54,    55,    56,    57,    58,    59,    60,    61,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,     1,    70,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      16,    17,    18,    -1,    -1,    -1,    -1,    56,    -1,    58,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    -1,
       1,    70,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,     1,    70,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,     1,    70,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    -1,     1,    70,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      14,    15,    16,    17,    18,    67,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    14,    15,    16,    17,    18,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     410,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,    -1,
      -1,    -1,    -1,    -1,    -1,   445
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    74,    75,     0,     7,    77,    83,    86,    90,    98,
      99,    98,    63,    76,     6,    36,    46,    66,    93,    94,
     101,    59,    80,   102,   103,     3,    64,   154,   155,     8,
       9,    82,     8,    82,    63,    67,   154,    57,    63,     3,
      68,    13,    84,    80,   102,    65,   154,    91,     1,     4,
       5,     6,     8,     9,    10,    11,    12,    19,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    47,    48,    58,
      62,    64,    70,    78,    79,    82,   100,   133,   141,   142,
     146,   148,   149,   150,   153,   155,   158,   159,   160,    64,
      82,    89,    13,    37,   144,    64,    37,    64,   141,   142,
     141,   133,    82,   133,   135,   136,   137,   133,   138,   139,
     140,   132,   133,    66,    67,    64,   147,    64,   151,    64,
     133,   133,     6,    46,    59,    94,   132,    64,    37,   133,
      14,    15,    16,    17,    18,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    11,    12,    13,
      35,    71,    64,    64,     8,     9,    92,    94,    95,    96,
      97,    69,    98,    99,   133,    82,    64,   135,    47,    82,
      26,    69,    67,    66,    72,    67,    66,    67,    65,   137,
     133,    64,    68,   104,   145,   133,   145,    46,   135,     8,
     132,    80,    65,   143,    82,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,    82,    56,   132,   135,   135,    80,    65,
      26,    67,    80,    87,    88,    96,    65,    65,   136,   133,
      65,   140,    65,   133,    66,    67,    67,   132,   106,    67,
       8,    65,    65,    65,   132,    66,    64,   132,    25,    72,
      65,    65,    92,    85,    95,    82,    67,    63,    65,    65,
     133,    65,     1,    20,    22,    27,    28,    29,    30,    32,
      33,    34,    63,    94,   104,   105,   112,   113,   114,   116,
     118,   122,   126,   132,   134,   161,   133,   157,    64,    65,
     133,   135,    25,    72,    56,    72,   132,     1,    63,    81,
     104,    88,   104,    67,   152,    63,    64,    64,    64,   117,
      64,    64,    63,    63,    63,   132,   107,    69,   112,    63,
      67,    65,    67,   135,    65,    56,    72,   132,   132,    72,
     141,    65,   132,   132,   132,   113,    94,   109,   110,   124,
     125,   132,     8,     9,   109,   120,   121,    63,    80,   108,
     111,   133,    82,   156,    65,   132,    72,    72,   152,    65,
      65,    65,    27,    80,    13,    63,    67,    31,    92,    67,
      63,   152,    66,    72,   113,   127,   115,    64,    92,   133,
     124,   120,   133,    13,   111,    65,   133,    21,   162,    68,
     113,   132,    63,    65,   133,   113,   106,    65,   124,   123,
      23,    24,   129,    63,    65,   113,     4,    19,    58,    62,
      64,   130,   131,   154,    66,   113,   128,   129,   119,     4,
       4,     4,   131,    25,    66,    16,    17,    18,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   128,
      69,   128,   113,    65,   130,    64,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
      66
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 211 "grammar.y"
    {
#line 218 "grammar.y.pre"

		yywarn("Extra ';'. Ignored.");
	    }
    break;

  case 7:
#line 221 "grammar.y"
    {
#line 227 "grammar.y.pre"
		object_t *ob;
		inherit_t inherit;
		int initializer;

		(yyvsp[(1) - (4)].type) |= global_modifiers;

		if (var_defined)
		    yyerror("Illegal to inherit after defining global variables.");
		ob = find_object2((yyvsp[(3) - (4)].string));
		if (ob == 0) {
		    inherit_file = alloc_cstring((yyvsp[(3) - (4)].string), "inherit");
		    /* Return back to load_object() */
		    YYACCEPT;
		}
		scratch_free((yyvsp[(3) - (4)].string));
		inherit.prog = ob->prog;
		inherit.function_index_offset =
		      mem_block[A_RUNTIME_FUNCTIONS].current_size /
		      sizeof (runtime_function_u);
		inherit.variable_index_offset =
		      mem_block[A_VAR_TEMP].current_size /
		      sizeof (variable_t);
		inherit.type_mod = (yyvsp[(1) - (4)].type);
		add_to_mem_block(A_INHERITS, (char *)&inherit, sizeof inherit);
		copy_variables(ob->prog, (yyvsp[(1) - (4)].type));
		copy_structures(ob->prog);
		initializer = copy_functions(ob->prog, (yyvsp[(1) - (4)].type));
		if (initializer >= 0) {
		    /* initializer is an index into the object we're
		       inheriting's function table; this finds the
		       appropriate entry in our table and generates
		       a call to it */
		    switch_to_block(A_INITIALIZER);
		    generate_inherited_init_call(mem_block[A_INHERITS].current_size/sizeof(inherit_t) - 1, initializer);
		    switch_to_block(A_PROGRAM);
		}
	    }
    break;

  case 8:
#line 264 "grammar.y"
    {
#line 269 "grammar.y.pre"
		CREATE_REAL((yyval.node), (yyvsp[(1) - (1)].real));
	    }
    break;

  case 9:
#line 272 "grammar.y"
    {
#line 276 "grammar.y.pre"
		CREATE_NUMBER((yyval.node), (yyvsp[(1) - (1)].number));
	    }
    break;

  case 10:
#line 280 "grammar.y"
    {
#line 283 "grammar.y.pre"
		(yyval.type) = 0;
	    }
    break;

  case 11:
#line 285 "grammar.y"
    {
#line 287 "grammar.y.pre"
		(yyval.type) = TYPE_MOD_ARRAY;
	    }
    break;

  case 12:
#line 293 "grammar.y"
    {
#line 294 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].decl).node;
		if (!(yyval.node)) {
		    CREATE_RETURN((yyval.node), 0);
		}
            }
    break;

  case 13:
#line 301 "grammar.y"
    {
#line 301 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 14:
#line 306 "grammar.y"
    {
#line 305 "grammar.y.pre"
		(yyval.node) = 0;
            }
    break;

  case 15:
#line 314 "grammar.y"
    {
#line 312 "grammar.y.pre"
	      (yyval.string) = scratch_copy((yyvsp[(1) - (1)].ihe)->name);
	    }
    break;

  case 17:
#line 323 "grammar.y"
    {
#line 320 "grammar.y.pre"
		(yyvsp[(1) - (3)].type) |= global_modifiers;
		/* Handle type checking here so we know whether to typecheck
		   'argument' */
		if ((yyvsp[(1) - (3)].type) & ~NAME_TYPE_MOD) {
		    exact_types = (yyvsp[(1) - (3)].type) | (yyvsp[(2) - (3)].type);
		} else {
		    if (pragmas & PRAGMA_STRICT_TYPES) {
			if (strcmp((yyvsp[(3) - (3)].string), "create") != 0)
			    yyerror("\"#pragma strict_types\" requires type of function");
			else
			    exact_types = TYPE_VOID; /* default for create() */
		    } else
			exact_types = 0;
		}
	    }
    break;

  case 18:
#line 341 "grammar.y"
    {
#line 341 "grammar.y.pre"
		char *p = (yyvsp[(3) - (7)].string);
		(yyvsp[(3) - (7)].string) = make_shared_string((yyvsp[(3) - (7)].string));
		scratch_free(p);

		/* If we had nested functions, we would need to check */
		/* here if we have enough space for locals */

		/*
		 * Define a prototype. If it is a real function, then the
		 * prototype will be replaced below.
		 */

		(yyval.number) = NAME_UNDEFINED | NAME_PROTOTYPE;
		if ((yyvsp[(6) - (7)].argument).flags & ARG_IS_VARARGS) {
		    (yyval.number) |= NAME_TRUE_VARARGS;
		    (yyvsp[(1) - (7)].type) |= NAME_VARARGS;
		}
		define_new_function((yyvsp[(3) - (7)].string), (yyvsp[(6) - (7)].argument).num_arg, 0, (yyval.number), (yyvsp[(1) - (7)].type) | (yyvsp[(2) - (7)].type));
		/* This is safe since it is guaranteed to be in the
		   function table, so it can't be dangling */
		free_string((yyvsp[(3) - (7)].string)); 
		context = 0;
	    }
    break;

  case 19:
#line 367 "grammar.y"
    {
#line 366 "grammar.y.pre"
		/* Either a prototype or a block */
		if ((yyvsp[(9) - (9)].node)) {
		    int fun;

		    (yyvsp[(8) - (9)].number) &= ~(NAME_UNDEFINED | NAME_PROTOTYPE);
		    if ((yyvsp[(9) - (9)].node)->kind != NODE_RETURN &&
			((yyvsp[(9) - (9)].node)->kind != NODE_TWO_VALUES
			 || (yyvsp[(9) - (9)].node)->r.expr->kind != NODE_RETURN)) {
			parse_node_t *replacement;
			CREATE_STATEMENTS(replacement, (yyvsp[(9) - (9)].node), 0);
			CREATE_RETURN(replacement->r.expr, 0);
			(yyvsp[(9) - (9)].node) = replacement;
		    }
		    if ((yyvsp[(6) - (9)].argument).flags & ARG_IS_PROTO) {
			yyerror("Missing name for function argument");
		    }
		    fun = define_new_function((yyvsp[(3) - (9)].string), (yyvsp[(6) - (9)].argument).num_arg, 
					      max_num_locals - (yyvsp[(6) - (9)].argument).num_arg,
					      (yyvsp[(8) - (9)].number), (yyvsp[(1) - (9)].type) | (yyvsp[(2) - (9)].type));
		    if (fun != -1)
			COMPILER_FUNC(fun)->address =
			    generate_function(COMPILER_FUNC(fun), (yyvsp[(9) - (9)].node), max_num_locals);
		}
		free_all_local_names();
	    }
    break;

  case 20:
#line 395 "grammar.y"
    {
#line 393 "grammar.y.pre"
		if (!(yyvsp[(1) - (3)].type)) yyerror("Missing type for global variable declaration");
	    }
    break;

  case 24:
#line 405 "grammar.y"
    {
#line 402 "grammar.y.pre"
		global_modifiers = (yyvsp[(1) - (2)].type);
	    }
    break;

  case 25:
#line 413 "grammar.y"
    {
#line 409 "grammar.y.pre"
		if ((current_type & ~NAME_TYPE_MOD) == TYPE_VOID)
		    yyerror("Illegal to declare class member of type void.");
		add_local_name((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].type));
		scratch_free((yyvsp[(2) - (2)].string));
	    }
    break;

  case 30:
#line 434 "grammar.y"
    {
#line 429 "grammar.y.pre"
		ident_hash_elem_t *ihe;

		ihe = find_or_add_ident(
			   PROG_STRING((yyval.number) = store_prog_string((yyvsp[(3) - (4)].string))),
			   FOA_GLOBAL_SCOPE);
		if (ihe->dn.class_num == -1)
		    ihe->sem_value++;
		else {
		    /* Possibly, this should check if the definitions are
		       consistent */
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Illegal to redefine class ");
		    p = strput(p, end, (yyvsp[(3) - (4)].string));
		    yyerror(buf);
		}
		ihe->dn.class_num = mem_block[A_CLASS_DEF].current_size / sizeof(class_def_t);
	    }
    break;

  case 31:
#line 457 "grammar.y"
    {
#line 451 "grammar.y.pre"
		class_def_t *sd;
		class_member_entry_t *sme;
		int i;

		sd = (class_def_t *)allocate_in_mem_block(A_CLASS_DEF, sizeof(class_def_t));
		i = sd->size = current_number_of_locals;
		sd->index = mem_block[A_CLASS_MEMBER].current_size / sizeof(class_member_entry_t);
		sd->name = (yyvsp[(5) - (7)].number);

		sme = (class_member_entry_t *)allocate_in_mem_block(A_CLASS_MEMBER, sizeof(class_member_entry_t) * current_number_of_locals);

		while (i--) {
		    sme[i].name = store_prog_string(locals_ptr[i]->name);
		    sme[i].type = type_of_locals_ptr[i];
		}

		free_all_local_names();
		scratch_free((yyvsp[(3) - (7)].string));
	    }
    break;

  case 33:
#line 483 "grammar.y"
    {
#line 476 "grammar.y.pre"
		if ((yyvsp[(1) - (1)].ihe)->dn.local_num != -1) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Illegal to redeclare local name '");
		    p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buff);
		}
		(yyval.string) = scratch_copy((yyvsp[(1) - (1)].ihe)->name);
	    }
    break;

  case 35:
#line 502 "grammar.y"
    {
#line 494 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].ihe)->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, (yyvsp[(2) - (2)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    (yyval.type) = TYPE_ANY;
		} else 
		    (yyval.type) = (yyvsp[(2) - (2)].ihe)->dn.class_num | TYPE_MOD_CLASS;
	    }
    break;

  case 37:
#line 525 "grammar.y"
    {
#line 526 "grammar.y.pre"
		if ((yyvsp[(1) - (2)].type) == TYPE_VOID)
		    yyerror("Illegal to declare argument of type void.");
                (yyval.number) = ARG_IS_PROTO;
                add_local_name("", (yyvsp[(1) - (2)].type) | (yyvsp[(2) - (2)].type));
            }
    break;

  case 38:
#line 533 "grammar.y"
    {
#line 533 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].type) == TYPE_VOID)
		    yyerror("Illegal to declare argument of type void.");
                add_local_name((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].type) | (yyvsp[(2) - (3)].type));
		scratch_free((yyvsp[(3) - (3)].string));
                (yyval.number) = 0;
	    }
    break;

  case 39:
#line 542 "grammar.y"
    {
#line 541 "grammar.y.pre"
		if (exact_types) {
		    yyerror("Missing type for argument");
		}
		add_local_name((yyvsp[(1) - (1)].string), TYPE_ANY);
		scratch_free((yyvsp[(1) - (1)].string));
		(yyval.number) = 0;
            }
    break;

  case 40:
#line 555 "grammar.y"
    {
#line 553 "grammar.y.pre"
		(yyval.argument).num_arg = 0;
                (yyval.argument).flags = 0;
	    }
    break;

  case 42:
#line 562 "grammar.y"
    {
#line 559 "grammar.y.pre"
		int x = type_of_locals_ptr[max_num_locals-1];
		
		(yyval.argument) = (yyvsp[(1) - (2)].argument);
		(yyval.argument).flags |= ARG_IS_VARARGS;

		if (x != TYPE_ANY && !(x & TYPE_MOD_ARRAY))
		    yywarn("Variable to hold remainder of arguments should be an array.");
	    }
    break;

  case 43:
#line 576 "grammar.y"
    {
#line 572 "grammar.y.pre"
		(yyval.argument).num_arg = 1;
                (yyval.argument).flags = (yyvsp[(1) - (1)].number);
	    }
    break;

  case 44:
#line 582 "grammar.y"
    {
#line 577 "grammar.y.pre"
                (yyval.argument) = (yyvsp[(1) - (3)].argument);
		(yyval.argument).num_arg++;
                (yyval.argument).flags |= (yyvsp[(3) - (3)].number);
	    }
    break;

  case 45:
#line 592 "grammar.y"
    {
#line 586 "grammar.y.pre"
		(yyval.type) = 0;
	    }
    break;

  case 46:
#line 597 "grammar.y"
    {
#line 590 "grammar.y.pre"
		(yyval.type) = (yyvsp[(1) - (2)].type) | (yyvsp[(2) - (2)].type);
	    }
    break;

  case 47:
#line 605 "grammar.y"
    {
#line 597 "grammar.y.pre"
		(yyval.type) = (yyvsp[(1) - (2)].type) | (yyvsp[(2) - (2)].type);
		current_type = (yyval.type);
	    }
    break;

  case 48:
#line 614 "grammar.y"
    {
#line 605 "grammar.y.pre"
		(yyval.type) = (yyvsp[(2) - (4)].type) | (yyvsp[(3) - (4)].type);
	    }
    break;

  case 50:
#line 623 "grammar.y"
    {
#line 613 "grammar.y.pre"
		(yyval.type) = TYPE_UNKNOWN;
	    }
    break;

  case 53:
#line 636 "grammar.y"
    {
#line 625 "grammar.y.pre"
		if ((current_type & ~NAME_TYPE_MOD) == TYPE_VOID)
		    yyerror("Illegal to declare global variable of type void.");
		define_new_variable((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].type) | global_modifiers);
		scratch_free((yyvsp[(2) - (2)].string));
	    }
    break;

  case 54:
#line 644 "grammar.y"
    {
#line 632 "grammar.y.pre"
		parse_node_t *expr;
		int type;
		
		if ((yyvsp[(3) - (4)].number) != F_ASSIGN)
		    yyerror("Only '=' is legal in initializers.");

		/* ignore current_type == 0, which gets a missing type error
		   later anyway */
		if (current_type) {
		    type = (current_type | (yyvsp[(1) - (4)].type) | global_modifiers) & ~NAME_TYPE_MOD;
		    if ((current_type & ~NAME_TYPE_MOD) == TYPE_VOID)
			yyerror("Illegal to declare global variable of type void.");
		    if (!compatible_types(type, (yyvsp[(4) - (4)].node)->type)) {
			char buff[256];
			char *end = EndOf(buff);
			char *p;
			
			p = strput(buff, end, "Type mismatch ");
			p = get_two_types(p, end, type, (yyvsp[(4) - (4)].node)->type);
			p = strput(p, end, " when initializing ");
			p = strput(p, end, (yyvsp[(2) - (4)].string));
			yyerror(buff);
		    }
		}
		switch_to_block(A_INITIALIZER);
		(yyvsp[(4) - (4)].node) = do_promotions((yyvsp[(4) - (4)].node), type);

		CREATE_BINARY_OP(expr, F_VOID_ASSIGN, 0, (yyvsp[(4) - (4)].node), 0);
		CREATE_OPCODE_1(expr->r.expr, F_GLOBAL_LVALUE, 0,
				define_new_variable((yyvsp[(2) - (4)].string), current_type | (yyvsp[(1) - (4)].type) | global_modifiers));
		generate(expr);
		switch_to_block(A_PROGRAM);
		scratch_free((yyvsp[(2) - (4)].string));
	    }
    break;

  case 55:
#line 684 "grammar.y"
    {
#line 671 "grammar.y.pre"
		if ((yyvsp[(2) - (4)].decl).node && (yyvsp[(3) - (4)].node)) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(2) - (4)].decl).node, (yyvsp[(3) - (4)].node));
		} else (yyval.decl).node = ((yyvsp[(2) - (4)].decl).node ? (yyvsp[(2) - (4)].decl).node : (yyvsp[(3) - (4)].node));
                (yyval.decl).num = (yyvsp[(2) - (4)].decl).num;
            }
    break;

  case 59:
#line 697 "grammar.y"
    {
#line 683 "grammar.y.pre"
                (yyval.decl).node = 0;
                (yyval.decl).num = 0;
            }
    break;

  case 60:
#line 703 "grammar.y"
    {
#line 688 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].type) == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");
                /* can't do this in basic_type b/c local_name_list contains
                 * expr0 which contains cast which contains basic_type
                 */
                current_type = (yyvsp[(2) - (2)].type);
            }
    break;

  case 61:
#line 713 "grammar.y"
    {
#line 697 "grammar.y.pre"
                if ((yyvsp[(1) - (5)].decl).node && (yyvsp[(4) - (5)].decl).node) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(1) - (5)].decl).node, (yyvsp[(4) - (5)].decl).node);
                } else (yyval.decl).node = ((yyvsp[(1) - (5)].decl).node ? (yyvsp[(1) - (5)].decl).node : (yyvsp[(4) - (5)].decl).node);
                (yyval.decl).num = (yyvsp[(1) - (5)].decl).num + (yyvsp[(4) - (5)].decl).num;
            }
    break;

  case 62:
#line 725 "grammar.y"
    {
#line 708 "grammar.y.pre"
		add_local_name((yyvsp[(2) - (2)].string), current_type | (yyvsp[(1) - (2)].type));
		scratch_free((yyvsp[(2) - (2)].string));
		(yyval.node) = 0;
	    }
    break;

  case 63:
#line 732 "grammar.y"
    {
#line 714 "grammar.y.pre"
		int type = (current_type | (yyvsp[(1) - (4)].type)) & ~NAME_TYPE_MOD;

		if ((yyvsp[(3) - (4)].number) != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types((yyvsp[(4) - (4)].node)->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, (yyvsp[(4) - (4)].node)->type);
		    p = strput(p, end, " when initializing ");
		    p = strput(p, end, (yyvsp[(2) - (4)].string));

		    yyerror(buff);
		}
		
		(yyvsp[(4) - (4)].node) = do_promotions((yyvsp[(4) - (4)].node), type);

		CREATE_UNARY_OP_1((yyval.node), F_VOID_ASSIGN_LOCAL, 0, (yyvsp[(4) - (4)].node),
				  add_local_name((yyvsp[(2) - (4)].string), current_type | (yyvsp[(1) - (4)].type)));
		scratch_free((yyvsp[(2) - (4)].string));
	    }
    break;

  case 64:
#line 761 "grammar.y"
    {
#line 742 "grammar.y.pre"
		if ((yyvsp[(1) - (3)].type) == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");

		(yyval.number) = add_local_name((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].type) | (yyvsp[(2) - (3)].type));
		scratch_free((yyvsp[(3) - (3)].string));
	    }
    break;

  case 65:
#line 773 "grammar.y"
    {
#line 753 "grammar.y.pre"
                int type = type_of_locals_ptr[(yyvsp[(1) - (3)].number)];

		if ((yyvsp[(2) - (3)].number) != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types((yyvsp[(3) - (3)].node)->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, " when initializing.");
		    yyerror(buff);
		}

		(yyvsp[(3) - (3)].node) = do_promotions((yyvsp[(3) - (3)].node), type);

		/* this is an expression */
		CREATE_BINARY_OP((yyval.node), F_ASSIGN, 0, (yyvsp[(3) - (3)].node), 0);
                CREATE_OPCODE_1((yyval.node)->r.expr, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (3)].number));
	    }
    break;

  case 66:
#line 800 "grammar.y"
    {
#line 779 "grammar.y.pre"
                (yyval.decl).node = (yyvsp[(1) - (1)].node);
                (yyval.decl).num = 1;
            }
    break;

  case 67:
#line 806 "grammar.y"
    {
#line 784 "grammar.y.pre"
                if ((yyvsp[(1) - (3)].node) && (yyvsp[(3) - (3)].decl).node) {
		    CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].decl).node);
                } else (yyval.decl).node = ((yyvsp[(1) - (3)].node) ? (yyvsp[(1) - (3)].node) : (yyvsp[(3) - (3)].decl).node);
                (yyval.decl).num = 1 + (yyvsp[(3) - (3)].decl).num;
            }
    break;

  case 68:
#line 817 "grammar.y"
    {
#line 794 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 69:
#line 822 "grammar.y"
    {
#line 798 "grammar.y.pre"
		if ((yyvsp[(1) - (2)].node) && (yyvsp[(2) - (2)].node)) {
		    CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		} else (yyval.node) = ((yyvsp[(1) - (2)].node) ? (yyvsp[(1) - (2)].node) : (yyvsp[(2) - (2)].node));
            }
    break;

  case 70:
#line 829 "grammar.y"
    {
#line 804 "grammar.y.pre"
		(yyval.node) = 0;
            }
    break;

  case 71:
#line 837 "grammar.y"
    {
#line 811 "grammar.y.pre"
		(yyval.node) = insert_pop_value((yyvsp[(1) - (2)].node));
#ifdef DEBUG
		{
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, (yyval.node), 0);
		    CREATE_OPCODE(replacement->r.expr, F_BREAK_POINT, 0);
		    (yyval.node) = replacement;
		}
#endif
	    }
    break;

  case 77:
#line 855 "grammar.y"
    {
#line 828 "grammar.y.pre"
                (yyval.node) = (yyvsp[(1) - (1)].decl).node;
                pop_n_locals((yyvsp[(1) - (1)].decl).num);
            }
    break;

  case 78:
#line 861 "grammar.y"
    {
#line 833 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 79:
#line 866 "grammar.y"
    {
#line 837 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT) {
		    yyerror("Cannot break out of catch { } or time_expression { }");
		    (yyval.node) = 0;
		} else
		if (context & SWITCH_CONTEXT) {
		    CREATE_CONTROL_JUMP((yyval.node), CJ_BREAK_SWITCH);
		} else
		if (context & LOOP_CONTEXT) {
		    CREATE_CONTROL_JUMP((yyval.node), CJ_BREAK);
		    if (context & LOOP_FOREACH) {
			parse_node_t *replace;
			CREATE_STATEMENTS(replace, 0, (yyval.node));
			CREATE_OPCODE(replace->l.expr, F_EXIT_FOREACH, 0);
			(yyval.node) = replace;
		    }
		} else {
		    yyerror("break statement outside loop");
		    (yyval.node) = 0;
		}
	    }
    break;

  case 80:
#line 889 "grammar.y"
    {
#line 859 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT)
		    yyerror("Cannot continue out of catch { } or time_expression { }");
		else
		if (!(context & LOOP_CONTEXT))
		    yyerror("continue statement outside loop");
		CREATE_CONTROL_JUMP((yyval.node), CJ_CONTINUE);
	    }
    break;

  case 81:
#line 902 "grammar.y"
    {
#line 871 "grammar.y.pre"
		(yyvsp[(1) - (4)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 82:
#line 908 "grammar.y"
    {
#line 876 "grammar.y.pre"
		CREATE_LOOP((yyval.node), 1, (yyvsp[(6) - (6)].node), 0, optimize_loop_test((yyvsp[(3) - (6)].node)));
		context = (yyvsp[(1) - (6)].number);
	    }
    break;

  case 83:
#line 917 "grammar.y"
    {
#line 884 "grammar.y.pre"
		(yyvsp[(1) - (1)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 84:
#line 923 "grammar.y"
    {
#line 889 "grammar.y.pre"
		CREATE_LOOP((yyval.node), 0, (yyvsp[(3) - (8)].node), 0, optimize_loop_test((yyvsp[(6) - (8)].node)));
		context = (yyvsp[(1) - (8)].number);
	    }
    break;

  case 85:
#line 932 "grammar.y"
    {
#line 897 "grammar.y.pre"
		(yyvsp[(1) - (8)].number) = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 86:
#line 938 "grammar.y"
    {
#line 902 "grammar.y.pre"
		(yyval.decl).num = (yyvsp[(3) - (10)].decl).num; /* number of declarations (0/1) */
		
		(yyvsp[(3) - (10)].decl).node = insert_pop_value((yyvsp[(3) - (10)].decl).node);
		(yyvsp[(7) - (10)].node) = insert_pop_value((yyvsp[(7) - (10)].node));
		if ((yyvsp[(7) - (10)].node) && IS_NODE((yyvsp[(7) - (10)].node), NODE_UNARY_OP, F_INC)
		    && IS_NODE((yyvsp[(7) - (10)].node)->r.expr, NODE_OPCODE_1, F_LOCAL_LVALUE)) {
		    int lvar = (yyvsp[(7) - (10)].node)->r.expr->l.number;
		    CREATE_OPCODE_1((yyvsp[(7) - (10)].node), F_LOOP_INCR, 0, lvar);
		}

		CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(3) - (10)].decl).node, 0);
		CREATE_LOOP((yyval.decl).node->r.expr, 1, (yyvsp[(10) - (10)].node), (yyvsp[(7) - (10)].node), optimize_loop_test((yyvsp[(5) - (10)].node)));

		context = (yyvsp[(1) - (10)].number);
	      }
    break;

  case 87:
#line 958 "grammar.y"
    {
#line 921 "grammar.y.pre"
		if ((yyvsp[(1) - (1)].ihe)->dn.local_num != -1) {
		    CREATE_OPCODE_1((yyval.decl).node, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (1)].ihe)->dn.local_num);
		} else
	        if ((yyvsp[(1) - (1)].ihe)->dn.global_num != -1) {
		    CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, (yyvsp[(1) - (1)].ihe)->dn.global_num);
		} else {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "'");
		    p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		    p = strput(p, end, "' is not a local or a global variable.");
		    yyerror(buf);
		    CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, 0);
		}
		(yyval.decl).num = 0;
            }
    break;

  case 88:
#line 979 "grammar.y"
    {
#line 941 "grammar.y.pre"
                CREATE_OPCODE_1((yyval.decl).node, F_LOCAL_LVALUE, 0, (yyvsp[(1) - (1)].number));
		(yyval.decl).num = 1;
            }
    break;

  case 89:
#line 985 "grammar.y"
    {
#line 946 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "'");
		p = strput(p, end, (yyvsp[(1) - (1)].string));
		p = strput(p, end, "' is not a local or a global variable.");
		yyerror(buf);
		CREATE_OPCODE_1((yyval.decl).node, F_GLOBAL_LVALUE, 0, 0);
		scratch_free((yyvsp[(1) - (1)].string));
		(yyval.decl).num = 0;
	    }
    break;

  case 90:
#line 1003 "grammar.y"
    {
#line 963 "grammar.y.pre"
		CREATE_FOREACH((yyval.decl).node, (yyvsp[(1) - (1)].decl).node, 0);
		(yyval.decl).num = (yyvsp[(1) - (1)].decl).num;
            }
    break;

  case 91:
#line 1009 "grammar.y"
    {
#line 968 "grammar.y.pre"
		CREATE_FOREACH((yyval.decl).node, (yyvsp[(1) - (3)].decl).node, (yyvsp[(3) - (3)].decl).node);
		(yyval.decl).num = (yyvsp[(1) - (3)].decl).num + (yyvsp[(3) - (3)].decl).num;
            }
    break;

  case 92:
#line 1018 "grammar.y"
    {
#line 976 "grammar.y.pre"
		(yyvsp[(3) - (6)].decl).node->v.expr = (yyvsp[(5) - (6)].node);
		(yyvsp[(1) - (6)].number) = context;
		context = LOOP_CONTEXT | LOOP_FOREACH;
            }
    break;

  case 93:
#line 1025 "grammar.y"
    {
#line 982 "grammar.y.pre"
		(yyval.decl).num = (yyvsp[(3) - (8)].decl).num;

		CREATE_STATEMENTS((yyval.decl).node, (yyvsp[(3) - (8)].decl).node, 0);
		CREATE_LOOP((yyval.decl).node->r.expr, 2, (yyvsp[(8) - (8)].node), 0, 0);
		CREATE_OPCODE((yyval.decl).node->r.expr->r.expr, F_NEXT_FOREACH, 0);
		
		context = (yyvsp[(1) - (8)].number);
	    }
    break;

  case 94:
#line 1039 "grammar.y"
    {
#line 995 "grammar.y.pre"
		CREATE_NUMBER((yyval.node), 1);
	    }
    break;

  case 96:
#line 1048 "grammar.y"
    {
#line 1003 "grammar.y.pre"
	 	(yyval.decl).node = (yyvsp[(1) - (1)].node);
		(yyval.decl).num = 0;
	    }
    break;

  case 97:
#line 1054 "grammar.y"
    {
#line 1008 "grammar.y.pre"
		(yyval.decl).node = (yyvsp[(1) - (1)].node);
		(yyval.decl).num = 1;
	    }
    break;

  case 98:
#line 1063 "grammar.y"
    {
#line 1016 "grammar.y.pre"
                (yyvsp[(1) - (4)].number) = context;
                context &= LOOP_CONTEXT;
                context |= SWITCH_CONTEXT;
                (yyvsp[(2) - (4)].number) = mem_block[A_CASES].current_size;
            }
    break;

  case 99:
#line 1071 "grammar.y"
    {
#line 1023 "grammar.y.pre"
                parse_node_t *node1, *node2;

                if ((yyvsp[(9) - (10)].node)) {
		    CREATE_STATEMENTS(node1, (yyvsp[(8) - (10)].node), (yyvsp[(9) - (10)].node));
                } else node1 = (yyvsp[(8) - (10)].node);

                if (context & SWITCH_STRINGS) {
                    NODE_NO_LINE(node2, NODE_SWITCH_STRINGS);
                } else if (context & SWITCH_RANGES) {
		    NODE_NO_LINE(node2, NODE_SWITCH_RANGES);
		} else {
                    NODE_NO_LINE(node2, NODE_SWITCH_NUMBERS);
                }
                node2->l.expr = (yyvsp[(3) - (10)].node);
                node2->r.expr = node1;
                prepare_cases(node2, (yyvsp[(2) - (10)].number));
                context = (yyvsp[(1) - (10)].number);
		(yyval.node) = node2;
		pop_n_locals((yyvsp[(7) - (10)].decl).num);
            }
    break;

  case 100:
#line 1097 "grammar.y"
    {
#line 1048 "grammar.y.pre"
               if ((yyvsp[(2) - (2)].node)){
		   CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
               } else (yyval.node) = (yyvsp[(1) - (2)].node);
           }
    break;

  case 101:
#line 1104 "grammar.y"
    {
#line 1054 "grammar.y.pre"
               if ((yyvsp[(2) - (2)].node)){
		   CREATE_STATEMENTS((yyval.node), (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
               } else (yyval.node) = (yyvsp[(1) - (2)].node);
           }
    break;

  case 102:
#line 1111 "grammar.y"
    {
#line 1060 "grammar.y.pre"
               (yyval.node) = 0;
           }
    break;

  case 103:
#line 1120 "grammar.y"
    {
#line 1068 "grammar.y.pre"
                (yyval.node) = (yyvsp[(2) - (3)].node);
                (yyval.node)->v.expr = 0;

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (3)].node)), sizeof((yyvsp[(2) - (3)].node)));
            }
    break;

  case 104:
#line 1128 "grammar.y"
    {
#line 1075 "grammar.y.pre"
                if ( (yyvsp[(2) - (5)].node)->kind != NODE_CASE_NUMBER
                    || (yyvsp[(4) - (5)].node)->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");
                if ((yyvsp[(2) - (5)].node)->r.number > (yyvsp[(4) - (5)].node)->r.number) break;

		context |= SWITCH_RANGES;

                (yyval.node) = (yyvsp[(2) - (5)].node);
                (yyval.node)->v.expr = (yyvsp[(4) - (5)].node);

                add_to_mem_block(A_CASES, (char *)&((yyvsp[(2) - (5)].node)), sizeof((yyvsp[(2) - (5)].node)));
            }
    break;

  case 105:
#line 1143 "grammar.y"
    {
#line 1089 "grammar.y.pre"
                if (context & SWITCH_DEFAULT) {
                    yyerror("Duplicate default");
                    (yyval.node) = 0;
                    break;
                }
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_DEFAULT;
                (yyval.node)->v.expr = 0;
                add_to_mem_block(A_CASES, (char *)&((yyval.node)), sizeof((yyval.node)));
                context |= SWITCH_DEFAULT;
            }
    break;

  case 106:
#line 1160 "grammar.y"
    {
#line 1105 "grammar.y.pre"
                if ((context & SWITCH_STRINGS) && (yyvsp[(1) - (1)].pointer_int))
                    yyerror("Mixed case label list not allowed");

                if ((yyvsp[(1) - (1)].pointer_int)) context |= SWITCH_NUMBERS;
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_NUMBER;
                (yyval.node)->r.expr = (parse_node_t *)(yyvsp[(1) - (1)].pointer_int);
            }
    break;

  case 107:
#line 1171 "grammar.y"
    {
#line 1115 "grammar.y.pre"
		int str;
		
		str = store_prog_string((yyvsp[(1) - (1)].string));
                scratch_free((yyvsp[(1) - (1)].string));
                if (context & SWITCH_NUMBERS)
                    yyerror("Mixed case label list not allowed");
                context |= SWITCH_STRINGS;
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_CASE_STRING;
                (yyval.node)->r.number = str;
            }
    break;

  case 108:
#line 1188 "grammar.y"
    {
#line 1131 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) | (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 109:
#line 1193 "grammar.y"
    {
#line 1135 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) ^ (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 110:
#line 1198 "grammar.y"
    {
#line 1139 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) & (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 111:
#line 1203 "grammar.y"
    {
#line 1143 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) == (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 112:
#line 1208 "grammar.y"
    {
#line 1147 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) != (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 113:
#line 1213 "grammar.y"
    {
#line 1151 "grammar.y.pre"
                switch((yyvsp[(2) - (3)].number)){
                    case F_GE: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >= (yyvsp[(3) - (3)].pointer_int); break;
                    case F_LE: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) <= (yyvsp[(3) - (3)].pointer_int); break;
                    case F_GT: (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >  (yyvsp[(3) - (3)].pointer_int); break;
                }
            }
    break;

  case 114:
#line 1222 "grammar.y"
    {
#line 1159 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) < (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 115:
#line 1227 "grammar.y"
    {
#line 1163 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) << (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 116:
#line 1232 "grammar.y"
    {
#line 1167 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) >> (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 117:
#line 1237 "grammar.y"
    {
#line 1171 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) + (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 118:
#line 1242 "grammar.y"
    {
#line 1175 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) - (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 119:
#line 1247 "grammar.y"
    {
#line 1179 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) * (yyvsp[(3) - (3)].pointer_int);
            }
    break;

  case 120:
#line 1252 "grammar.y"
    {
#line 1183 "grammar.y.pre"
                if ((yyvsp[(3) - (3)].pointer_int)) (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) % (yyvsp[(3) - (3)].pointer_int); else yyerror("Modulo by zero");
            }
    break;

  case 121:
#line 1257 "grammar.y"
    {
#line 1187 "grammar.y.pre"
                if ((yyvsp[(3) - (3)].pointer_int)) (yyval.pointer_int) = (yyvsp[(1) - (3)].pointer_int) / (yyvsp[(3) - (3)].pointer_int); else yyerror("Division by zero");
            }
    break;

  case 122:
#line 1262 "grammar.y"
    {
#line 1191 "grammar.y.pre"
                (yyval.pointer_int) = (yyvsp[(2) - (3)].pointer_int);
            }
    break;

  case 123:
#line 1267 "grammar.y"
    {
#line 1195 "grammar.y.pre"
		(yyval.pointer_int) = (yyvsp[(1) - (1)].number);
	    }
    break;

  case 124:
#line 1272 "grammar.y"
    {
#line 1199 "grammar.y.pre"
                (yyval.pointer_int) = -(yyvsp[(2) - (2)].number);
            }
    break;

  case 125:
#line 1277 "grammar.y"
    {
#line 1203 "grammar.y.pre"
                (yyval.pointer_int) = !(yyvsp[(2) - (2)].number);
            }
    break;

  case 126:
#line 1282 "grammar.y"
    {
#line 1207 "grammar.y.pre"
                (yyval.pointer_int) = ~(yyvsp[(2) - (2)].number);
            }
    break;

  case 127:
#line 1290 "grammar.y"
    {
#line 1214 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].node);
	    }
    break;

  case 128:
#line 1295 "grammar.y"
    {
#line 1218 "grammar.y.pre"
		CREATE_TWO_VALUES((yyval.node), (yyvsp[(3) - (3)].node)->type, insert_pop_value((yyvsp[(1) - (3)].node)), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 129:
#line 1303 "grammar.y"
    {
#line 1225 "grammar.y.pre"
	        parse_node_t *l = (yyvsp[(1) - (3)].node), *r = (yyvsp[(3) - (3)].node);
		/* set this up here so we can change it below */
		
		CREATE_BINARY_OP((yyval.node), (yyvsp[(2) - (3)].number), r->type, r, l);

		if (exact_types && !compatible_types(r->type, l->type) &&
		    !((yyvsp[(2) - (3)].number) == F_ADD_EQ
		      && r->type == TYPE_STRING && 
		      COMP_TYPE(l->type, TYPE_NUMBER))) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Bad assignment ");
		    p = get_two_types(p, end, l->type, r->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}

		(yyval.node)->l.expr = do_promotions(r, l->type);
	    }
    break;

  case 130:
#line 1327 "grammar.y"
    {
#line 1248 "grammar.y.pre"
		yyerror("Illegal LHS");
		CREATE_ERROR((yyval.node));
	    }
    break;

  case 131:
#line 1333 "grammar.y"
    {
#line 1253 "grammar.y.pre"
		parse_node_t *p1 = (yyvsp[(3) - (5)].node), *p2 = (yyvsp[(5) - (5)].node);

		if (exact_types && !compatible_types2(p1->type, p2->type)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Types in ?: do not match ");
		    p = get_two_types(p, end, p1->type, p2->type);
		    p = strput(p, end, ".");
		    yywarn(buf);
		}

		/* optimize if last expression did F_NOT */
		if (IS_NODE((yyvsp[(1) - (5)].node), NODE_UNARY_OP, F_NOT)) {
		    /* !a ? b : c  --> a ? c : b */
		    CREATE_IF((yyval.node), (yyvsp[(1) - (5)].node)->r.expr, p2, p1);
		} else {
		    CREATE_IF((yyval.node), (yyvsp[(1) - (5)].node), p1, p2);
		}
		(yyval.node)->type = ((p1->type == p2->type) ? p1->type : TYPE_ANY);
	    }
    break;

  case 132:
#line 1358 "grammar.y"
    {
#line 1277 "grammar.y.pre"
		CREATE_LAND_LOR((yyval.node), F_LOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_LAND_LOR, F_LOR))
		    (yyvsp[(1) - (3)].node)->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 133:
#line 1365 "grammar.y"
    {
#line 1283 "grammar.y.pre"
		CREATE_LAND_LOR((yyval.node), F_LAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_LAND_LOR, F_LAND))
		    (yyvsp[(1) - (3)].node)->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 134:
#line 1372 "grammar.y"
    {
#line 1289 "grammar.y.pre"
		if (is_boolean((yyvsp[(1) - (3)].node)) && is_boolean((yyvsp[(3) - (3)].node)))
		    yywarn("bitwise operation on boolean values.");
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_OR, "|");		
	    }
    break;

  case 135:
#line 1379 "grammar.y"
    {
#line 1295 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_XOR, "^");
	    }
    break;

  case 136:
#line 1384 "grammar.y"
    {
#line 1299 "grammar.y.pre"
		int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;
		if (is_boolean((yyvsp[(1) - (3)].node)) && is_boolean((yyvsp[(3) - (3)].node)))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;
			    
			    p = strput(buf, end, "Incompatible types for & ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    } 
		    CREATE_BINARY_OP((yyval.node), F_AND, t1, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		} else (yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_AND, "&");
	    }
    break;

  case 137:
#line 1408 "grammar.y"
    {
#line 1322 "grammar.y.pre"
		if (exact_types && !compatible_types2((yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "== always false because of incompatible types ");
		    p = get_two_types(p, end, (yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		/* x == 0 -> !x */
		if (IS_NODE((yyvsp[(1) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(3) - (3)].node));
		} else
		if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(1) - (3)].node));
		} else {
		    CREATE_BINARY_OP((yyval.node), F_EQ, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 138:
#line 1431 "grammar.y"
    {
#line 1344 "grammar.y.pre"
		if (exact_types && !compatible_types2((yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "!= always true because of incompatible types ");
		    p = get_two_types(p, end, (yyvsp[(1) - (3)].node)->type, (yyvsp[(3) - (3)].node)->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
                CREATE_BINARY_OP((yyval.node), F_NE, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 139:
#line 1446 "grammar.y"
    {
#line 1358 "grammar.y.pre"
		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type;
		    int t3 = (yyvsp[(3) - (3)].node)->type;

		    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '");
			p = strput(p, end, get_f_name((yyvsp[(2) - (3)].number)));
			p = strput(p, end, "' : \"");
			p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!COMP_TYPE(t3, TYPE_NUMBER) 
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '");
                        p = strput(p, end, get_f_name((yyvsp[(2) - (3)].number)));
                        p = strput(p, end, "' : \"");
                        p = get_type_name(p, end, t3);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!compatible_types2(t1,t3)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to ");
			p = strput(p, end, get_f_name((yyvsp[(2) - (3)].number)));
			p = strput(p, end, " do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
		    }
		}
                CREATE_BINARY_OP((yyval.node), (yyvsp[(2) - (3)].number), TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	    }
    break;

  case 140:
#line 1491 "grammar.y"
    {
#line 1402 "grammar.y.pre"
                if (exact_types) {
                    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

                    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '<' : \"");
                        p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!COMP_TYPE(t3, TYPE_NUMBER)
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[200];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '<' : \"");
                        p = get_type_name(p, end, t3);
                        p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!compatible_types2(t1,t3)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to < do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
                        yyerror(buf);
                    }
                }
                CREATE_BINARY_OP((yyval.node), F_LT, TYPE_NUMBER, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
    break;

  case 141:
#line 1529 "grammar.y"
    {
#line 1439 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_LSH, "<<");
	    }
    break;

  case 142:
#line 1534 "grammar.y"
    {
#line 1443 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_RSH, ">>");
	    }
    break;

  case 143:
#line 1539 "grammar.y"
    {
#line 1447 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
#ifdef CAST_CALL_OTHERS
			if (t1 == TYPE_UNKNOWN){
			    yyerror("Bad arguments to '+' (unknown vs unknown)");
			    result_type = TYPE_ANY;
			} else
#endif
			    result_type = t1;
		    }
		    else if (t1 == TYPE_ANY) {
			if (t3 == TYPE_FUNCTION) {
			    yyerror("Bad right argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t3;
		    } else if (t3 == TYPE_ANY) {
			if (t1 == TYPE_FUNCTION) {
			    yyerror("Bad left argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t1;
		    } else {
			switch(t1) {
			    case TYPE_STRING:
			    {
				if (t3 == TYPE_REAL || t3 == TYPE_NUMBER){
				    result_type = TYPE_STRING;
				} else goto add_error;
				break;
			    }
			    case TYPE_NUMBER:
			    {
				if (t3 == TYPE_REAL || t3 == TYPE_STRING)
				    result_type = t3;
				else goto add_error;
				break;
			    }
			case TYPE_REAL:
			    {
				if (t3 == TYPE_NUMBER) result_type = TYPE_REAL;
				else if (t3 == TYPE_STRING) result_type = TYPE_STRING;
				else goto add_error;
				break;
			    }
			    default:
			    {
				if (t1 & t3 & TYPE_MOD_ARRAY) {
				    result_type = TYPE_ANY|TYPE_MOD_ARRAY;
				    break;
				}
add_error:
				{
				    char buf[256];
				    char *end = EndOf(buf);
				    char *p;
				    
				    p = strput(buf, end, "Invalid argument types to '+' ");
				    p = get_two_types(p, end, t1, t3);
				    yyerror(buf);
				    result_type = TYPE_ANY;
				}
			    }
			}
		    }
		} else 
		    result_type = TYPE_ANY;

		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    /* 0 + X */
		    if ((yyvsp[(1) - (3)].node)->v.number == 0 &&
			((yyvsp[(3) - (3)].node)->type == TYPE_NUMBER || (yyvsp[(3) - (3)].node)->type == TYPE_REAL)) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number += (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real += (yyvsp[(1) - (3)].node)->v.number;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if ((yyvsp[(3) - (3)].node)->type != TYPE_STRING && (yyvsp[(3) - (3)].node)->type != TYPE_ANY)
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    else
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real += (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real += (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if ((yyvsp[(3) - (3)].node)->type != TYPE_STRING && (yyvsp[(3) - (3)].node)->type != TYPE_ANY)
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    else
			CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_STRING:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_STRING) {
			/* Combine strings */
			int n1, n2;
			char *new, *s1, *s2;
			int l;

			n1 = (yyvsp[(1) - (3)].node)->v.number;
			n2 = (yyvsp[(3) - (3)].node)->v.number;
			s1 = PROG_STRING(n1);
			s2 = PROG_STRING(n2);
			new = (char *)DXALLOC( (l = strlen(s1))+strlen(s2)+1, TAG_COMPILER, "combine string" );
			strcpy(new, s1);
			strcat(new + l, s2);
			/* free old strings (ordering may help shrink table) */
			if (n1 > n2) {
			    free_prog_string(n1); free_prog_string(n2);
			} else {
			    free_prog_string(n2); free_prog_string(n1);
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->v.number = store_prog_string(new);
			FREE(new);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		default:
		    /* X + 0 */
		    if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0) &&
			((yyvsp[(1) - (3)].node)->type == TYPE_NUMBER || (yyvsp[(1) - (3)].node)->type == TYPE_REAL)) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_ADD, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		}
	    }
    break;

  case 144:
#line 1691 "grammar.y"
    {
#line 1598 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if (t1 == TYPE_ANY){
			switch(t3){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t3;
				break;
			    default:
				if (!(t3 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 2 to '-'", t3);
				    result_type = TYPE_ANY;
				} else result_type = t3;
			}
		    } else if (t3 == TYPE_ANY){
			switch(t1){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if ((t1 == TYPE_REAL && t3 == TYPE_NUMBER) ||
			       (t3 == TYPE_REAL && t1 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else if (t1 & t3 & TYPE_MOD_ARRAY){
			result_type = TYPE_MOD_ARRAY|TYPE_ANY;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '-' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;
		
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(1) - (3)].node)->v.number == 0) {
			CREATE_UNARY_OP((yyval.node), F_NEGATE, (yyvsp[(3) - (3)].node)->type, (yyvsp[(3) - (3)].node));
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number -= (yyvsp[(3) - (3)].node)->v.number;
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real = (yyvsp[(1) - (3)].node)->v.number - (yyvsp[(3) - (3)].node)->v.real;
		    } else {
			CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    }
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real -= (yyvsp[(3) - (3)].node)->v.number;
		    } else if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real -= (yyvsp[(3) - (3)].node)->v.real;
		    } else {
			CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    }
		    break;
		default:
		    /* optimize X-0 */
		    if (IS_NODE((yyvsp[(3) - (3)].node), NODE_NUMBER, 0)) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
		    } 
		    CREATE_BINARY_OP((yyval.node), F_SUBTRACT, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 145:
#line 1786 "grammar.y"
    {
#line 1692 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_MAPPING:
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			default:
				type_error("Bad argument number 1 to '*'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			switch(t){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			    case TYPE_MAPPING:
			        result_type = t;
				break;
			    default:
				type_error((t1 == TYPE_ANY) ?
					   "Bad argument number 2 to '*'" :
					   "Bad argument number 1 to '*'",
					   t);
				result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '*' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;

		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyval.node)->v.number *= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real *= (yyvsp[(1) - (3)].node)->v.number;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real *= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real *= (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].node));
		    break;
		default:
		    CREATE_BINARY_OP((yyval.node), F_MULTIPLY, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 146:
#line 1867 "grammar.y"
    {
#line 1772 "grammar.y.pre"
		(yyval.node) = binary_int_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), F_MOD, "%");
	    }
    break;

  case 147:
#line 1872 "grammar.y"
    {
#line 1776 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = (yyvsp[(1) - (3)].node)->type, t3 = (yyvsp[(3) - (3)].node)->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			case TYPE_ANY:
			        result_type = t1;
				break;
			    default:
				type_error("Bad argument 1 to '/'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			if (t == TYPE_REAL || t == TYPE_NUMBER)
			    result_type = t; 
			else {
			    type_error(t1 == TYPE_ANY ?
				       "Bad argument 2 to '/'" :
				       "Bad argument 1 to '/'", t);
			    result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)) {
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '/' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;		    

		/* constant expressions */
		switch ((yyvsp[(1) - (3)].node)->kind) {
		case NODE_NUMBER:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			if ((yyvsp[(3) - (3)].node)->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.number /= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			if ((yyvsp[(3) - (3)].node)->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(3) - (3)].node);
			(yyvsp[(3) - (3)].node)->v.real = ((yyvsp[(1) - (3)].node)->v.number / (yyvsp[(3) - (3)].node)->v.real);
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		case NODE_REAL:
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_NUMBER) {
			if ((yyvsp[(3) - (3)].node)->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real /= (yyvsp[(3) - (3)].node)->v.number;
			break;
		    }
		    if ((yyvsp[(3) - (3)].node)->kind == NODE_REAL) {
			if ((yyvsp[(3) - (3)].node)->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    (yyval.node) = (yyvsp[(1) - (3)].node);
			    break;
			}
			(yyval.node) = (yyvsp[(1) - (3)].node);
			(yyvsp[(1) - (3)].node)->v.real /= (yyvsp[(3) - (3)].node)->v.real;
			break;
		    }
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		    break;
		default:
		    CREATE_BINARY_OP((yyval.node), F_DIVIDE, result_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		}
	    }
    break;

  case 148:
#line 1968 "grammar.y"
    {
#line 1871 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (2)].node);
		(yyval.node)->type = (yyvsp[(1) - (2)].type);

		if (exact_types &&
		    (yyvsp[(2) - (2)].node)->type != (yyvsp[(1) - (2)].type) &&
		    (yyvsp[(2) - (2)].node)->type != TYPE_ANY && 
		    (yyvsp[(2) - (2)].node)->type != TYPE_UNKNOWN &&
		    (yyvsp[(1) - (2)].type) != TYPE_VOID) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Cannot cast ");
		    p = get_type_name(p, end, (yyvsp[(2) - (2)].node)->type);
		    p = strput(p, end, "to ");
		    p = get_type_name(p, end, (yyvsp[(1) - (2)].type));
		    yyerror(buf);
		}
	    }
    break;

  case 149:
#line 1990 "grammar.y"
    {
#line 1892 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_PRE_INC, 0, (yyvsp[(2) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(2) - (2)].node)->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(2) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to ++x", (yyvsp[(2) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 150:
#line 2012 "grammar.y"
    {
#line 1913 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_PRE_DEC, 0, (yyvsp[(2) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(2) - (2)].node)->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(2) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to --x", (yyvsp[(2) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;

	    }
    break;

  case 151:
#line 2035 "grammar.y"
    {
#line 1935 "grammar.y.pre"
		if ((yyvsp[(2) - (2)].node)->kind == NODE_NUMBER) {
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = !((yyval.node)->v.number);
		} else {
		    CREATE_UNARY_OP((yyval.node), F_NOT, TYPE_NUMBER, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 152:
#line 2045 "grammar.y"
    {
#line 1944 "grammar.y.pre"
		if (exact_types && !IS_TYPE((yyvsp[(2) - (2)].node)->type, TYPE_NUMBER))
		    type_error("Bad argument to ~", (yyvsp[(2) - (2)].node)->type);
		if ((yyvsp[(2) - (2)].node)->kind == NODE_NUMBER) {
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = ~(yyval.node)->v.number;
		} else {
		    CREATE_UNARY_OP((yyval.node), F_COMPL, TYPE_NUMBER, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 153:
#line 2057 "grammar.y"
    {
#line 1955 "grammar.y.pre"
		int result_type;
                if (exact_types){
		    int t = (yyvsp[(2) - (2)].node)->type;
		    if (!COMP_TYPE(t, TYPE_NUMBER)){
			type_error("Bad argument to unary '-'", t);
			result_type = TYPE_ANY;
		    } else result_type = t;
		} else result_type = TYPE_ANY;

		switch ((yyvsp[(2) - (2)].node)->kind) {
		case NODE_NUMBER:
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.number = -(yyval.node)->v.number;
		    break;
		case NODE_REAL:
		    (yyval.node) = (yyvsp[(2) - (2)].node);
		    (yyval.node)->v.real = -(yyval.node)->v.real;
		    break;
		default:
		    CREATE_UNARY_OP((yyval.node), F_NEGATE, result_type, (yyvsp[(2) - (2)].node));
		}
	    }
    break;

  case 154:
#line 2082 "grammar.y"
    {
#line 1979 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_POST_INC, 0, (yyvsp[(1) - (2)].node));
		(yyval.node)->v.number = F_POST_INC;
                if (exact_types){
                    switch((yyvsp[(1) - (2)].node)->type){
                        case TYPE_NUMBER:
		    case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            (yyval.node)->type = (yyvsp[(1) - (2)].node)->type;
                            break;
                        }

                        default:
                        {
                            (yyval.node)->type = TYPE_ANY;
                            type_error("Bad argument 1 to x++", (yyvsp[(1) - (2)].node)->type);
                        }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 155:
#line 2105 "grammar.y"
    {
#line 2001 "grammar.y.pre"
		CREATE_UNARY_OP((yyval.node), F_POST_DEC, 0, (yyvsp[(1) - (2)].node));
                if (exact_types){
                    switch((yyvsp[(1) - (2)].node)->type){
		    case TYPE_NUMBER:
		    case TYPE_ANY:
		    case TYPE_REAL:
		    {
			(yyval.node)->type = (yyvsp[(1) - (2)].node)->type;
			break;
		    }

		    default:
		    {
			(yyval.node)->type = TYPE_ANY;
			type_error("Bad argument 1 to x--", (yyvsp[(1) - (2)].node)->type);
		    }
                    }
                } else (yyval.node)->type = TYPE_ANY;
	    }
    break;

  case 162:
#line 2136 "grammar.y"
    {
#line 2031 "grammar.y.pre"
		if (exact_types && !IS_TYPE(exact_types, TYPE_VOID))
		    yywarn("Non-void functions must return a value.");
		CREATE_RETURN((yyval.node), 0);
	    }
    break;

  case 163:
#line 2143 "grammar.y"
    {
#line 2037 "grammar.y.pre"
		if (exact_types && !compatible_types((yyvsp[(2) - (3)].node)->type, exact_types & ~NAME_TYPE_MOD)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Type of returned value doesn't match function return type ");
		    p = get_two_types(p, end, (yyvsp[(2) - (3)].node)->type, exact_types & ~NAME_TYPE_MOD);
		    yyerror(buf);
		}
		if (IS_NODE((yyvsp[(2) - (3)].node), NODE_NUMBER, 0)) {
		    CREATE_RETURN((yyval.node), 0);
		} else {
		    CREATE_RETURN((yyval.node), (yyvsp[(2) - (3)].node));
		}
	    }
    break;

  case 164:
#line 2164 "grammar.y"
    {
#line 2057 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), 0);
	    }
    break;

  case 165:
#line 2169 "grammar.y"
    {
#line 2061 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (1)].node));
	    }
    break;

  case 166:
#line 2174 "grammar.y"
    {
#line 2065 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (2)].node));
	    }
    break;

  case 167:
#line 2182 "grammar.y"
    {
#line 2072 "grammar.y.pre"
		CREATE_EXPR_NODE((yyval.node), (yyvsp[(1) - (1)].node), 0);
	    }
    break;

  case 168:
#line 2187 "grammar.y"
    {
#line 2076 "grammar.y.pre"
		CREATE_EXPR_NODE((yyval.node), (yyvsp[(1) - (2)].node), 1);
	    }
    break;

  case 169:
#line 2195 "grammar.y"
    {
#line 2083 "grammar.y.pre"
		(yyvsp[(1) - (1)].node)->kind = 1;

		(yyval.node) = (yyvsp[(1) - (1)].node);
	    }
    break;

  case 170:
#line 2202 "grammar.y"
    {
#line 2089 "grammar.y.pre"
		(yyvsp[(3) - (3)].node)->kind = 0;

		(yyval.node) = (yyvsp[(1) - (3)].node);
		(yyval.node)->kind++;
		(yyval.node)->l.expr->r.expr = (yyvsp[(3) - (3)].node);
		(yyval.node)->l.expr = (yyvsp[(3) - (3)].node);
	    }
    break;

  case 171:
#line 2215 "grammar.y"
    {
#line 2101 "grammar.y.pre"
		/* this is a dummy node */
		CREATE_EXPR_LIST((yyval.node), 0);
	    }
    break;

  case 172:
#line 2221 "grammar.y"
    {
#line 2106 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (1)].node));
	    }
    break;

  case 173:
#line 2226 "grammar.y"
    {
#line 2110 "grammar.y.pre"
		CREATE_EXPR_LIST((yyval.node), (yyvsp[(1) - (2)].node));
	    }
    break;

  case 174:
#line 2234 "grammar.y"
    {
#line 2117 "grammar.y.pre"
		(yyval.node) = new_node_no_line();
		(yyval.node)->kind = 2;
		(yyval.node)->v.expr = (yyvsp[(1) - (1)].node);
		(yyval.node)->r.expr = 0;
		(yyval.node)->type = 0;
		/* we keep track of the end of the chain in the left nodes */
		(yyval.node)->l.expr = (yyval.node);
            }
    break;

  case 175:
#line 2245 "grammar.y"
    {
#line 2127 "grammar.y.pre"
		parse_node_t *expr;

		expr = new_node_no_line();
		expr->kind = 0;
		expr->v.expr = (yyvsp[(3) - (3)].node);
		expr->r.expr = 0;
		expr->type = 0;
		
		(yyvsp[(1) - (3)].node)->l.expr->r.expr = expr;
		(yyvsp[(1) - (3)].node)->l.expr = expr;
		(yyvsp[(1) - (3)].node)->kind += 2;
		(yyval.node) = (yyvsp[(1) - (3)].node);
	    }
    break;

  case 176:
#line 2264 "grammar.y"
    {
#line 2145 "grammar.y.pre"
		CREATE_TWO_VALUES((yyval.node), 0, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
            }
    break;

  case 177:
#line 2272 "grammar.y"
    {
#line 2152 "grammar.y.pre"
#define LV_ILLEGAL 1
#define LV_RANGE 2
#define LV_INDEX 4
                /* Restrictive lvalues, but I think they make more sense :) */
                (yyval.node) = (yyvsp[(1) - (1)].node);
                switch((yyval.node)->kind) {
		default:
		    yyerror("Illegal lvalue");
		    break;
		case NODE_PARAMETER:
		    (yyval.node)->kind = NODE_PARAMETER_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		    (yyval.node)->v.number = (yyval.node)->r.expr->v.number;
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    if ((yyval.node)->v.number >= F_LOCAL && (yyval.node)->v.number <= F_MEMBER)
			(yyval.node)->v.number++; /* make it an lvalue */
		    else if ((yyval.node)->v.number >= F_INDEX 
			     && (yyval.node)->v.number <= F_RE_RANGE) {
                        parse_node_t *node = (yyval.node);
                        int flag = 0;
                        do {
                            switch(node->kind) {
			    case NODE_PARAMETER:
				node->kind = NODE_PARAMETER_LVALUE;
				flag |= LV_ILLEGAL;
				break;
			    case NODE_TERNARY_OP:
				node->v.number = node->r.expr->v.number;
			    case NODE_OPCODE_1:
			    case NODE_UNARY_OP_1:
			    case NODE_BINARY_OP:
				if (node->v.number >= F_LOCAL 
				    && node->v.number <= F_MEMBER) {
				    node->v.number++;
				    flag |= LV_ILLEGAL;
				    break;
				} else if (node->v.number == F_INDEX ||
					 node->v.number == F_RINDEX) {
				    node->v.number++;
				    flag |= LV_INDEX;
				    break;
				} else if (node->v.number >= F_ADD_EQ
					   && node->v.number <= F_ASSIGN) {
				    if (!(flag & LV_INDEX)) {
					yyerror("Illegal lvalue, a possible lvalue is (x <assign> y)[a]");
				    }
				    if (node->r.expr->kind == NODE_BINARY_OP||
					node->r.expr->kind == NODE_TERNARY_OP){
					if (node->r.expr->v.number >= F_NN_RANGE_LVALUE && node->r.expr->v.number <= F_NR_RANGE_LVALUE)
					    yyerror("Illegal to have (x[a..b] <assign> y) to be the beginning of an lvalue");
				    }
				    flag = LV_ILLEGAL;
				    break;
				} else if (node->v.number >= F_NN_RANGE
					 && node->v.number <= F_RE_RANGE) {
				    if (flag & LV_RANGE) {
					yyerror("Can't do range lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
                                    if (flag & LV_INDEX){
					yyerror("Can't do indexed lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
				    if (node->v.number == F_NE_RANGE) {
					/* x[foo..] -> x[foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_NR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else if (node->v.number == F_RE_RANGE) {
					/* x[<foo..] -> x[<foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_RR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else
					node->r.expr->v.number++;
				    flag |= LV_RANGE;
				    node = node->r.expr->r.expr;
				    continue;
				}
			    default:
				yyerror("Illegal lvalue");
				flag = LV_ILLEGAL;
				break;
			    }   
                            if ((flag & LV_ILLEGAL) || !(node = node->r.expr)) break;
                        } while (1);
                        break;
		    } else 
			yyerror("Illegal lvalue");
		    break;
                }
            }
    break;

  case 179:
#line 2383 "grammar.y"
    {
#line 2262 "grammar.y.pre"
              int i;
              if ((i = (yyvsp[(1) - (1)].ihe)->dn.local_num) != -1) {
		  CREATE_OPCODE_1((yyval.node), F_LOCAL, type_of_locals_ptr[i],i & 0xff);
		  if (current_function_context)
		      current_function_context->num_locals++;
              } else
		  if ((i = (yyvsp[(1) - (1)].ihe)->dn.global_num) != -1) {
		      if (current_function_context)
			  current_function_context->bindable = FP_NOT_BINDABLE;
                          CREATE_OPCODE_1((yyval.node), F_GLOBAL,
				      VAR_TEMP(i)->type & ~NAME_TYPE_MOD, i);
		      if (VAR_TEMP(i)->type & NAME_HIDDEN) {
			  char buf[256];
			  char *end = EndOf(buf);
			  char *p;

			  p = strput(buf, end, "Illegal to use private variable '");
			  p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
			  p = strput(p, end, "'");
			  yyerror(buf);
		      }
		  } else {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Undefined variable '");
		      p = strput(p, end, (yyvsp[(1) - (1)].ihe)->name);
		      p = strput(p, end, "'");
		      if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
			  add_local_name((yyvsp[(1) - (1)].ihe)->name, TYPE_ANY);
		      }
		      CREATE_OPCODE_1((yyval.node), F_LOCAL, TYPE_ANY, 0);
		      yyerror(buf);
		  }
	    }
    break;

  case 180:
#line 2422 "grammar.y"
    {
#line 2300 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "Undefined variable '");
		p = strput(p, end, (yyvsp[(1) - (1)].string));
		p = strput(p, end, "'");
                if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
                    add_local_name((yyvsp[(1) - (1)].string), TYPE_ANY);
                }
                CREATE_OPCODE_1((yyval.node), F_LOCAL, TYPE_ANY, 0);
                yyerror(buf);
                scratch_free((yyvsp[(1) - (1)].string));
            }
    break;

  case 181:
#line 2439 "grammar.y"
    {
#line 2316 "grammar.y.pre"
		CREATE_PARAMETER((yyval.node), TYPE_ANY, (yyvsp[(1) - (1)].number));
            }
    break;

  case 182:
#line 2444 "grammar.y"
    {
#line 2320 "grammar.y.pre"
		(yyval.contextp) = current_function_context;
		/* already flagged as an error */
		if (current_function_context)
		    current_function_context = current_function_context->parent;
            }
    break;

  case 183:
#line 2452 "grammar.y"
    {
#line 2327 "grammar.y.pre"
		parse_node_t *node;

		current_function_context = (yyvsp[(3) - (5)].contextp);

		if (!current_function_context || current_function_context->num_parameters == -2) {
		    /* This was illegal, and error'ed when the '$' token
		     * was returned.
		     */
		    CREATE_ERROR((yyval.node));
		} else {
		    CREATE_OPCODE_1((yyval.node), F_LOCAL, (yyvsp[(4) - (5)].node)->type,
				    current_function_context->values_list->kind++);

		    node = new_node_no_line();
		    node->type = 0;
		    current_function_context->values_list->l.expr->r.expr = node;
		    current_function_context->values_list->l.expr = node;
		    node->r.expr = 0;
		    node->v.expr = (yyvsp[(4) - (5)].node);
		}
	    }
    break;

  case 184:
#line 2476 "grammar.y"
    {
#line 2350 "grammar.y.pre"
		if (!IS_CLASS((yyvsp[(1) - (3)].node)->type)) {
		    yyerror("Left argument of -> is not a class");
		    CREATE_ERROR((yyval.node));
		} else {
		    CREATE_UNARY_OP_1((yyval.node), F_MEMBER, 0, (yyvsp[(1) - (3)].node), 0);
		    (yyval.node)->l.number = lookup_class_member(CLASS_IDX((yyvsp[(1) - (3)].node)->type),
						       (yyvsp[(3) - (3)].string),
						       &((yyval.node)->type));
		}
		scratch_free((yyvsp[(3) - (3)].string));
            }
    break;

  case 185:
#line 2490 "grammar.y"
    {
#line 2363 "grammar.y.pre"
                if ((yyvsp[(5) - (6)].node)->kind == NODE_NUMBER && (yyvsp[(5) - (6)].node)->v.number < 0)
		    yywarn("A negative constant as the second element of arr[x..y] no longer means indexing from the end.  Use arr[x..<y]");
                (yyval.node) = make_range_node(F_NN_RANGE, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
            }
    break;

  case 186:
#line 2497 "grammar.y"
    {
#line 2371 "grammar.y.pre"
                (yyval.node) = make_range_node(F_RN_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(6) - (7)].node));
            }
    break;

  case 187:
#line 2502 "grammar.y"
    {
#line 2375 "grammar.y.pre"
		if ((yyvsp[(7) - (8)].node)->kind == NODE_NUMBER && (yyvsp[(7) - (8)].node)->v.number <= 1)
		    (yyval.node) = make_range_node(F_RE_RANGE, (yyvsp[(1) - (8)].node), (yyvsp[(4) - (8)].node), 0);
		else
		    (yyval.node) = make_range_node(F_RR_RANGE, (yyvsp[(1) - (8)].node), (yyvsp[(4) - (8)].node), (yyvsp[(7) - (8)].node));
            }
    break;

  case 188:
#line 2510 "grammar.y"
    {
#line 2382 "grammar.y.pre"
		if ((yyvsp[(6) - (7)].node)->kind == NODE_NUMBER && (yyvsp[(6) - (7)].node)->v.number <= 1)
		    (yyval.node) = make_range_node(F_NE_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(3) - (7)].node), 0);
		else
		    (yyval.node) = make_range_node(F_NR_RANGE, (yyvsp[(1) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].node));
            }
    break;

  case 189:
#line 2518 "grammar.y"
    {
#line 2389 "grammar.y.pre"
                (yyval.node) = make_range_node(F_NE_RANGE, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), 0);
            }
    break;

  case 190:
#line 2523 "grammar.y"
    {
#line 2393 "grammar.y.pre"
                (yyval.node) = make_range_node(F_RE_RANGE, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), 0);
            }
    break;

  case 191:
#line 2528 "grammar.y"
    {
#line 2397 "grammar.y.pre"
                if (IS_NODE((yyvsp[(1) - (5)].node), NODE_CALL, F_AGGREGATE)
		    && (yyvsp[(4) - (5)].node)->kind == NODE_NUMBER) {
                    int i = (yyvsp[(4) - (5)].node)->v.number;
                    if (i < 1 || i > (yyvsp[(1) - (5)].node)->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = (yyvsp[(1) - (5)].node)->r.expr;
                        i = (yyvsp[(1) - (5)].node)->l.number - i;
                        while (i--)
                            node = node->r.expr;
                        (yyval.node) = node->v.expr;
                        break;
                    }
                }
		CREATE_BINARY_OP((yyval.node), F_RINDEX, 0, (yyvsp[(4) - (5)].node), (yyvsp[(1) - (5)].node));
                if (exact_types) {
		    switch((yyvsp[(1) - (5)].node)->type) {
		    case TYPE_MAPPING:
			yyerror("Illegal index for mapping.");
		    case TYPE_ANY:
			(yyval.node)->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			(yyval.node)->type = TYPE_NUMBER;
			if (!IS_TYPE((yyvsp[(4) - (5)].node)->type,TYPE_NUMBER))
			    type_error("Bad type of index", (yyvsp[(4) - (5)].node)->type);
			break;
			
		    default:
			if ((yyvsp[(1) - (5)].node)->type & TYPE_MOD_ARRAY) {
			    (yyval.node)->type = (yyvsp[(1) - (5)].node)->type & ~TYPE_MOD_ARRAY;
			    if (!IS_TYPE((yyvsp[(4) - (5)].node)->type,TYPE_NUMBER))
				type_error("Bad type of index", (yyvsp[(4) - (5)].node)->type);
			} else {
			    type_error("Value indexed has a bad type ", (yyvsp[(1) - (5)].node)->type);
			    (yyval.node)->type = TYPE_ANY;
			}
		    }
		} else (yyval.node)->type = TYPE_ANY;
            }
    break;

  case 192:
#line 2572 "grammar.y"
    {
#line 2440 "grammar.y.pre"
		/* Something stupid like ({ 1, 2, 3 })[1]; we take the
		 * time to optimize this because people who don't understand
		 * the preprocessor often write things like:
		 *
		 * #define MY_ARRAY ({ "foo", "bar", "bazz" })
		 * ...
		 * ... MY_ARRAY[1] ...
		 *
		 * which of course expands to the above.
		 */
                if (IS_NODE((yyvsp[(1) - (4)].node), NODE_CALL, F_AGGREGATE) && (yyvsp[(3) - (4)].node)->kind == NODE_NUMBER) {
                    int i = (yyvsp[(3) - (4)].node)->v.number;
                    if (i < 0 || i >= (yyvsp[(1) - (4)].node)->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = (yyvsp[(1) - (4)].node)->r.expr;
                        while (i--)
                            node = node->r.expr;
                        (yyval.node) = node->v.expr;
                        break;
                    }
                }
                if ((yyvsp[(3) - (4)].node)->kind == NODE_NUMBER && (yyvsp[(3) - (4)].node)->v.number < 0)
		    yywarn("A negative constant in arr[x] no longer means indexing from the end.  Use arr[<x]");
                CREATE_BINARY_OP((yyval.node), F_INDEX, 0, (yyvsp[(3) - (4)].node), (yyvsp[(1) - (4)].node));
                if (exact_types) {
		    switch((yyvsp[(1) - (4)].node)->type) {
		    case TYPE_MAPPING:
		    case TYPE_ANY:
			(yyval.node)->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			(yyval.node)->type = TYPE_NUMBER;
			if (!IS_TYPE((yyvsp[(3) - (4)].node)->type,TYPE_NUMBER))
			    type_error("Bad type of index", (yyvsp[(3) - (4)].node)->type);
			break;
			
		    default:
			if ((yyvsp[(1) - (4)].node)->type & TYPE_MOD_ARRAY) {
			    (yyval.node)->type = (yyvsp[(1) - (4)].node)->type & ~TYPE_MOD_ARRAY;
			    if (!IS_TYPE((yyvsp[(3) - (4)].node)->type,TYPE_NUMBER))
				type_error("Bad type of index", (yyvsp[(3) - (4)].node)->type);
			} else {
			    type_error("Value indexed has a bad type ", (yyvsp[(1) - (4)].node)->type);
			    (yyval.node)->type = TYPE_ANY;
			}
                    }
                } else (yyval.node)->type = TYPE_ANY;
            }
    break;

  case 194:
#line 2626 "grammar.y"
    {
#line 2495 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (3)].node);
	    }
    break;

  case 196:
#line 2632 "grammar.y"
    {
#line 2503 "grammar.y.pre"
	        if ((yyvsp[(1) - (1)].type) != TYPE_FUNCTION) yyerror("Reserved type name unexpected.");
		(yyval.func_block).num_local = current_number_of_locals;
		(yyval.func_block).max_num_locals = max_num_locals;
		(yyval.func_block).context = context;
		(yyval.func_block).save_current_type = current_type;
		(yyval.func_block).save_exact_types = exact_types;
	        if (type_of_locals_ptr + max_num_locals + CFG_MAX_LOCAL_VARIABLES >= &type_of_locals[type_of_locals_size])
		    reallocate_locals();
		deactivate_current_locals();
		locals_ptr += current_number_of_locals;
		type_of_locals_ptr += max_num_locals;
		runtime_locals_ptr += current_number_of_locals;
		max_num_locals = current_number_of_locals = 0;
		push_function_context();
		current_function_context->num_parameters = -1;
		exact_types = TYPE_ANY;
		context = 0;
            }
    break;

  case 197:
#line 2653 "grammar.y"
    {
#line 2523 "grammar.y.pre"
		if ((yyvsp[(4) - (6)].argument).flags & ARG_IS_PROTO) {
		    yyerror("Missing name for function argument");
		}
		if ((yyvsp[(4) - (6)].argument).flags & ARG_IS_VARARGS) {
		    yyerror("Anonymous varargs functions aren't implemented");
		}
		if (!(yyvsp[(6) - (6)].decl).node) {
		    CREATE_RETURN((yyval.node), 0);
		} else if ((yyvsp[(6) - (6)].decl).node->kind != NODE_RETURN &&
			   ((yyvsp[(6) - (6)].decl).node->kind != NODE_TWO_VALUES || (yyvsp[(6) - (6)].decl).node->r.expr->kind != NODE_RETURN)) {
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, (yyvsp[(6) - (6)].decl).node, 0);
		    CREATE_RETURN(replacement->r.expr, 0);
		    (yyvsp[(6) - (6)].decl).node = replacement;
		}
		
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_ANON_FUNC;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->l.number = (max_num_locals - (yyvsp[(4) - (6)].argument).num_arg);
		(yyval.node)->r.expr = (yyvsp[(6) - (6)].decl).node;
		(yyval.node)->v.number = (yyvsp[(4) - (6)].argument).num_arg;
		if (current_function_context->bindable)
		    (yyval.node)->v.number |= 0x10000;
		free_all_local_names();
		
		current_number_of_locals = (yyvsp[(2) - (6)].func_block).num_local;
		max_num_locals = (yyvsp[(2) - (6)].func_block).max_num_locals;
		context = (yyvsp[(2) - (6)].func_block).context;
		current_type = (yyvsp[(2) - (6)].func_block).save_current_type;
		exact_types = (yyvsp[(2) - (6)].func_block).save_exact_types;
		pop_function_context();
		
		locals_ptr -= current_number_of_locals;
		type_of_locals_ptr -= max_num_locals;
		runtime_locals_ptr -= current_number_of_locals;
		reactivate_current_locals();
	    }
    break;

  case 198:
#line 2694 "grammar.y"
    {
#line 2563 "grammar.y.pre"
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->r.expr = 0;
		switch ((yyvsp[(1) - (3)].number) & 0xff) {
		case FP_L_VAR:
		    yyerror("Illegal to use local variable in a functional.");
		    CREATE_NUMBER((yyval.node)->l.expr, 0);
		    (yyval.node)->l.expr->r.expr = 0;
		    (yyval.node)->l.expr->l.expr = 0;
		    (yyval.node)->v.number = FP_FUNCTIONAL;
		    break;
		case FP_G_VAR:
		    CREATE_OPCODE_1((yyval.node)->l.expr, F_GLOBAL, 0, (yyvsp[(1) - (3)].number) >> 8);
		    (yyval.node)->v.number = FP_FUNCTIONAL | FP_NOT_BINDABLE;
		    if (VAR_TEMP((yyval.node)->l.expr->l.number)->type & NAME_HIDDEN) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Illegal to use private variable '");
		      p = strput(p, end, VAR_TEMP((yyval.node)->l.expr->l.number)->name);
		      p = strput(p, end, "'");
		      yyerror(buf);
		    }
		    break;
		default:
		    (yyval.node)->v.number = (yyvsp[(1) - (3)].number);
		    break;
		}
	    }
    break;

  case 199:
#line 2728 "grammar.y"
    {
#line 2596 "grammar.y.pre"
		(yyval.node) = new_node();
		(yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		(yyval.node)->type = TYPE_FUNCTION;
		(yyval.node)->v.number = (yyvsp[(1) - (5)].number);
		(yyval.node)->r.expr = (yyvsp[(3) - (5)].node);
		
		switch ((yyvsp[(1) - (5)].number) & 0xff) {
		case FP_EFUN: {
		    int *argp;
		    int f = (yyvsp[(1) - (5)].number) >>8;
		    int num = (yyvsp[(3) - (5)].node)->kind;
		    int max_arg = predefs[f].max_args;
		    
		    if (num > max_arg && max_arg != -1) {
			parse_node_t *pn = (yyvsp[(3) - (5)].node);
			
			while (pn) {
			    if (pn->type & 1) break;
			    pn = pn->r.expr;
			}
			
			if (!pn) {
			    char bff[256];
			    char *end = EndOf(bff);
			    char *p;
			    
			    p = strput(bff, end, "Too many arguments to ");
			    p = strput(p, end, predefs[f].word);
			    yyerror(bff);
			}
		    } else if (max_arg != -1 && exact_types) {
			/*
			 * Now check all types of arguments to efuns.
			 */
			int i, argn, tmp;
			parse_node_t *enode = (yyvsp[(3) - (5)].node);
			argp = &efun_arg_types[predefs[f].arg_index];
			
			for (argn = 0; argn < num; argn++) {
			    if (enode->type & 1) break;
			    
			    tmp = enode->v.expr->type;
			    for (i=0; !compatible_types(tmp, argp[i])
				 && argp[i] != 0; i++)
				;
			    if (argp[i] == 0) {
				char buf[256];
				char *end = EndOf(buf);
				char *p;

				p = strput(buf, end, "Bad argument ");
				p = strput_int(p, end, argn+1);
				p = strput(p, end, " to efun ");
				p = strput(p, end, predefs[f].word);
				p = strput(p, end, "()");
				yyerror(buf);
			    } else {
				/* this little section necessary b/c in the
				   case float | int we dont want to do
				   promoting. */
				if (tmp == TYPE_NUMBER && argp[i] == TYPE_REAL) {
				    for (i++; argp[i] && argp[i] != TYPE_NUMBER; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_float(enode->v.expr);
				}
				if (tmp == TYPE_REAL && argp[i] == TYPE_NUMBER) {
				    for (i++; argp[i] && argp[i] != TYPE_REAL; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_int(enode->v.expr);
				}
			    }
			    while (argp[i] != 0)
				i++;
			    argp += i + 1;
			    enode = enode->r.expr;
			}
		    }
		    break;
		}
		case FP_L_VAR:
		case FP_G_VAR:
		    yyerror("Can't give parameters to functional.");
		    break;
		}
	    }
    break;

  case 200:
#line 2818 "grammar.y"
    {
#line 2685 "grammar.y.pre"
		 if (current_function_context->num_locals)
		     yyerror("Illegal to use local variable in functional.");
		 if (current_function_context->values_list->r.expr)
		     current_function_context->values_list->r.expr->kind = current_function_context->values_list->kind;
		 
		 (yyval.node) = new_node();
		 (yyval.node)->kind = NODE_FUNCTION_CONSTRUCTOR;
		 (yyval.node)->type = TYPE_FUNCTION;
		 (yyval.node)->l.expr = (yyvsp[(2) - (4)].node);
		 if ((yyvsp[(2) - (4)].node)->kind == NODE_STRING)
		     yywarn("Function pointer returning string constant is NOT a function call");
		 (yyval.node)->r.expr = current_function_context->values_list->r.expr;
		 (yyval.node)->v.number = FP_FUNCTIONAL + current_function_context->bindable
		     + (current_function_context->num_parameters << 8);
		 pop_function_context();
             }
    break;

  case 201:
#line 2837 "grammar.y"
    {
#line 2703 "grammar.y.pre"
		CREATE_CALL((yyval.node), F_AGGREGATE_ASSOC, TYPE_MAPPING, (yyvsp[(2) - (4)].node));
	    }
    break;

  case 202:
#line 2842 "grammar.y"
    {
#line 2707 "grammar.y.pre"
		CREATE_CALL((yyval.node), F_AGGREGATE, TYPE_ANY | TYPE_MOD_ARRAY, (yyvsp[(2) - (4)].node));
	    }
    break;

  case 203:
#line 2850 "grammar.y"
    {
#line 2714 "grammar.y.pre"
		(yyval.node) = (yyvsp[(1) - (1)].decl).node;
	    }
    break;

  case 204:
#line 2855 "grammar.y"
    {
#line 2718 "grammar.y.pre"
		(yyval.node) = insert_pop_value((yyvsp[(2) - (3)].node));
	    }
    break;

  case 205:
#line 2863 "grammar.y"
    {
#line 2725 "grammar.y.pre"
		(yyval.number) = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 206:
#line 2869 "grammar.y"
    {
#line 2730 "grammar.y.pre"
		CREATE_CATCH((yyval.node), (yyvsp[(3) - (3)].node));
		context = (yyvsp[(2) - (3)].number);
	    }
    break;

  case 207:
#line 2879 "grammar.y"
    {
#line 2754 "grammar.y.pre"
		int p = (yyvsp[(6) - (7)].node)->v.number;
		CREATE_LVALUE_EFUN((yyval.node), TYPE_NUMBER, (yyvsp[(6) - (7)].node));
		CREATE_BINARY_OP_1((yyval.node)->l.expr, F_SSCANF, 0, (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), p);
	    }
    break;

  case 208:
#line 2889 "grammar.y"
    {
#line 2763 "grammar.y.pre"
		int p = (yyvsp[(8) - (9)].node)->v.number;
		CREATE_LVALUE_EFUN((yyval.node), TYPE_NUMBER, (yyvsp[(8) - (9)].node));
		CREATE_TERNARY_OP_1((yyval.node)->l.expr, F_PARSE_COMMAND, 0, 
				    (yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), p);
	    }
    break;

  case 209:
#line 2900 "grammar.y"
    {
#line 2773 "grammar.y.pre"
		(yyval.number) = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 210:
#line 2906 "grammar.y"
    {
#line 2778 "grammar.y.pre"
		CREATE_TIME_EXPRESSION((yyval.node), (yyvsp[(3) - (3)].node));
		context = (yyvsp[(2) - (3)].number);
	    }
    break;

  case 211:
#line 2915 "grammar.y"
    {
#line 2786 "grammar.y.pre"
	        (yyval.node) = new_node_no_line();
		(yyval.node)->r.expr = 0;
	        (yyval.node)->v.number = 0;
	    }
    break;

  case 212:
#line 2922 "grammar.y"
    {
#line 2792 "grammar.y.pre"
		parse_node_t *insert;
		
		(yyval.node) = (yyvsp[(3) - (3)].node);
		insert = new_node_no_line();
		insert->r.expr = (yyvsp[(3) - (3)].node)->r.expr;
		insert->l.expr = (yyvsp[(2) - (3)].node);
		(yyvsp[(3) - (3)].node)->r.expr = insert;
		(yyval.node)->v.number++;
	    }
    break;

  case 213:
#line 2937 "grammar.y"
    {
#line 2806 "grammar.y.pre"
		CREATE_STRING((yyval.node), (yyvsp[(1) - (1)].string));
		scratch_free((yyvsp[(1) - (1)].string));
	    }
    break;

  case 215:
#line 2947 "grammar.y"
    {
#line 2815 "grammar.y.pre"
		(yyval.string) = (yyvsp[(2) - (3)].string);
	    }
    break;

  case 216:
#line 2952 "grammar.y"
    {
#line 2819 "grammar.y.pre"
		(yyval.string) = scratch_join((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
	    }
    break;

  case 218:
#line 2961 "grammar.y"
    {
#line 2827 "grammar.y.pre"
		(yyval.string) = scratch_join((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
	    }
    break;

  case 219:
#line 2968 "grammar.y"
    {
#line 2833 "grammar.y.pre"
	(yyval.node) = new_node();
	(yyval.node)->l.expr = (parse_node_t *)(yyvsp[(1) - (3)].string);
	(yyval.node)->v.expr = (yyvsp[(3) - (3)].node);
	(yyval.node)->r.expr = 0;
    }
    break;

  case 220:
#line 2979 "grammar.y"
    {
#line 2843 "grammar.y.pre"
	(yyval.node) = 0;
    }
    break;

  case 221:
#line 2984 "grammar.y"
    {
#line 2847 "grammar.y.pre"
	(yyval.node) = (yyvsp[(3) - (3)].node);
	(yyval.node)->r.expr = (yyvsp[(1) - (3)].node);
    }
    break;

  case 222:
#line 2994 "grammar.y"
    {
#line 2856 "grammar.y.pre"
	      (yyval.node) = validate_efun_call((yyvsp[(1) - (4)].number),(yyvsp[(3) - (4)].node));
	    }
    break;

  case 223:
#line 2999 "grammar.y"
    {
#line 2860 "grammar.y.pre"
		ident_hash_elem_t *ihe;

		ihe = lookup_ident("clone_object");
		(yyval.node) = validate_efun_call(ihe->dn.efun_num, (yyvsp[(3) - (4)].node));
            }
    break;

  case 224:
#line 3007 "grammar.y"
    {
#line 2867 "grammar.y.pre"
		parse_node_t *node;
		
		if ((yyvsp[(4) - (6)].ihe)->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, (yyvsp[(4) - (6)].ihe)->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    CREATE_ERROR((yyval.node));
		    node = (yyvsp[(5) - (6)].node);
		    while (node) {
			scratch_free((char *)node->l.expr);
			node = node->r.expr;
		    }
		} else {
		    int type = (yyvsp[(4) - (6)].ihe)->dn.class_num | TYPE_MOD_CLASS;
		    
		    if ((node = (yyvsp[(5) - (6)].node))) {
			CREATE_TWO_VALUES((yyval.node), type, 0, 0);
			(yyval.node)->l.expr = reorder_class_values((yyvsp[(4) - (6)].ihe)->dn.class_num,
							node);
			CREATE_OPCODE_1((yyval.node)->r.expr, F_NEW_CLASS,
					type, (yyvsp[(4) - (6)].ihe)->dn.class_num);
			
		    } else {
			CREATE_OPCODE_1((yyval.node), F_NEW_EMPTY_CLASS,
					type, (yyvsp[(4) - (6)].ihe)->dn.class_num);
		    }
		}
            }
    break;

  case 225:
#line 3043 "grammar.y"
    {
#line 2902 "grammar.y.pre"
	      int f;

	      (yyval.node) = (yyvsp[(3) - (4)].node);
	      if ((f = (yyvsp[(1) - (4)].ihe)->dn.function_num) != -1) {
		  if (FUNCTION_FLAGS(f) & NAME_HIDDEN) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Illegal to call private function '");
		      p = strput(p, end, (yyvsp[(1) - (4)].ihe)->name);
		      p = strput(p, end, "'");
		      yyerror(buf);
		  }
		  if (current_function_context)
		      current_function_context->bindable = FP_NOT_BINDABLE;

		  (yyval.node)->kind = NODE_CALL_1;
		  (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		  (yyval.node)->l.number = f;
		  (yyval.node)->type = validate_function_call(f, (yyvsp[(3) - (4)].node)->r.expr);
	      } else
	      if ((f=(yyvsp[(1) - (4)].ihe)->dn.simul_num) != -1) {
		  (yyval.node)->kind = NODE_CALL_1;
		  (yyval.node)->v.number = F_SIMUL_EFUN;
		  (yyval.node)->l.number = f;
		  (yyval.node)->type = (SIMUL(f)->type) & ~NAME_TYPE_MOD;
	      } else 
	      if ((f=(yyvsp[(1) - (4)].ihe)->dn.efun_num) != -1) {
		  (yyval.node) = validate_efun_call(f, (yyvsp[(3) - (4)].node));
	      } else {
		/* This here is a really nasty case that only occurs with
		 * exact_types off.  The user has done something gross like:
		 *
		 * func() { int f; f(); } // if f was prototyped we wouldn't
		 * f() { }                // need this case
		 *
		 * Don't complain, just grok it.
		 */
		int cf, f;

		if (current_function_context)
		    current_function_context->bindable = FP_NOT_BINDABLE;
		
		cf = define_new_function((yyvsp[(1) - (4)].ihe)->name, 0, 0, 
					 NAME_UNDEFINED | NAME_PROTOTYPE, 0);
		f = COMPILER_FUNC(cf)->runtime_index;
		(yyval.node)->kind = NODE_CALL_1;
		(yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		(yyval.node)->l.number = f;
		(yyval.node)->type = TYPE_ANY; /* just a guess */
		if (exact_types) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    char *n = (yyvsp[(1) - (4)].ihe)->name;
		    if (*n == ':') n++;
		    /* prevent some errors; by making it look like an
		     * inherited function we prevent redeclaration errors
		     * if it shows up later
		     */
		    FUNCTION_FLAGS(f) &= ~NAME_UNDEFINED;
		    FUNCTION_FLAGS(f) |= NAME_INHERITED;
		    COMPILER_FUNC(cf)->type |= NAME_VARARGS;
		    p = strput(buf, end, "Undefined function ");
		    p = strput(p, end, n);
		    yyerror(buf);
		}
	      }
	    }
    break;

  case 226:
#line 3116 "grammar.y"
    {
#line 2974 "grammar.y.pre"
	      char *name = (yyvsp[(1) - (4)].string);

	      (yyval.node) = (yyvsp[(3) - (4)].node);
	      
	      if (current_function_context)
		  current_function_context->bindable = FP_NOT_BINDABLE;

	      if (*name == ':') {
		  int f;
		  
		  if ((f = arrange_call_inherited(name + 1, (yyval.node))) != -1)
		      /* Can't do this; f may not be the correct function
			 entry.  It might be overloaded.
			 
		      validate_function_call(f, $$->r.expr)
		      */
		      ;
	      } else {
		  int f;
		  ident_hash_elem_t *ihe;
		  
		  f = (ihe = lookup_ident(name)) ? ihe->dn.function_num : -1;
		  (yyval.node)->kind = NODE_CALL_1;
		  (yyval.node)->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		  if (f!=-1) {
		      /* The only way this can happen is if function_name
		       * below made the function name.  The lexer would
		       * return L_DEFINED_NAME instead.
		       */
		      (yyval.node)->type = validate_function_call(f, (yyvsp[(3) - (4)].node)->r.expr);
		  } else {
		      f = define_new_function(name, 0, 0, 
					      NAME_UNDEFINED | NAME_PROTOTYPE, 0);
		      f = COMPILER_FUNC(f)->runtime_index;
		  }
		  (yyval.node)->l.number = f;
		  /*
		   * Check if this function has been defined.
		   * But, don't complain yet about functions defined
		   * by inheritance.
		   */
		  if (exact_types && (FUNCTION_FLAGS(f) & NAME_UNDEFINED)) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      char *n = (yyvsp[(1) - (4)].string);
		      if (*n == ':') n++;
		      /* prevent some errors */
		      FUNCTION_FLAGS(f) &= ~NAME_UNDEFINED;
		      FUNCTION_FLAGS(f) |= (NAME_INHERITED | NAME_VARARGS);
		      p = strput(buf, end, "Undefined function ");
		      p = strput(p, end, n);
		      yyerror(buf);
		  }
		  if (!(FUNCTION_FLAGS(f) & NAME_UNDEFINED))
		      (yyval.node)->type = FUNCTION_DEF(f)->type;
		  else
		      (yyval.node)->type = TYPE_ANY;  /* Just a guess */
	      }
	      scratch_free(name);
	  }
    break;

  case 227:
#line 3180 "grammar.y"
    {
#line 3037 "grammar.y.pre"
		parse_node_t *expr, *expr2;
		(yyval.node) = (yyvsp[(5) - (6)].node);
		(yyval.node)->kind = NODE_EFUN;
		(yyval.node)->l.number = (yyval.node)->v.number + 2;
		(yyval.node)->v.number = F_CALL_OTHER;
#ifdef CAST_CALL_OTHERS
		(yyval.node)->type = TYPE_UNKNOWN;
#else
                (yyval.node)->type = TYPE_ANY;
#endif		  
		expr = new_node_no_line();
		expr->type = 0;
		expr->v.expr = (yyvsp[(1) - (6)].node);

		expr2 = new_node_no_line();
		expr2->type = 0;
		CREATE_STRING(expr2->v.expr, (yyvsp[(3) - (6)].string));
		scratch_free((yyvsp[(3) - (6)].string));

		/* insert the two nodes */
		expr2->r.expr = (yyval.node)->r.expr;
		expr->r.expr = expr2;
		(yyval.node)->r.expr = expr;
	    }
    break;

  case 228:
#line 3207 "grammar.y"
    {
#line 3063 "grammar.y.pre"
	        parse_node_t *expr;

		(yyval.node) = (yyvsp[(6) - (7)].node);
		(yyval.node)->kind = NODE_EFUN;
		(yyval.node)->l.number = (yyval.node)->v.number + 1;
		(yyval.node)->v.number = F_EVALUATE;
#ifdef CAST_CALL_OTHERS
		(yyval.node)->type = TYPE_UNKNOWN;
#else
		(yyval.node)->type = TYPE_ANY;
#endif
		expr = new_node_no_line();
		expr->type = 0;
		expr->v.expr = (yyvsp[(3) - (7)].node);
		expr->r.expr = (yyval.node)->r.expr;
		(yyval.node)->r.expr = expr;
	    }
    break;

  case 229:
#line 3228 "grammar.y"
    {
#line 3083 "grammar.y.pre"
	svalue_t *res;
	ident_hash_elem_t *ihe;

	(yyval.number) = (ihe = lookup_ident((yyvsp[(3) - (3)].string))) ? ihe->dn.efun_num : -1;
	if ((yyval.number) == -1) {
	    char buf[256];
	    char *end = EndOf(buf);
	    char *p;
	    
	    p = strput(buf, end, "Unknown efun: ");
	    p = strput(p, end, (yyvsp[(3) - (3)].string));
	    yyerror(buf);
	} else {
	    push_malloced_string(the_file_name(current_file));
	    share_and_push_string((yyvsp[(3) - (3)].string));
	    push_malloced_string(add_slash(main_file_name()));
	    res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	    if (!MASTER_APPROVED(res)) {
		yyerror("Invalid simulated efunction override");
		(yyval.number) = -1;
	    }
	}
	scratch_free((yyvsp[(3) - (3)].string));
      }
    break;

  case 230:
#line 3254 "grammar.y"
    {
#line 3108 "grammar.y.pre"
	ident_hash_elem_t *ihe;
	svalue_t *res;
	
	ihe = lookup_ident("clone_object");
	push_malloced_string(the_file_name(current_file));
	push_constant_string("clone_object");
	push_malloced_string(add_slash(main_file_name()));
	res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	if (!MASTER_APPROVED(res)) {
	    yyerror("Invalid simulated efunction override");
	    (yyval.number) = -1;
	} else (yyval.number) = ihe->dn.efun_num;
      }
    break;

  case 232:
#line 3274 "grammar.y"
    {
#line 3127 "grammar.y.pre"
		int l = strlen((yyvsp[(2) - (2)].string)) + 1;
		char *p;
		/* here we be a bit cute.  we put a : on the front so we
		 * don't have to strchr for it.  Here we do:
		 * "name" -> ":::name"
		 */
		(yyval.string) = scratch_realloc((yyvsp[(2) - (2)].string), l + 3);
		p = (yyval.string) + l;
		while (p--,l--)
		    *(p+3) = *p;
		strncpy((yyval.string), ":::", 3);
	    }
    break;

  case 233:
#line 3289 "grammar.y"
    {
#line 3141 "grammar.y.pre"
		int z, l = strlen((yyvsp[(3) - (3)].string)) + 1;
		char *p;
		/* <type> and "name" -> ":type::name" */
		z = strlen(compiler_type_names[(yyvsp[(1) - (3)].type)]) + 3; /* length of :type:: */
		(yyval.string) = scratch_realloc((yyvsp[(3) - (3)].string), l + z);
		p = (yyval.string) + l;
		while (p--,l--)
		    *(p+z) = *p;
		(yyval.string)[0] = ':';
		strncpy((yyval.string) + 1, compiler_type_names[(yyvsp[(1) - (3)].type)], z - 3);
		(yyval.string)[z-2] = ':';
		(yyval.string)[z-1] = ':';
	    }
    break;

  case 234:
#line 3305 "grammar.y"
    {
#line 3156 "grammar.y.pre"
		int l = strlen((yyvsp[(1) - (3)].string));
		/* "ob" and "name" -> ":ob::name" */
		(yyval.string) = scratch_alloc(l + strlen((yyvsp[(3) - (3)].string)) + 4);
		*((yyval.string)) = ':';
		strcpy((yyval.string) + 1, (yyvsp[(1) - (3)].string));
		strcpy((yyval.string) + l + 1, "::");
		strcpy((yyval.string) + l + 3, (yyvsp[(3) - (3)].string));
		scratch_free((yyvsp[(1) - (3)].string));
		scratch_free((yyvsp[(3) - (3)].string));
	    }
    break;

  case 235:
#line 3321 "grammar.y"
    {
#line 3171 "grammar.y.pre"
		/* x != 0 -> x */
		if (IS_NODE((yyvsp[(3) - (6)].node), NODE_BINARY_OP, F_NE)) {
		    if (IS_NODE((yyvsp[(3) - (6)].node)->r.expr, NODE_NUMBER, 0))
			(yyvsp[(3) - (6)].node) = (yyvsp[(3) - (6)].node)->l.expr;
		    else if (IS_NODE((yyvsp[(3) - (6)].node)->l.expr, NODE_NUMBER, 0))
			     (yyvsp[(3) - (6)].node) = (yyvsp[(3) - (6)].node)->r.expr;
		}

		/* TODO: should optimize if (0), if (1) here.  
		 * Also generalize this.
		 */

		if ((yyvsp[(5) - (6)].node) == 0) {
		    if ((yyvsp[(6) - (6)].node) == 0) {
			/* if (x) ; -> x; */
			(yyval.node) = insert_pop_value((yyvsp[(3) - (6)].node));
			break;
		    } else {
			/* if (x) {} else y; -> if (!x) y; */
			parse_node_t *repl;
			
			CREATE_UNARY_OP(repl, F_NOT, TYPE_NUMBER, (yyvsp[(3) - (6)].node));
			(yyvsp[(3) - (6)].node) = repl;
			(yyvsp[(5) - (6)].node) = (yyvsp[(6) - (6)].node);
			(yyvsp[(6) - (6)].node) = 0;
		    }
		}
		CREATE_IF((yyval.node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
	    }
    break;

  case 236:
#line 3356 "grammar.y"
    {
#line 3205 "grammar.y.pre"
		(yyval.node) = 0;
	    }
    break;

  case 237:
#line 3361 "grammar.y"
    {
#line 3209 "grammar.y.pre"
		(yyval.node) = (yyvsp[(2) - (2)].node);
            }
    break;


/* Line 1267 of yacc.c.  */
#line 5683 "grammar.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3366 "grammar.y"



#line 3214 "grammar.y.pre"


