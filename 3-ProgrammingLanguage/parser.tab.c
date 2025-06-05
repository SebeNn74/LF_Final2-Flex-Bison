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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
extern char *yytext;
extern int yylineno;
extern FILE *yyin; 
void yyerror(const char *s);

#line 82 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EOL = 3,                        /* EOL  */
  YYSYMBOL_VAR = 4,                        /* VAR  */
  YYSYMBOL_IVR = 5,                        /* IVR  */
  YYSYMBOL_VEC = 6,                        /* VEC  */
  YYSYMBOL_STR = 7,                        /* STR  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_FLO = 9,                        /* FLO  */
  YYSYMBOL_ASS = 10,                       /* ASS  */
  YYSYMBOL_ADD = 11,                       /* ADD  */
  YYSYMBOL_SUB = 12,                       /* SUB  */
  YYSYMBOL_MUL = 13,                       /* MUL  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_IFU = 15,                       /* IFU  */
  YYSYMBOL_FUN = 16,                       /* FUN  */
  YYSYMBOL_RET = 17,                       /* RET  */
  YYSYMBOL_SMR = 18,                       /* SMR  */
  YYSYMBOL_SAE = 19,                       /* SAE  */
  YYSYMBOL_GRT = 20,                       /* GRT  */
  YYSYMBOL_GAE = 21,                       /* GAE  */
  YYSYMBOL_EQU = 22,                       /* EQU  */
  YYSYMBOL_NEG = 23,                       /* NEG  */
  YYSYMBOL_DIS = 24,                       /* DIS  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_ORR = 26,                       /* ORR  */
  YYSYMBOL_SII = 27,                       /* SII  */
  YYSYMBOL_SIN = 28,                       /* SIN  */
  YYSYMBOL_LLA = 29,                       /* LLA  */
  YYSYMBOL_LLC = 30,                       /* LLC  */
  YYSYMBOL_PAA = 31,                       /* PAA  */
  YYSYMBOL_PAC = 32,                       /* PAC  */
  YYSYMBOL_COR_A = 33,                     /* COR_A  */
  YYSYMBOL_COR_C = 34,                     /* COR_C  */
  YYSYMBOL_LOP = 35,                       /* LOP  */
  YYSYMBOL_ADC = 36,                       /* ADC  */
  YYSYMBOL_REC = 37,                       /* REC  */
  YYSYMBOL_COMA = 38,                      /* COMA  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_entrada = 40,                   /* entrada  */
  YYSYMBOL_linea = 41,                     /* linea  */
  YYSYMBOL_sentences = 42,                 /* sentences  */
  YYSYMBOL_sentence = 43,                  /* sentence  */
  YYSYMBOL_sentencesError = 44,            /* sentencesError  */
  YYSYMBOL_decvar = 45,                    /* decvar  */
  YYSYMBOL_decvector = 46,                 /* decvector  */
  YYSYMBOL_initvector = 47,                /* initvector  */
  YYSYMBOL_vector_elements = 48,           /* vector_elements  */
  YYSYMBOL_vector_access = 49,             /* vector_access  */
  YYSYMBOL_vector_assign = 50,             /* vector_assign  */
  YYSYMBOL_initvar = 51,                   /* initvar  */
  YYSYMBOL_asigvar = 52,                   /* asigvar  */
  YYSYMBOL_value = 53,                     /* value  */
  YYSYMBOL_intoperation = 54,              /* intoperation  */
  YYSYMBOL_floatoperation = 55,            /* floatoperation  */
  YYSYMBOL_stringops = 56,                 /* stringops  */
  YYSYMBOL_operationError = 57,            /* operationError  */
  YYSYMBOL_vectorError = 58,               /* vectorError  */
  YYSYMBOL_conditionLoop = 59,             /* conditionLoop  */
  YYSYMBOL_condition = 60,                 /* condition  */
  YYSYMBOL_conditionalSim = 61,            /* conditionalSim  */
  YYSYMBOL_condiComp = 62,                 /* condiComp  */
  YYSYMBOL_condiError = 63,                /* condiError  */
  YYSYMBOL_condiCompError = 64,            /* condiCompError  */
  YYSYMBOL_loop = 65,                      /* loop  */
  YYSYMBOL_loopError = 66,                 /* loopError  */
  YYSYMBOL_parameters = 67,                /* parameters  */
  YYSYMBOL_arguments = 68,                 /* arguments  */
  YYSYMBOL_decfunError = 69,               /* decfunError  */
  YYSYMBOL_decfun = 70,                    /* decfun  */
  YYSYMBOL_ret = 71,                       /* ret  */
  YYSYMBOL_callfunc = 72                   /* callfunc  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  416

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
static const yytype_int16 yyrline[] =
{
       0,    21,    21,    23,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    51,    52,    53,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    70,    73,    78,    83,    84,    89,    90,    95,    96,
     101,   102,   103,   104,   105,   106,   107,   108,   112,   113,
     114,   115,   116,   117,   118,   122,   123,   124,   125,   126,
     127,   128,   132,   133,   134,   135,   139,   143,   147,   151,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     182,   186,   190,   191,   192,   193,   194,   195,   196,   197,
     201,   205,   206,   207,   208,   209,   210,   211,   212,   216,
     217,   218,   221,   222,   223,   224,   225,   226,   229,   230,
     231,   232,   233,   234,   237,   238,   239,   242,   243,   244,
     245,   248,   249,   250,   253,   254,   255,   258,   259,   262,
     263,   264,   265,   266,   267,   269,   271,   272,   274,   275,
     276,   279,   282,   285,   286,   287,   288,   289,   292
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "EOL", "VAR", "IVR",
  "VEC", "STR", "INT", "FLO", "ASS", "ADD", "SUB", "MUL", "DIV", "IFU",
  "FUN", "RET", "SMR", "SAE", "GRT", "GAE", "EQU", "NEG", "DIS", "AND",
  "ORR", "SII", "SIN", "LLA", "LLC", "PAA", "PAC", "COR_A", "COR_C", "LOP",
  "ADC", "REC", "COMA", "$accept", "entrada", "linea", "sentences",
  "sentence", "sentencesError", "decvar", "decvector", "initvector",
  "vector_elements", "vector_access", "vector_assign", "initvar",
  "asigvar", "value", "intoperation", "floatoperation", "stringops",
  "operationError", "vectorError", "conditionLoop", "condition",
  "conditionalSim", "condiComp", "condiError", "condiCompError", "loop",
  "loopError", "parameters", "arguments", "decfunError", "decfun", "ret",
  "callfunc", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -252,   344,  -252,  -252,    12,    -4,    23,   300,   496,   508,
      41,    63,   161,    68,    79,  -252,  -252,    27,   122,   179,
     226,   185,  -252,  -252,   573,   186,   192,   202,  -252,  -252,
    -252,  -252,     4,  -252,   214,  -252,  -252,  -252,  -252,  -252,
     238,   121,    85,    28,    55,    32,   161,   161,   161,   161,
     161,   243,   250,   337,   361,   367,   390,   106,   227,   204,
     191,   197,  -252,  -252,  -252,  -252,   128,   189,  -252,  -252,
    -252,  -252,   458,   470,   476,   481,  -252,   254,   263,   268,
     275,   161,   161,   161,   161,   327,   401,  -252,  -252,  -252,
    -252,   125,  -252,  -252,   206,    15,   314,   281,   285,   297,
     301,  -252,   262,   274,  -252,   277,     8,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,   197,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,   271,   283,   316,
     248,   159,   413,   102,   318,   328,   428,   334,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,   324,   152,     6,    16,   351,   354,   355,   375,
     385,  -252,  -252,   373,  -252,  -252,  -252,  -252,  -252,   379,
     380,   161,   389,   411,  -252,   204,  -252,   363,   422,   419,
     430,   128,   128,   414,  -252,   488,   161,   161,   450,   128,
      69,   460,   466,   496,   508,   461,   451,   169,  -252,   457,
      27,   122,   179,   391,   185,  -252,  -252,   489,   491,   495,
       7,  -252,  -252,  -252,   238,  -252,   462,  -252,  -252,  -252,
    -252,  -252,  -252,   433,   433,    -7,  -252,  -252,   501,  -252,
     316,   494,  -252,  -252,   467,   493,   152,   -12,   523,   164,
     139,   278,    70,   502,   316,   531,  -252,   532,  -252,  -252,
    -252,  -252,   242,   152,   517,   533,   534,   535,   537,   538,
     539,   540,   548,   549,   161,   524,  -252,   272,   525,   526,
     286,   536,   542,   558,   543,   545,   128,   128,   544,   556,
     316,   562,  -252,  -252,   272,    35,   377,   550,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,   161,   219,
     152,   152,  -252,  -252,   552,    80,   560,   561,   546,   547,
     272,   564,   161,   569,   566,   567,    51,   433,   579,   570,
     409,   571,   421,   572,   272,   574,   148,   575,   272,   272,
     576,   577,   580,   596,   272,  -252,  -252,   601,   408,   605,
     607,   608,   609,  -252,   610,  -252,  -252,  -252,  -252,   453,
     272,   585,   586,   587,   465,   497,   272,   272,   272,   612,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,   615,   509,   152,
     551,   272,   616,   617,   115,   293,  -252,   618,   541,   592,
     593,   553,  -252,  -252,   594,  -252,   621,   622,   624,   625,
     600,  -252,  -252,  -252,  -252,   272
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     4,     0,    74,     0,     0,    72,    73,
       0,     0,     0,     0,     0,     3,    20,     5,     6,     7,
      75,     9,    13,    14,     0,     0,     0,     0,    21,    22,
     128,    15,     0,    16,     0,    23,    17,    24,    25,    18,
      19,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,    74,    72,    73,    75,   129,     0,     0,    32,    33,
      34,     8,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    12,
     137,     0,   144,    40,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,   120,     0,     0,   110,   111,   112,
     113,   114,   131,   133,     0,    76,    84,    92,    77,    85,
      93,    78,    86,    94,    79,    87,    95,    80,   100,   106,
      81,   101,   107,    82,   108,    83,   109,   159,     0,   155,
       0,     0,     0,     0,     0,     0,     0,     0,    88,   102,
      96,    89,   103,    97,    90,   104,    98,    91,   105,    99,
     115,   116,   117,   118,   122,   123,   124,   125,   130,   126,
     132,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    71,     0,    69,    65,    66,    67,    68,    49,
      48,     0,     0,     0,   119,   158,   168,   156,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,    38,    37,     0,     0,     0,
       0,    27,    39,    41,     0,   139,     0,    58,    63,    62,
      59,    60,    61,     0,     0,     0,    46,   121,    43,   160,
     155,     0,    49,    48,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,    35,    29,
      30,    31,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,   138,   145,     0,     0,     0,     0,    54,    55,
      56,    57,    50,    51,    52,    53,    45,    47,     0,     0,
       0,     0,   134,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   146,     0,     0,     0,
       0,     0,     0,   161,     0,   136,   143,   135,   142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,   167,   163,   164,   165,   166,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,   150,   151,     0,   149,     0,     0,     0,     0,
       0,   147,   153,   154,   148,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,  -158,    -1,  -251,    10,   629,   630,   315,
       1,   631,   633,   634,    59,     3,    19,    24,  -252,  -252,
     -59,   -54,     0,   635,  -252,  -252,   636,  -252,  -236,   443,
    -252,   638,  -252,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    15,   217,   218,   219,   220,   221,   222,   245,
     223,   224,   225,   226,   142,   227,   228,   229,    28,    29,
      30,    31,   230,   231,    34,    35,   232,    37,   198,   138,
      38,   233,   339,   234
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    32,    20,    40,    25,   291,    42,    90,   147,   235,
      90,    17,   143,    64,   286,   192,   193,    41,   182,   237,
      26,   140,   307,   283,   292,    27,   183,   183,    44,    43,
      68,   284,    91,   102,   236,   272,   103,    61,   235,   107,
      62,    63,   194,    96,   101,    98,    64,    64,    64,    64,
      64,    64,   117,   120,   123,   126,   129,   132,   134,   136,
      24,    99,   104,   333,   331,   105,   100,    64,    64,   341,
     343,    65,    59,   150,   153,   156,   159,   145,    60,    42,
     105,   357,    64,    64,    64,    64,    64,    64,   106,   284,
      61,   174,    95,     8,     9,   176,   181,   178,   290,    66,
      10,    97,   261,   299,   108,   109,   110,   111,   112,   113,
      67,   114,   345,   179,   133,   306,   346,   347,   180,     4,
     210,   211,   212,   213,   214,    69,   146,   201,   202,   319,
      10,    94,   337,    61,   203,   141,    62,    63,   399,   400,
     164,   165,   166,   167,   169,   171,   258,   254,   255,   197,
     216,    12,   172,   177,   173,   260,     4,   210,   211,   212,
     213,   214,   340,   342,   296,   297,    61,    10,   215,    62,
      63,   298,   290,     4,   210,   211,   212,   213,   214,   172,
     371,    49,    70,    50,    10,   372,   369,   216,    76,    87,
     374,   375,    64,   144,    61,    88,   306,    62,    63,   265,
     294,   295,    64,    64,   216,    89,    64,    64,    64,   137,
      64,    61,   388,   175,     8,     9,   266,    92,   340,   342,
     394,    10,   139,     4,   210,   211,   212,   213,   214,    71,
     140,   398,   114,   401,    10,   135,   337,    72,    73,    74,
      75,    93,   328,   329,   274,   274,   276,   280,   114,   338,
     246,   115,   116,   199,   216,   114,   200,   398,   118,   119,
     197,   160,   277,   281,   146,   169,   171,   278,   282,   172,
     161,   304,   305,   353,   301,   162,     4,   210,   211,   212,
     213,   214,   163,   102,   185,    64,   103,    10,   186,   266,
       4,   210,   211,   212,   213,   214,   189,    64,    64,   172,
     187,    10,   275,   279,   188,   266,   191,   216,   190,   195,
     197,    45,    46,    47,    48,   196,   322,   184,   266,    64,
     144,   216,    49,   204,    50,    72,    73,    74,    75,   404,
     347,   205,    61,    64,   168,    62,    63,   208,   358,   266,
     360,   266,   114,   317,     2,   121,   122,     3,     4,     5,
       6,     7,     8,     9,   238,   209,   361,   239,   240,    10,
      11,   362,    72,    73,    74,    75,   114,    12,   266,   124,
     125,    13,   114,   266,   266,   127,   128,   246,   241,    14,
     107,     4,   210,   211,   212,   213,   214,   266,   242,   243,
     244,   146,    10,   266,   268,   114,   359,   266,   130,   131,
     266,   250,    72,    73,    74,    75,    61,   334,   170,    62,
      63,   381,   216,     4,   210,   211,   212,   213,   214,    72,
      73,    74,    75,   247,    10,     4,   210,   211,   212,   213,
     214,    81,    82,    83,    84,    85,    10,    86,    61,   365,
     212,     8,     9,   256,   216,   248,    81,    82,    83,    84,
     206,   367,   207,   252,   251,   259,   216,     4,   210,   211,
     212,   213,   214,   114,   253,   262,   148,   149,    10,     4,
     210,   211,   212,   213,   214,   114,   263,   183,   151,   152,
      10,   114,   264,   387,   154,   155,   114,   267,   216,   157,
     158,   273,   269,   257,   270,   392,    62,    63,   271,   288,
     216,     4,   210,   211,   212,   213,   214,    51,    52,    53,
      54,   285,    10,     4,   210,   211,   212,   213,   214,    55,
      56,    57,    58,   287,    10,   289,   293,   393,    72,    73,
      74,    75,   216,   300,   302,   303,   308,   309,   310,   397,
     311,   312,   313,   314,   216,     4,   210,   211,   212,   213,
     214,   315,   316,   318,   320,   321,    10,     4,   210,   211,
     212,   213,   214,   325,   193,   332,   323,   215,    10,   355,
     356,   406,     0,   330,   324,   326,   216,   327,   350,   351,
     335,   344,   363,   409,    77,    78,    79,    80,   216,   348,
     349,    81,    82,    83,    84,    85,   352,    86,   354,   379,
     364,   366,   368,   370,   380,   376,   377,   373,   382,   378,
     383,   384,   385,   386,   389,   390,   391,   395,   396,   402,
     403,   405,   407,   408,   411,   412,   410,   413,   414,   415,
      18,    19,    21,   336,    22,    23,    33,    36,   249,    39
};

static const yytype_int16 yycheck[] =
{
       1,     1,     1,     1,     1,   256,    10,     3,    67,     3,
       3,     1,    66,    12,   250,     7,     8,     5,     3,     3,
       1,    33,   273,    30,    36,     1,    11,    11,     5,    33,
       3,    38,    28,     5,    28,    28,     8,     5,     3,     7,
       8,     9,    34,    42,    42,    42,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       1,    42,    34,    28,   300,    10,    42,    66,    67,   320,
     321,    12,    31,    72,    73,    74,    75,    67,    15,    10,
      10,    30,    81,    82,    83,    84,    85,    86,    33,    38,
       5,    91,     7,     8,     9,    94,    94,    94,   256,    31,
      15,    42,    33,    33,    45,    46,    47,    48,    49,    50,
      31,     5,    32,    94,     8,   273,    36,    37,    94,     4,
       5,     6,     7,     8,     9,     3,    67,    25,    26,   287,
      15,    10,    17,     5,    32,     7,     8,     9,   389,   390,
      81,    82,    83,    84,    85,    86,   205,   201,   202,   139,
      35,    23,    27,    94,    29,   209,     4,     5,     6,     7,
       8,     9,   320,   321,    25,    26,     5,    15,    16,     8,
       9,    32,   330,     4,     5,     6,     7,     8,     9,    27,
      32,    22,     3,    24,    15,    37,   344,    35,     3,     3,
     348,   349,   191,     4,     5,     3,   354,     8,     9,    30,
      36,    37,   201,   202,    35,     3,   205,   206,   207,     5,
     209,     5,   370,     7,     8,     9,   217,     3,   376,   377,
     378,    15,    31,     4,     5,     6,     7,     8,     9,     3,
      33,   389,     5,   391,    15,     8,    17,    11,    12,    13,
      14,     3,   296,   297,   243,   244,   243,   244,     5,    30,
     191,     8,     9,     5,    35,     5,     8,   415,     8,     9,
     250,     7,   243,   244,   205,   206,   207,   243,   244,    27,
       7,    29,   272,   332,   264,     7,     4,     5,     6,     7,
       8,     9,     7,     5,     3,   284,     8,    15,     3,   290,
       4,     5,     6,     7,     8,     9,    34,   296,   297,    27,
       3,    15,   243,   244,     3,   306,    29,    35,    34,    38,
     300,    11,    12,    13,    14,    32,    30,     3,   319,   318,
       4,    35,    22,     5,    24,    11,    12,    13,    14,    36,
      37,     3,     5,   332,     7,     8,     9,     3,   337,   340,
     337,   342,     5,   284,     0,     8,     9,     3,     4,     5,
       6,     7,     8,     9,     3,    31,   337,     3,     3,    15,
      16,   337,    11,    12,    13,    14,     5,    23,   369,     8,
       9,    27,     5,   374,   375,     8,     9,   318,     3,    35,
       7,     4,     5,     6,     7,     8,     9,   388,     3,    10,
      10,   332,    15,   394,     3,     5,   337,   398,     8,     9,
     401,    38,    11,    12,    13,    14,     5,    30,     7,     8,
       9,     3,    35,     4,     5,     6,     7,     8,     9,    11,
      12,    13,    14,    34,    15,     4,     5,     6,     7,     8,
       9,    18,    19,    20,    21,    22,    15,    24,     5,    30,
       7,     8,     9,    29,    35,    34,    18,    19,    20,    21,
      22,    30,    24,    34,    32,     5,    35,     4,     5,     6,
       7,     8,     9,     5,    34,     5,     8,     9,    15,     4,
       5,     6,     7,     8,     9,     5,    15,    11,     8,     9,
      15,     5,    31,    30,     8,     9,     5,    30,    35,     8,
       9,    29,     3,     5,     3,    30,     8,     9,     3,    32,
      35,     4,     5,     6,     7,     8,     9,    11,    12,    13,
      14,    10,    15,     4,     5,     6,     7,     8,     9,    11,
      12,    13,    14,    29,    15,    32,     3,    30,    11,    12,
      13,    14,    35,    31,     3,     3,     3,     3,     3,    30,
       3,     3,     3,     3,    35,     4,     5,     6,     7,     8,
       9,     3,     3,    29,    29,    29,    15,     4,     5,     6,
       7,     8,     9,     5,     8,     3,    30,    16,    15,     3,
       3,    30,    -1,    29,    32,    32,    35,    32,    32,    32,
      30,    29,     3,    30,    11,    12,    13,    14,    35,    29,
      29,    18,    19,    20,    21,    22,    32,    24,    29,     3,
      30,    30,    30,    29,     3,    29,    29,    32,     3,    29,
       3,     3,     3,     3,    29,    29,    29,     5,     3,     3,
       3,     3,    30,    30,     3,     3,    32,     3,     3,    29,
       1,     1,     1,   318,     1,     1,     1,     1,   195,     1
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,     0,     3,     4,     5,     6,     7,     8,     9,
      15,    16,    23,    27,    35,    41,    43,    45,    46,    47,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    69,    70,
      72,     5,    10,    33,     5,    11,    12,    13,    14,    22,
      24,    11,    12,    13,    14,    11,    12,    13,    14,    31,
      15,     5,     8,     9,    49,    53,    31,    31,     3,     3,
       3,     3,    11,    12,    13,    14,     3,    11,    12,    13,
      14,    18,    19,    20,    21,    22,    24,     3,     3,     3,
       3,    28,     3,     3,    10,     7,    49,    53,    54,    55,
      56,    72,     5,     8,    34,    10,    33,     7,    53,    53,
      53,    53,    53,    53,     5,     8,     9,    49,     8,     9,
      49,     8,     9,    49,     8,     9,    49,     8,     9,    49,
       8,     9,    49,     8,    49,     8,    49,     5,    68,    31,
      33,     7,    53,    60,     4,    45,    53,    59,     8,     9,
      49,     8,     9,    49,     8,     9,    49,     8,     9,    49,
       7,     7,     7,     7,    53,    53,    53,    53,     7,    53,
       7,    53,    27,    29,    61,     7,    49,    53,    54,    55,
      56,    72,     3,    11,     3,     3,     3,     3,     3,    34,
      34,    29,     7,     8,    34,    38,    32,    45,    67,     5,
       8,    25,    26,    32,     5,     3,    22,    24,     3,    31,
       5,     6,     7,     8,     9,    16,    35,    42,    43,    44,
      45,    46,    47,    49,    50,    51,    52,    54,    55,    56,
      61,    62,    65,    70,    72,     3,    28,     3,     3,     3,
       3,     3,     3,    10,    10,    48,    53,    34,    34,    68,
      38,    32,    34,    34,    60,    60,    29,     5,    59,     5,
      60,    33,     5,    15,    31,    30,    43,    30,     3,     3,
       3,     3,    28,    29,    49,    53,    54,    55,    56,    53,
      54,    55,    56,    30,    38,    10,    67,    29,    32,    32,
      42,    44,    36,     3,    36,    37,    25,    26,    32,    33,
      31,    45,     3,     3,    29,    61,    42,    44,     3,     3,
       3,     3,     3,     3,     3,     3,     3,    53,    29,    42,
      29,    29,    30,    30,    32,     5,    32,    32,    60,    60,
      29,    67,     3,    28,    30,    30,    48,    17,    30,    71,
      42,    44,    42,    44,    29,    32,    36,    37,    29,    29,
      32,    32,    32,    59,    29,     3,     3,    30,    49,    53,
      54,    55,    56,     3,    30,    30,    30,    30,    30,    42,
      29,    32,    37,    32,    42,    42,    29,    29,    29,     3,
       3,     3,     3,     3,     3,     3,     3,    30,    42,    29,
      29,    29,    30,    30,    42,     5,     3,    30,    42,    44,
      44,    42,     3,     3,    36,     3,    30,    30,    30,    30,
      32,     3,     3,     3,     3,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    42,    42,    42,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    44,    45,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    63,    63,    63,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    68,    68,
      68,    69,    70,    71,    71,    71,    71,    71,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       2,     1,     2,     5,    10,     7,     1,     3,     4,     4,
       7,     7,     7,     7,     7,     7,     7,     7,     5,     5,
       5,     5,     5,     5,     4,     4,     4,     4,     4,     4,
       3,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     5,     3,     3,     3,     3,     3,     3,     1,     2,
       3,     3,     3,     3,     7,     9,     9,     2,     6,     4,
       8,     7,     9,     9,     2,     6,     8,    13,    13,    12,
      11,    11,    11,    13,    13,     0,     1,     3,     0,     1,
       3,     9,    10,     3,     3,     3,     3,     3,     4
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 5: /* linea: decvar  */
#line 28 "parser.y"
                           { printf("Correct var declaration\n"); }
#line 1714 "parser.tab.c"
    break;

  case 6: /* linea: decvector  */
#line 29 "parser.y"
                           { printf("Correct vector declaration\n"); }
#line 1720 "parser.tab.c"
    break;

  case 7: /* linea: initvector  */
#line 30 "parser.y"
                           { printf("Correct vector initialization\n"); }
#line 1726 "parser.tab.c"
    break;

  case 8: /* linea: vector_access EOL  */
#line 31 "parser.y"
                           { printf("Correct vector access\n"); }
#line 1732 "parser.tab.c"
    break;

  case 9: /* linea: vector_assign  */
#line 32 "parser.y"
                           { printf("Correct vector assignment\n"); }
#line 1738 "parser.tab.c"
    break;

  case 10: /* linea: intoperation EOL  */
#line 33 "parser.y"
                           { printf("Correct operation\n"); }
#line 1744 "parser.tab.c"
    break;

  case 11: /* linea: floatoperation EOL  */
#line 34 "parser.y"
                           { printf("Correct operation\n"); }
#line 1750 "parser.tab.c"
    break;

  case 12: /* linea: stringops EOL  */
#line 35 "parser.y"
                               { printf("Correct operation\n"); }
#line 1756 "parser.tab.c"
    break;

  case 13: /* linea: initvar  */
#line 36 "parser.y"
                           { printf("Correct var initialization\n"); }
#line 1762 "parser.tab.c"
    break;

  case 14: /* linea: asigvar  */
#line 37 "parser.y"
                           { printf("Correct assignment\n"); }
#line 1768 "parser.tab.c"
    break;

  case 15: /* linea: condition  */
#line 38 "parser.y"
                           { printf("Correct condition\n"); }
#line 1774 "parser.tab.c"
    break;

  case 16: /* linea: condiComp  */
#line 39 "parser.y"
                           { printf("Correct condition\n"); }
#line 1780 "parser.tab.c"
    break;

  case 17: /* linea: loop  */
#line 40 "parser.y"
                               { printf("Correct loop\n"); }
#line 1786 "parser.tab.c"
    break;

  case 18: /* linea: decfun  */
#line 41 "parser.y"
                               { printf("Correct function definition\n"); }
#line 1792 "parser.tab.c"
    break;

  case 19: /* linea: callfunc  */
#line 42 "parser.y"
                                   { printf("Correct function call\n"); }
#line 1798 "parser.tab.c"
    break;

  case 20: /* linea: sentence  */
#line 43 "parser.y"
                                   { printf("Correct sentence sintaxis\n"); }
#line 1804 "parser.tab.c"
    break;

  case 21: /* linea: operationError  */
#line 44 "parser.y"
                                   {yyerror("No arithmetic operations supported for strings");}
#line 1810 "parser.tab.c"
    break;

  case 22: /* linea: vectorError  */
#line 45 "parser.y"
                               {yyerror("Vector operation error");}
#line 1816 "parser.tab.c"
    break;

  case 23: /* linea: condiCompError  */
#line 46 "parser.y"
                                   {yyerror("Functions cannot be declared inside a conditional or a loop.");}
#line 1822 "parser.tab.c"
    break;

  case 25: /* linea: decfunError  */
#line 48 "parser.y"
                                   {yyerror("Function return not found");}
#line 1828 "parser.tab.c"
    break;

  case 48: /* vector_access: IVR COR_A INT COR_C  */
#line 95 "parser.y"
                            { printf("Vector access: %s[%d]\n", "vector", (int)(yyvsp[-1].num)); }
#line 1834 "parser.tab.c"
    break;

  case 49: /* vector_access: IVR COR_A IVR COR_C  */
#line 96 "parser.y"
                            { printf("Vector access with variable index\n"); }
#line 1840 "parser.tab.c"
    break;

  case 76: /* intoperation: INT ADD INT  */
#line 139 "parser.y"
                  { 
        (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); 
        printf("ADD Result: %f\n", (yyval.num)); 
    }
#line 1849 "parser.tab.c"
    break;

  case 77: /* intoperation: INT SUB INT  */
#line 143 "parser.y"
                     { 
        (yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num); 
        printf("SUB Result: %f\n", (yyval.num)); 
    }
#line 1858 "parser.tab.c"
    break;

  case 78: /* intoperation: INT MUL INT  */
#line 147 "parser.y"
                     { 
        (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); 
        printf("MUL Result: %f\n", (yyval.num)); 
    }
#line 1867 "parser.tab.c"
    break;

  case 79: /* intoperation: INT DIV INT  */
#line 151 "parser.y"
                     { 
        if ((yyvsp[0].num) != 0) {
            (yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num); 
            printf("DIV Result: %f\n", (yyval.num)); 
        } else {
            printf("Error: Division by zero.\n");
        }
    }
#line 1880 "parser.tab.c"
    break;

  case 100: /* floatoperation: FLO ADD FLO  */
#line 182 "parser.y"
                       { 
        (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); 
        printf("ADD Result: %f\n", (yyval.num)); 
    }
#line 1889 "parser.tab.c"
    break;

  case 101: /* floatoperation: FLO SUB FLO  */
#line 186 "parser.y"
                     { 
        (yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num); 
        printf("SUB Result: %f\n", (yyval.num)); 
    }
#line 1898 "parser.tab.c"
    break;

  case 149: /* loopError: LOP PAA decvar EOL conditionLoop EOL IVR PAC LLA sentences LLC EOL  */
#line 262 "parser.y"
                                                                           {yyerror("Counter must be increased");}
#line 1904 "parser.tab.c"
    break;

  case 150: /* loopError: LOP PAA conditionLoop EOL IVR ADC PAC LLA sentences LLC EOL  */
#line 263 "parser.y"
                                                                      {yyerror("Increment var undefined");}
#line 1910 "parser.tab.c"
    break;

  case 151: /* loopError: LOP PAA conditionLoop EOL IVR REC PAC LLA sentences LLC EOL  */
#line 264 "parser.y"
                                                                      {yyerror("Increment var undefined");}
#line 1916 "parser.tab.c"
    break;

  case 152: /* loopError: LOP PAA decvar EOL IVR ADC PAC LLA sentences LLC EOL  */
#line 265 "parser.y"
                                                               {yyerror("Loop condition undefined");}
#line 1922 "parser.tab.c"
    break;

  case 153: /* loopError: LOP PAA decvar EOL conditionLoop EOL IVR ADC PAC LLA sentencesError LLC EOL  */
#line 266 "parser.y"
                                                                                      {yyerror("Functions cannot be declared inside the loop");}
#line 1928 "parser.tab.c"
    break;

  case 154: /* loopError: LOP PAA decvar EOL conditionLoop EOL IVR ADC REC LLA sentencesError LLC EOL  */
#line 267 "parser.y"
                                                                                      {yyerror("Functions cannot be declared inside the loop");}
#line 1934 "parser.tab.c"
    break;


#line 1938 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 294 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error found: %s at line %d\n", s, yylineno);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("File couldnt be open");
            return 1;
        }
        yyin = file;
    } else {
        yyin = stdin;
    }
    return yyparse();
}
