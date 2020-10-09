// A Bison parser, made by GNU Bison 3.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "tpparser.h"


// Unqualified %code blocks.
#line 22 "tpparser.yy" // lalr1.cc:437

  using namespace std;
  using namespace AST;
  #include "bparser.h"
  namespace yy
  {
    // Return the next token.
    auto yylex ( BParser& prs ) -> parser::symbol_type
    {
        prs.lexer_.get( prs.token_ );
        yy::position pos( nullptr, prs.token_.loc.line, prs.token_.loc.col );
        parser::location_type loc( pos, pos );

        switch ( prs.token_.name ) {
        case LNG::TN::t_assign:     return parser::make_t_assign(loc);
        case LNG::TN::t_divide:     return parser::make_t_divide(loc);
        case LNG::TN::t_lt:         return parser::make_t_lt(loc);
        case LNG::TN::t_eq:         return parser::make_t_eq(loc);
        case LNG::TN::t_gt:         return parser::make_t_gt(loc);
        case LNG::TN::t_neq:        return parser::make_t_neq(loc);
        case LNG::TN::t_lteq:       return parser::make_t_lteq(loc);
        case LNG::TN::t_gteq:       return parser::make_t_gteq(loc);
        case LNG::TN::t_minus:      return parser::make_t_minus(loc);
        case LNG::TN::t_multiply:   return parser::make_t_multiply(loc);
        case LNG::TN::t_plus:       return parser::make_t_plus(loc);

        case LNG::TN::t_colon:          return parser::make_t_colon(loc);
        case LNG::TN::t_comma:          return parser::make_t_comma(loc);
        case LNG::TN::t_dot:            return parser::make_t_dot(loc);
        case LNG::TN::t_lbracket:       return parser::make_t_lbracket(loc);
        case LNG::TN::t_lparenthesis:   return parser::make_t_lparenthesis(loc);
        case LNG::TN::t_rbracket:       return parser::make_t_rbracket(loc);
        case LNG::TN::t_rparenthesis:   return parser::make_t_rparenthesis(loc);
        case LNG::TN::t_subrange:       return parser::make_t_subrange(loc);
        case LNG::TN::t_semicolon:      return parser::make_t_semicolon(loc);

        case LNG::TN::t_and:        return parser::make_t_and(loc);
        case LNG::TN::t_array:      return parser::make_t_array(loc);
        case LNG::TN::t_begin:      return parser::make_t_begin(loc);
        case LNG::TN::t_boolean:    return parser::make_t_boolean(loc);
        case LNG::TN::t_div:        return parser::make_t_div(loc);
        case LNG::TN::t_do:         return parser::make_t_do(loc);
        case LNG::TN::t_else:       return parser::make_t_else(loc);
        case LNG::TN::t_end:        return parser::make_t_end(loc);
        case LNG::TN::t_false:      return parser::make_t_false(loc);
        case LNG::TN::t_function:   return parser::make_t_function(loc);
        case LNG::TN::t_if:         return parser::make_t_if(loc);
        case LNG::TN::t_integer:    return parser::make_t_integer(loc);
        case LNG::TN::t_not:        return parser::make_t_not(loc);
        case LNG::TN::t_of:         return parser::make_t_of(loc);
        case LNG::TN::t_or:         return parser::make_t_or(loc);
        case LNG::TN::t_procedure:  return parser::make_t_procedure(loc);
        case LNG::TN::t_program:    return parser::make_t_program(loc);
        case LNG::TN::t_read:       return parser::make_t_read(loc);
        case LNG::TN::t_readln:     return parser::make_t_readln(loc);
        case LNG::TN::t_real:       return parser::make_t_real(loc);
        case LNG::TN::t_then:       return parser::make_t_then(loc);
        case LNG::TN::t_true:       return parser::make_t_true(loc);
        case LNG::TN::t_var:        return parser::make_t_var(loc);
        case LNG::TN::t_while:      return parser::make_t_while(loc);
        case LNG::TN::t_write:      return parser::make_t_write(loc);
        case LNG::TN::t_writeln:    return parser::make_t_writeln(loc);

        case LNG::TN::t_identifier: return parser::make_t_identifier(prs.token_.text, loc);

        case LNG::TN::t_integer_l:  return parser::make_t_integer_l(prs.token_.text, loc);
        case LNG::TN::t_real_l:     return parser::make_t_real_l(prs.token_.text, loc);
        case LNG::TN::t_string_l:   return parser::make_t_string_l(prs.token_.text, loc);

        case LNG::TN::t_eoi:        return parser::make_t_eoi(loc);
        default:                    return parser::make_t_unknown(loc);
        }
    }
  }

#line 121 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:437


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 216 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:512

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (BParser& prs_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      prs (prs_yyarg)
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 69: // assignment_statement
        value.YY_MOVE_OR_COPY< AST::AssignmentStmtNode* > (YY_MOVE (that.value));
        break;

      case 56: // main_block
        value.YY_MOVE_OR_COPY< AST::BlockNode* > (YY_MOVE (that.value));
        break;

      case 66: // callable_declarations
        value.YY_MOVE_OR_COPY< AST::CallableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 64: // compound_statement
        value.YY_MOVE_OR_COPY< AST::CompoundStmtNode* > (YY_MOVE (that.value));
        break;

      case 68: // empty_statement
        value.YY_MOVE_OR_COPY< AST::EmptyStmtNode* > (YY_MOVE (that.value));
        break;

      case 71: // expression
        value.YY_MOVE_OR_COPY< AST::ExprNode* > (YY_MOVE (that.value));
        break;

      case 73: // if_statement
        value.YY_MOVE_OR_COPY< AST::IfStmtNode* > (YY_MOVE (that.value));
        break;

      case 67: // statement
      case 74: // if_factored
        value.YY_MOVE_OR_COPY< AST::StmtNode* > (YY_MOVE (that.value));
        break;

      case 59: // variable_declaration
        value.YY_MOVE_OR_COPY< AST::VariableDeclNode* > (YY_MOVE (that.value));
        break;

      case 57: // variable_declarations
        value.YY_MOVE_OR_COPY< AST::VariableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 70: // variable_lvalue
        value.YY_MOVE_OR_COPY< AST::VariableNode* > (YY_MOVE (that.value));
        break;

      case 72: // while_statement
        value.YY_MOVE_OR_COPY< AST::WhileStmtNode* > (YY_MOVE (that.value));
        break;

      case 61: // type
      case 63: // array_type
        value.YY_MOVE_OR_COPY< LNG::DataType > (YY_MOVE (that.value));
        break;

      case 62: // simple_type
        value.YY_MOVE_OR_COPY< LNG::SimpleDataType > (YY_MOVE (that.value));
        break;

      case 65: // list_statement
        value.YY_MOVE_OR_COPY< std::list<AST::StmtNode*> > (YY_MOVE (that.value));
        break;

      case 58: // list_variable_declaration
        value.YY_MOVE_OR_COPY< std::list<AST::VariableDeclNode*> > (YY_MOVE (that.value));
        break;

      case 60: // list_identifier
        value.YY_MOVE_OR_COPY< std::list<std::string> > (YY_MOVE (that.value));
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if defined __cplusplus && 201103L <= __cplusplus
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 69: // assignment_statement
        value.move< AST::AssignmentStmtNode* > (YY_MOVE (that.value));
        break;

      case 56: // main_block
        value.move< AST::BlockNode* > (YY_MOVE (that.value));
        break;

      case 66: // callable_declarations
        value.move< AST::CallableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 64: // compound_statement
        value.move< AST::CompoundStmtNode* > (YY_MOVE (that.value));
        break;

      case 68: // empty_statement
        value.move< AST::EmptyStmtNode* > (YY_MOVE (that.value));
        break;

      case 71: // expression
        value.move< AST::ExprNode* > (YY_MOVE (that.value));
        break;

      case 73: // if_statement
        value.move< AST::IfStmtNode* > (YY_MOVE (that.value));
        break;

      case 67: // statement
      case 74: // if_factored
        value.move< AST::StmtNode* > (YY_MOVE (that.value));
        break;

      case 59: // variable_declaration
        value.move< AST::VariableDeclNode* > (YY_MOVE (that.value));
        break;

      case 57: // variable_declarations
        value.move< AST::VariableDeclarationsNode* > (YY_MOVE (that.value));
        break;

      case 70: // variable_lvalue
        value.move< AST::VariableNode* > (YY_MOVE (that.value));
        break;

      case 72: // while_statement
        value.move< AST::WhileStmtNode* > (YY_MOVE (that.value));
        break;

      case 61: // type
      case 63: // array_type
        value.move< LNG::DataType > (YY_MOVE (that.value));
        break;

      case 62: // simple_type
        value.move< LNG::SimpleDataType > (YY_MOVE (that.value));
        break;

      case 65: // list_statement
        value.move< std::list<AST::StmtNode*> > (YY_MOVE (that.value));
        break;

      case 58: // list_variable_declaration
        value.move< std::list<AST::VariableDeclNode*> > (YY_MOVE (that.value));
        break;

      case 60: // list_identifier
        value.move< std::list<std::string> > (YY_MOVE (that.value));
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if defined __cplusplus && __cplusplus < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 69: // assignment_statement
        value.move< AST::AssignmentStmtNode* > (that.value);
        break;

      case 56: // main_block
        value.move< AST::BlockNode* > (that.value);
        break;

      case 66: // callable_declarations
        value.move< AST::CallableDeclarationsNode* > (that.value);
        break;

      case 64: // compound_statement
        value.move< AST::CompoundStmtNode* > (that.value);
        break;

      case 68: // empty_statement
        value.move< AST::EmptyStmtNode* > (that.value);
        break;

      case 71: // expression
        value.move< AST::ExprNode* > (that.value);
        break;

      case 73: // if_statement
        value.move< AST::IfStmtNode* > (that.value);
        break;

      case 67: // statement
      case 74: // if_factored
        value.move< AST::StmtNode* > (that.value);
        break;

      case 59: // variable_declaration
        value.move< AST::VariableDeclNode* > (that.value);
        break;

      case 57: // variable_declarations
        value.move< AST::VariableDeclarationsNode* > (that.value);
        break;

      case 70: // variable_lvalue
        value.move< AST::VariableNode* > (that.value);
        break;

      case 72: // while_statement
        value.move< AST::WhileStmtNode* > (that.value);
        break;

      case 61: // type
      case 63: // array_type
        value.move< LNG::DataType > (that.value);
        break;

      case 62: // simple_type
        value.move< LNG::SimpleDataType > (that.value);
        break;

      case 65: // list_statement
        value.move< std::list<AST::StmtNode*> > (that.value);
        break;

      case 58: // list_variable_declaration
        value.move< std::list<AST::VariableDeclNode*> > (that.value);
        break;

      case 60: // list_identifier
        value.move< std::list<std::string> > (that.value);
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if defined __cplusplus && 201103L <= __cplusplus
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (prs));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 69: // assignment_statement
        yylhs.value.emplace< AST::AssignmentStmtNode* > ();
        break;

      case 56: // main_block
        yylhs.value.emplace< AST::BlockNode* > ();
        break;

      case 66: // callable_declarations
        yylhs.value.emplace< AST::CallableDeclarationsNode* > ();
        break;

      case 64: // compound_statement
        yylhs.value.emplace< AST::CompoundStmtNode* > ();
        break;

      case 68: // empty_statement
        yylhs.value.emplace< AST::EmptyStmtNode* > ();
        break;

      case 71: // expression
        yylhs.value.emplace< AST::ExprNode* > ();
        break;

      case 73: // if_statement
        yylhs.value.emplace< AST::IfStmtNode* > ();
        break;

      case 67: // statement
      case 74: // if_factored
        yylhs.value.emplace< AST::StmtNode* > ();
        break;

      case 59: // variable_declaration
        yylhs.value.emplace< AST::VariableDeclNode* > ();
        break;

      case 57: // variable_declarations
        yylhs.value.emplace< AST::VariableDeclarationsNode* > ();
        break;

      case 70: // variable_lvalue
        yylhs.value.emplace< AST::VariableNode* > ();
        break;

      case 72: // while_statement
        yylhs.value.emplace< AST::WhileStmtNode* > ();
        break;

      case 61: // type
      case 63: // array_type
        yylhs.value.emplace< LNG::DataType > ();
        break;

      case 62: // simple_type
        yylhs.value.emplace< LNG::SimpleDataType > ();
        break;

      case 65: // list_statement
        yylhs.value.emplace< std::list<AST::StmtNode*> > ();
        break;

      case 58: // list_variable_declaration
        yylhs.value.emplace< std::list<AST::VariableDeclNode*> > ();
        break;

      case 60: // list_identifier
        yylhs.value.emplace< std::list<std::string> > ();
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 191 "tpparser.yy" // lalr1.cc:906
    { prs.set_AST( new AST::ProgramNode( yystack_[3].value.as< std::string > (), yystack_[1].value.as< AST::BlockNode* > () ) ); }
#line 919 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 3:
#line 198 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::BlockNode* > () = new AST::BlockNode( yystack_[2].value.as< AST::VariableDeclarationsNode* > (), yystack_[1].value.as< AST::CallableDeclarationsNode* > (), yystack_[0].value.as< AST::CompoundStmtNode* > () ); }
#line 925 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 4:
#line 203 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::VariableDeclarationsNode* > () = new AST::VariableDeclarationsNode( yystack_[0].value.as< std::list<AST::VariableDeclNode*> > () ); }
#line 931 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 5:
#line 205 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::VariableDeclarationsNode* > () = nullptr; }
#line 937 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 6:
#line 210 "tpparser.yy" // lalr1.cc:906
    { yystack_[2].value.as< std::list<AST::VariableDeclNode*> > ().push_back( yystack_[1].value.as< AST::VariableDeclNode* > () ); yylhs.value.as< std::list<AST::VariableDeclNode*> > () = yystack_[2].value.as< std::list<AST::VariableDeclNode*> > (); }
#line 943 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 7:
#line 213 "tpparser.yy" // lalr1.cc:906
    { std::list<AST::VariableDeclNode*> lst; lst.push_back( yystack_[1].value.as< AST::VariableDeclNode* > () ); yylhs.value.as< std::list<AST::VariableDeclNode*> > () = lst; }
#line 949 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 8:
#line 218 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::VariableDeclNode* > () = new AST::VariableDeclNode( yystack_[2].value.as< std::list<std::string> > (), yystack_[0].value.as< LNG::DataType > () ); }
#line 955 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 9:
#line 223 "tpparser.yy" // lalr1.cc:906
    { yystack_[2].value.as< std::list<std::string> > ().push_back( yystack_[0].value.as< std::string > () ); yylhs.value.as< std::list<std::string> > () = yystack_[2].value.as< std::list<std::string> > (); }
#line 961 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 10:
#line 226 "tpparser.yy" // lalr1.cc:906
    { std::list<std::string> lst; lst.push_back( yystack_[0].value.as< std::string > () ); yylhs.value.as< std::list<std::string> > () = lst; }
#line 967 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 11:
#line 230 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< LNG::DataType > () = LNG::DataType(yystack_[0].value.as< LNG::SimpleDataType > ()); }
#line 973 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 12:
#line 232 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< LNG::DataType > () = yystack_[0].value.as< LNG::DataType > (); }
#line 979 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 13:
#line 236 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< LNG::SimpleDataType > () = LNG::SimpleDataType::tInteger; }
#line 985 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 14:
#line 238 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< LNG::SimpleDataType > () = LNG::SimpleDataType::tBoolean; }
#line 991 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 15:
#line 240 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< LNG::SimpleDataType > () = LNG::SimpleDataType::tReal; }
#line 997 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 16:
#line 252 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< LNG::DataType > () = yylhs.value.as< LNG::DataType > () = LNG::DataType( yystack_[0].value.as< LNG::SimpleDataType > (), std::stoi(yystack_[5].value.as< std::string > ()), std::stoi(yystack_[3].value.as< std::string > ()) ); }
#line 1003 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 17:
#line 259 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::CompoundStmtNode* > () = new AST::CompoundStmtNode(yystack_[1].value.as< std::list<AST::StmtNode*> > ()); }
#line 1009 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 18:
#line 264 "tpparser.yy" // lalr1.cc:906
    { yystack_[2].value.as< std::list<AST::StmtNode*> > ().push_back( yystack_[0].value.as< AST::StmtNode* > () ); yylhs.value.as< std::list<AST::StmtNode*> > () = yystack_[2].value.as< std::list<AST::StmtNode*> > (); }
#line 1015 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 19:
#line 267 "tpparser.yy" // lalr1.cc:906
    { std::list<AST::StmtNode*> lst; lst.push_back( yystack_[0].value.as< AST::StmtNode* > () ); yylhs.value.as< std::list<AST::StmtNode*> > () = lst; }
#line 1021 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 20:
#line 279 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::CallableDeclarationsNode* > () = nullptr; }
#line 1027 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 21:
#line 284 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::StmtNode* > () = yystack_[0].value.as< AST::AssignmentStmtNode* > (); }
#line 1033 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 22:
#line 286 "tpparser.yy" // lalr1.cc:906
    {yylhs.value.as< AST::StmtNode* > () = yystack_[0].value.as< AST::WhileStmtNode* > ();}
#line 1039 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 23:
#line 288 "tpparser.yy" // lalr1.cc:906
    {yylhs.value.as< AST::StmtNode* > () = yystack_[0].value.as< AST::IfStmtNode* > (); }
#line 1045 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 24:
#line 290 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::StmtNode* > () = yystack_[0].value.as< AST::EmptyStmtNode* > (); }
#line 1051 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 25:
#line 294 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::EmptyStmtNode* > () = new AST::EmptyStmtNode(); }
#line 1057 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 26:
#line 300 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::AssignmentStmtNode* > () = new AST::AssignmentStmtNode( yystack_[2].value.as< AST::VariableNode* > (), yystack_[0].value.as< AST::ExprNode* > ()); }
#line 1063 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 27:
#line 306 "tpparser.yy" // lalr1.cc:906
    {  yylhs.value.as< AST::VariableNode* > () = new AST::VariableNode( yystack_[0].value.as< std::string > (), nullptr ); }
#line 1069 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 28:
#line 310 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::ExprNode* > () = new AST::IntegerExprNode( std::stoi(yystack_[0].value.as< std::string > ()) ); }
#line 1075 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 29:
#line 318 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::WhileStmtNode* > () = new AST::WhileStmtNode(yystack_[2].value.as< AST::ExprNode* > (), yystack_[0].value.as< AST::StmtNode* > ()); }
#line 1081 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 30:
#line 326 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::IfStmtNode* > () = new AST::IfStmtNode(yystack_[3].value.as< AST::ExprNode* > (), yystack_[1].value.as< AST::StmtNode* > (), yystack_[0].value.as< AST::StmtNode* > ()); }
#line 1087 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;

  case 31:
#line 329 "tpparser.yy" // lalr1.cc:906
    { yylhs.value.as< AST::StmtNode* > () = yystack_[0].value.as< AST::StmtNode* > (); }
#line 1093 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
    break;


#line 1097 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:906
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -41;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
     -33,   -28,    22,     1,   -41,   -21,   -22,     9,   -41,   -41,
     -22,     4,    -2,   -41,     3,     7,   -41,   -24,   -19,   -32,
     -41,   -41,    14,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -18,   -18,   -41,   -15,   -41,   -41,   -41,    30,   -41,   -41,
     -16,   -41,    -8,     8,   -32,   -41,   -18,    16,   -32,   -32,
     -41,   -41,   -12,    10,   -41,    21,   -32,   -41,     5,   -41,
     -23,   -41
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,     0,     0,     0,     1,     5,     0,     0,    20,    10,
       4,     0,     0,     2,     0,     0,     7,     0,     0,    25,
       3,     6,     0,    14,    13,    15,     8,    11,    12,     9,
       0,     0,    27,     0,    19,    24,    21,     0,    22,    23,
       0,    28,     0,     0,    25,    17,     0,     0,    25,    25,
      18,    26,     0,    32,    29,     0,    25,    30,     0,    31,
       0,    16
  };

  const signed char
  parser::yypgoto_[] =
  {
     -41,   -41,   -41,   -41,   -41,    32,   -41,   -41,   -17,   -41,
     -41,   -41,   -41,   -40,   -41,   -41,   -41,   -26,   -41,   -41,
     -41
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     7,     8,    10,    11,    12,    26,    27,    28,
      20,    33,    14,    34,    35,    36,    37,    42,    38,    39,
      57
  };

  const unsigned char
  parser::yytable_[] =
  {
      22,    30,    23,    23,    50,    43,     1,    44,    53,    54,
      24,    24,    17,    18,    31,    45,    59,    32,    25,    25,
      51,     3,     4,     5,     6,    13,    16,     9,    19,    21,
      29,    40,    41,    46,    47,    48,    49,    52,    55,    56,
      58,    60,    15,    61
  };

  const unsigned char
  parser::yycheck_[] =
  {
      24,    33,    26,    26,    44,    31,    39,    22,    48,    49,
      34,    34,    14,    15,    46,    30,    56,    49,    42,    42,
      46,    49,     0,    22,    45,    16,    22,    49,    25,    22,
      49,    17,    50,     3,    50,    43,    28,    21,    50,    29,
      19,    36,    10,    60
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    39,    55,    49,     0,    22,    45,    56,    57,    49,
      58,    59,    60,    16,    66,    59,    22,    14,    15,    25,
      64,    22,    24,    26,    34,    42,    61,    62,    63,    49,
      33,    46,    49,    65,    67,    68,    69,    70,    72,    73,
      17,    50,    71,    71,    22,    30,     3,    50,    43,    28,
      67,    71,    21,    67,    67,    50,    29,    74,    19,    67,
      36,    62
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    54,    55,    56,    57,    57,    58,    58,    59,    60,
      60,    61,    61,    62,    62,    62,    63,    64,    65,    65,
      66,    67,    67,    67,    67,    68,    69,    70,    71,    72,
      73,    74,    74
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     5,     3,     2,     0,     3,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     8,     3,     3,     1,
       0,     1,     1,     1,     1,     0,     3,     1,     1,     4,
       5,     2,     0
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "t_eoi", "error", "$undefined", "t_assign", "t_divide", "t_eq", "t_gt",
  "t_gteq", "t_lt", "t_lteq", "t_minus", "t_multiply", "t_neq", "t_plus",
  "t_colon", "t_comma", "t_dot", "t_lbracket", "t_lparenthesis",
  "t_rbracket", "t_rparenthesis", "t_subrange", "t_semicolon", "t_and",
  "t_array", "t_begin", "t_boolean", "t_div", "t_do", "t_else", "t_end",
  "t_false", "t_function", "t_if", "t_integer", "t_not", "t_of", "t_or",
  "t_procedure", "t_program", "t_read", "t_readln", "t_real", "t_then",
  "t_true", "t_var", "t_while", "t_write", "t_writeln", "t_identifier",
  "t_integer_l", "t_real_l", "t_string_l", "t_unknown", "$accept",
  "program", "main_block", "variable_declarations",
  "list_variable_declaration", "variable_declaration", "list_identifier",
  "type", "simple_type", "array_type", "compound_statement",
  "list_statement", "callable_declarations", "statement",
  "empty_statement", "assignment_statement", "variable_lvalue",
  "expression", "while_statement", "if_statement", "if_factored", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
  parser::yyrline_[] =
  {
       0,   188,   188,   195,   202,   205,   209,   212,   217,   222,
     225,   230,   232,   236,   238,   240,   244,   256,   263,   266,
     279,   284,   286,   288,   290,   294,   297,   305,   309,   314,
     321,   329,   329
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1515 "/mnt/c/Users/Luca Fluri/Google Drive/FHNW iCompetence BSc/Semester 5 - HS20 Reykjavik/Compilers/Project/Project02/TurboPascal/cmake-build-debug/../tpparser.cpp" // lalr1.cc:1217
#line 331 "tpparser.yy" // lalr1.cc:1218


  namespace yy
  {
    // Report an error to the user.
    auto parser::error(const location_type& l, const std::string &msg) -> void {
        std::cerr << "'" << msg  << "' at (" << l.begin.line << ',' << l.begin.column << ")\n";
    }
  }
