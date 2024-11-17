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
#line 1 "matemagica.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
extern FILE *outputFile;

#line 81 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NUM = 258,                     /* NUM  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    FACA = 260,                    /* FACA  */
    SER = 261,                     /* SER  */
    MOSTRE = 262,                  /* MOSTRE  */
    SOME = 263,                    /* SOME  */
    COM = 264,                     /* COM  */
    REPITA = 265,                  /* REPITA  */
    VEZES = 266,                   /* VEZES  */
    FIM = 267,                     /* FIM  */
    MULTIPLIQUE = 268,             /* MULTIPLIQUE  */
    POR = 269,                     /* POR  */
    SE = 270,                      /* SE  */
    ENTAO = 271,                   /* ENTAO  */
    SENAO = 272                    /* SENAO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define IDENTIFIER 259
#define FACA 260
#define SER 261
#define MOSTRE 262
#define SOME 263
#define COM 264
#define REPITA 265
#define VEZES 266
#define FIM 267
#define MULTIPLIQUE 268
#define POR 269
#define SE 270
#define ENTAO 271
#define SENAO 272

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "matemagica.y"

    int num;       /* Para números */
    char *str;     /* Para strings e comandos */

#line 173 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_FACA = 5,                       /* FACA  */
  YYSYMBOL_SER = 6,                        /* SER  */
  YYSYMBOL_MOSTRE = 7,                     /* MOSTRE  */
  YYSYMBOL_SOME = 8,                       /* SOME  */
  YYSYMBOL_COM = 9,                        /* COM  */
  YYSYMBOL_REPITA = 10,                    /* REPITA  */
  YYSYMBOL_VEZES = 11,                     /* VEZES  */
  YYSYMBOL_FIM = 12,                       /* FIM  */
  YYSYMBOL_MULTIPLIQUE = 13,               /* MULTIPLIQUE  */
  YYSYMBOL_POR = 14,                       /* POR  */
  YYSYMBOL_SE = 15,                        /* SE  */
  YYSYMBOL_ENTAO = 16,                     /* ENTAO  */
  YYSYMBOL_SENAO = 17,                     /* SENAO  */
  YYSYMBOL_18_ = 18,                       /* '.'  */
  YYSYMBOL_19_ = 19,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 20,                  /* $accept  */
  YYSYMBOL_programa = 21,                  /* programa  */
  YYSYMBOL_cmds = 22,                      /* cmds  */
  YYSYMBOL_cmd = 23,                       /* cmd  */
  YYSYMBOL_atribuicao = 24,                /* atribuicao  */
  YYSYMBOL_impressao = 25,                 /* impressao  */
  YYSYMBOL_operacaoI = 26,                 /* operacaoI  */
  YYSYMBOL_operacao = 27,                  /* operacao  */
  YYSYMBOL_repeticao = 28,                 /* repeticao  */
  YYSYMBOL_condicional = 29                /* condicional  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   91

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  20
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  36
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  95

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


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
       2,     2,     2,     2,     2,     2,    18,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    19,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    37,    48,    59,    60,    61,    62,    63,
      67,    76,    88,    97,   106,   119,   128,   137,   146,   155,
     164,   173,   182,   194,   203,   212,   221,   230,   239,   248,
     257,   269,   284,   302,   312,   322,   333
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "IDENTIFIER",
  "FACA", "SER", "MOSTRE", "SOME", "COM", "REPITA", "VEZES", "FIM",
  "MULTIPLIQUE", "POR", "SE", "ENTAO", "SENAO", "'.'", "':'", "$accept",
  "programa", "cmds", "cmd", "atribuicao", "impressao", "operacaoI",
  "operacao", "repeticao", "condicional", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-10)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -4,    -2,     4,    11,    16,    18,    20,    52,   -10,    -4,
     -10,   -10,   -10,   -10,   -10,    10,    17,    36,    22,    24,
      38,    44,    46,    48,    49,    50,    51,    42,    45,   -10,
     -10,    26,   -10,   -10,    53,    54,    55,    56,   -10,    28,
      30,    57,    59,    35,    37,    -4,    -4,    62,    63,    39,
      41,    43,    47,    64,    65,    66,    67,    -4,    -4,    68,
      69,    70,    71,    -7,     1,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,    60,
      61,   -10,   -10,   -10,   -10,   -10,    -4,   -10,    -4,   -10,
     -10,    78,    79,   -10,   -10
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     4,
       5,     6,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       3,     0,    13,    12,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,    15,    16,    18,
      17,    19,    20,    22,    21,    23,    24,    26,    25,     0,
       0,    27,    30,    29,    28,    34,     0,    33,     0,    31,
      32,     0,     0,    36,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -10,   -10,    -9,   -10,   -10,   -10,   -10,   -10,   -10,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    20,    12,    13,    14
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      30,     1,    15,     2,     3,    85,     4,    16,    17,     5,
      86,     6,    18,    87,    21,    22,    31,    19,    88,    23,
      24,    25,    26,    27,    28,    34,    35,    36,    37,    47,
      48,    53,    54,    55,    56,    32,    63,    64,    59,    60,
      61,    62,    67,    68,    69,    70,    71,    72,    79,    80,
      73,    74,    29,    39,    33,    40,    38,     0,    45,    41,
      42,    46,    49,    50,    43,    44,     0,     0,     0,    51,
      52,     0,    89,    90,     0,     0,    57,    91,    58,    92,
      65,    66,    75,    76,    77,    78,    81,    82,    83,    84,
      93,    94
};

static const yytype_int8 yycheck[] =
{
       9,     5,     4,     7,     8,    12,    10,     3,     4,    13,
      17,    15,     8,    12,     3,     4,     6,    13,    17,     3,
       4,     3,     4,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     4,     3,     4,    18,    45,    46,     3,     4,
       3,     4,     3,     4,     3,     4,     3,     4,    57,    58,
       3,     4,     0,     9,    18,     9,    18,    -1,    16,    11,
      11,    16,     9,     9,    14,    14,    -1,    -1,    -1,    14,
      14,    -1,    12,    12,    -1,    -1,    19,    86,    19,    88,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      12,    12
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,     8,    10,    13,    15,    21,    22,    23,
      24,    25,    27,    28,    29,     4,     3,     4,     8,    13,
      26,     3,     4,     3,     4,     3,     4,     3,     4,     0,
      22,     6,    18,    18,     3,     4,     3,     4,    18,     9,
       9,    11,    11,    14,    14,    16,    16,     3,     4,     9,
       9,    14,    14,     3,     4,     3,     4,    19,    19,     3,
       4,     3,     4,    22,    22,    18,    18,     3,     4,     3,
       4,     3,     4,     3,     4,    18,    18,    18,    18,    22,
      22,    18,    18,    18,    18,    12,    17,    12,    17,    12,
      12,    22,    22,    12,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    20,    21,    22,    22,    23,    23,    23,    23,    23,
      24,    24,    25,    25,    25,    26,    26,    26,    26,    26,
      26,    26,    26,    27,    27,    27,    27,    27,    27,    27,
      27,    28,    28,    29,    29,    29,    29
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       5,     5,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     6,     5,     5,     7,     7
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
  case 2: /* programa: cmds  */
#line 29 "matemagica.y"
         { 
        fprintf(outputFile, "%s\n", (yyvsp[0].str));
        free((yyvsp[0].str));
        fflush(outputFile); 
    }
#line 1230 "y.tab.c"
    break;

  case 3: /* cmds: cmd cmds  */
#line 37 "matemagica.y"
             { 
        char *result = malloc(strlen((yyvsp[-1].str)) + strlen((yyvsp[0].str)) + 2);
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s\n%s", (yyvsp[-1].str), (yyvsp[0].str));
        (yyval.str) = result;
        free((yyvsp[-1].str));
        free((yyvsp[0].str));
    }
#line 1246 "y.tab.c"
    break;

  case 4: /* cmds: cmd  */
#line 48 "matemagica.y"
          { 
        (yyval.str) = strdup((yyvsp[0].str));
        if ((yyval.str) == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        free((yyvsp[0].str));
    }
#line 1259 "y.tab.c"
    break;

  case 10: /* atribuicao: FACA IDENTIFIER SER NUM '.'  */
#line 67 "matemagica.y"
                                { 
        char *result = malloc(strlen((yyvsp[-3].str)) + 20);  // Size adjusted for identifier and number
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %d", (yyvsp[-3].str), (yyvsp[-1].num)); 
        (yyval.str) = result;
    }
#line 1273 "y.tab.c"
    break;

  case 11: /* atribuicao: FACA IDENTIFIER SER IDENTIFIER '.'  */
#line 76 "matemagica.y"
                                           { 
        char *result = malloc(strlen((yyvsp[-3].str)) + strlen((yyvsp[-1].str)) + 20);  // Size adjusted for identifier and number
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s", (yyvsp[-3].str), (yyvsp[-1].str)); 
        (yyval.str) = result;
    }
#line 1287 "y.tab.c"
    break;

  case 12: /* impressao: MOSTRE IDENTIFIER '.'  */
#line 88 "matemagica.y"
                          { 
        char *result = malloc(strlen((yyvsp[-1].str)) + 10); // Space for identifier and format
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%s)", (yyvsp[-1].str));
        (yyval.str) = result;
    }
#line 1301 "y.tab.c"
    break;

  case 13: /* impressao: MOSTRE NUM '.'  */
#line 97 "matemagica.y"
                     {
        char *result = malloc(20);  // Space for formatted number
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%d)", (yyvsp[-1].num));
        (yyval.str) = result;
    }
#line 1315 "y.tab.c"
    break;

  case 14: /* impressao: MOSTRE operacaoI '.'  */
#line 106 "matemagica.y"
                           { 
        char *result = malloc(strlen((yyvsp[-1].str)) + 10);  // Space for operation result
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%s)", (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-1].str));
    }
#line 1330 "y.tab.c"
    break;

  case 15: /* operacaoI: SOME NUM COM NUM  */
#line 119 "matemagica.y"
                     {
        char *result = malloc(sizeof(int) *2 + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%d + %d", (yyvsp[-2].num), (yyvsp[0].num));
        (yyval.str) = result;
    }
#line 1344 "y.tab.c"
    break;

  case 16: /* operacaoI: SOME NUM COM IDENTIFIER  */
#line 128 "matemagica.y"
                              {
        char *result = malloc(strlen((yyvsp[0].str)) *2 + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%d + %s", (yyvsp[-2].num), (yyvsp[0].str));
        (yyval.str) = result;
    }
#line 1358 "y.tab.c"
    break;

  case 17: /* operacaoI: SOME IDENTIFIER COM IDENTIFIER  */
#line 137 "matemagica.y"
                                     {
        char *result = malloc(strlen((yyvsp[-2].str)) *2 + strlen((yyvsp[0].str)) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s + %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
    }
#line 1372 "y.tab.c"
    break;

  case 18: /* operacaoI: SOME IDENTIFIER COM NUM  */
#line 146 "matemagica.y"
                              {
        char *result = malloc(strlen((yyvsp[-2].str)) *2 + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s + %d", (yyvsp[-2].str), (yyvsp[0].num));
        (yyval.str) = result;
    }
#line 1386 "y.tab.c"
    break;

  case 19: /* operacaoI: MULTIPLIQUE NUM POR NUM  */
#line 155 "matemagica.y"
                              {
        char *result = malloc(sizeof(int) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%d * %d", (yyvsp[-2].num), (yyvsp[0].num));
        (yyval.str) = result;
    }
#line 1400 "y.tab.c"
    break;

  case 20: /* operacaoI: MULTIPLIQUE NUM POR IDENTIFIER  */
#line 164 "matemagica.y"
                                     { 
        char *result = malloc(sizeof(int) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%d * %s", (yyvsp[-2].num), (yyvsp[0].str));
        (yyval.str) = result;
    }
#line 1414 "y.tab.c"
    break;

  case 21: /* operacaoI: MULTIPLIQUE IDENTIFIER POR IDENTIFIER  */
#line 173 "matemagica.y"
                                            { 
        char *result = malloc(strlen((yyvsp[-2].str)) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s * %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = result;
    }
#line 1428 "y.tab.c"
    break;

  case 22: /* operacaoI: MULTIPLIQUE IDENTIFIER POR NUM  */
#line 182 "matemagica.y"
                                     { 
        char *result = malloc(strlen((yyvsp[-2].str)) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s * %d", (yyvsp[-2].str), (yyvsp[0].num));
        (yyval.str) = result;
    }
#line 1442 "y.tab.c"
    break;

  case 23: /* operacao: SOME NUM COM NUM '.'  */
#line 194 "matemagica.y"
                         { 
        char *result = malloc(sizeof(int) * 2 + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "var_default = %d + %d", (yyvsp[-3].num), (yyvsp[-1].num));
        (yyval.str) = result;
    }
#line 1456 "y.tab.c"
    break;

  case 24: /* operacao: SOME NUM COM IDENTIFIER '.'  */
#line 203 "matemagica.y"
                                  { 
        char *result = malloc(strlen((yyvsp[-1].str)) * 2 + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %d + %s", (yyvsp[-1].str), (yyvsp[-3].num), (yyvsp[-1].str));
        (yyval.str) = result;
    }
#line 1470 "y.tab.c"
    break;

  case 25: /* operacao: SOME IDENTIFIER COM IDENTIFIER '.'  */
#line 212 "matemagica.y"
                                         { 
        char *result = malloc(strlen((yyvsp[-3].str)) * 2 + strlen((yyvsp[-1].str)) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s + %s", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].str));
        (yyval.str) = result;
    }
#line 1484 "y.tab.c"
    break;

  case 26: /* operacao: SOME IDENTIFIER COM NUM '.'  */
#line 221 "matemagica.y"
                                  { 
        char *result = malloc(strlen((yyvsp[-3].str)) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s + %d", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].num));
        (yyval.str) = result;
    }
#line 1498 "y.tab.c"
    break;

  case 27: /* operacao: MULTIPLIQUE NUM POR NUM '.'  */
#line 230 "matemagica.y"
                                  { 
        char *result = malloc(sizeof(int) * 2 + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "var_default = %d * %d", (yyvsp[-3].num), (yyvsp[-1].num));
        (yyval.str) = result;
    }
#line 1512 "y.tab.c"
    break;

  case 28: /* operacao: MULTIPLIQUE IDENTIFIER POR IDENTIFIER '.'  */
#line 239 "matemagica.y"
                                                { 
        char *result = malloc(strlen((yyvsp[-3].str)) * 2 + strlen((yyvsp[-1].str)) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s * %s", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].str));
        (yyval.str) = result;
    }
#line 1526 "y.tab.c"
    break;

  case 29: /* operacao: MULTIPLIQUE IDENTIFIER POR NUM '.'  */
#line 248 "matemagica.y"
                                         { 
        char *result = malloc(strlen((yyvsp[-3].str)) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s * %d", (yyvsp[-3].str), (yyvsp[-3].str), (yyvsp[-1].num));
        (yyval.str) = result;
    }
#line 1540 "y.tab.c"
    break;

  case 30: /* operacao: MULTIPLIQUE NUM POR IDENTIFIER '.'  */
#line 257 "matemagica.y"
                                         { 
        char *result = malloc(strlen((yyvsp[-1].str)) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %d * %s", (yyvsp[-1].str), (yyvsp[-3].num), (yyvsp[-1].str));
        (yyval.str) = result;
    }
#line 1554 "y.tab.c"
    break;

  case 31: /* repeticao: REPITA NUM VEZES ':' cmds FIM  */
#line 269 "matemagica.y"
                                  { 
        if ((yyvsp[-1].str) != NULL) {
            char *result = malloc(strlen((yyvsp[-1].str)) + 40);
            if (result == NULL){
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "for i = 1, %d do\n%s\nend", (yyvsp[-4].num), (yyvsp[-1].str));
            (yyval.str) = result;
            free((yyvsp[-1].str));
        } else {
            yyerror("Invalid repetition command.");
            YYABORT;
        }
    }
#line 1574 "y.tab.c"
    break;

  case 32: /* repeticao: REPITA IDENTIFIER VEZES ':' cmds FIM  */
#line 284 "matemagica.y"
                                           { 
        if ((yyvsp[-1].str) != NULL) {
            char *result = malloc(strlen((yyvsp[-1].str)) + 40);
            if (result == NULL){
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "for i = 1, %s do\n%s\nend", (yyvsp[-4].str), (yyvsp[-1].str));
            (yyval.str) = result;
            free((yyvsp[-1].str));
        } else {
            yyerror("Invalid repetition command.");
            YYABORT;
        }
    }
#line 1594 "y.tab.c"
    break;

  case 33: /* condicional: SE IDENTIFIER ENTAO cmds FIM  */
#line 302 "matemagica.y"
                                 { 
        char *result = malloc(strlen((yyvsp[-3].str)) + strlen((yyvsp[-1].str)) + 20);
        if (result == NULL){
           yyerror("Memory allocation failed");
           YYABORT;
        }
        sprintf(result, "if %s then\n%s\nend\n", (yyvsp[-3].str), (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-1].str));
    }
#line 1609 "y.tab.c"
    break;

  case 34: /* condicional: SE NUM ENTAO cmds FIM  */
#line 312 "matemagica.y"
                            {
        char *result = malloc(strlen((yyvsp[-1].str)) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %d ~= 0 then\n%s\nend", (yyvsp[-3].num), (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-1].str));
    }
#line 1624 "y.tab.c"
    break;

  case 35: /* condicional: SE IDENTIFIER ENTAO cmds SENAO cmds FIM  */
#line 322 "matemagica.y"
                                              { 
        char *result = malloc(strlen((yyvsp[-3].str)) + strlen((yyvsp[-1].str)) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %s ~= 0 then\n%s\nelse\n%s\nend", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1640 "y.tab.c"
    break;

  case 36: /* condicional: SE NUM ENTAO cmds SENAO cmds FIM  */
#line 333 "matemagica.y"
                                       {
        char *result = malloc(strlen((yyvsp[-3].str)) + strlen((yyvsp[-1].str)) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %d ~= 0 then\n%s\nelse\n%s\nend", (yyvsp[-5].num), (yyvsp[-3].str), (yyvsp[-1].str));
        (yyval.str) = result;
        free((yyvsp[-3].str));
        free((yyvsp[-1].str));
    }
#line 1656 "y.tab.c"
    break;


#line 1660 "y.tab.c"

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

#line 346 "matemagica.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
