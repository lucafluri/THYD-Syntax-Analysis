// A Bison parser, made by GNU Bison 3.2.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file tpparser.h
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_YY_TPPARSER_H_INCLUDED
# define YY_YY_TPPARSER_H_INCLUDED
// //                    "%code requires" blocks.
#line 5 "tpparser.yy" // lalr1.cc:403

#include <string>
#include "common.h"
#include "ast.h"
class BParser;

#line 55 "tpparser.h" // lalr1.cc:403

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

// Support move semantics when possible.
#if defined __cplusplus && 201103L <= __cplusplus
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YYASSERT
# include <cassert>
# define YYASSERT assert
#endif


#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


namespace yy {
#line 149 "tpparser.h" // lalr1.cc:403

  /// A stack with random access from its top.
  template <typename T, typename S = std::vector<T> >
  class stack
  {
  public:
    // Hide our reversed order.
    typedef typename S::reverse_iterator iterator;
    typedef typename S::const_reverse_iterator const_iterator;
    typedef typename S::size_type size_type;

    stack (size_type n = 200)
      : seq_ (n)
    {}

    /// Random access.
    ///
    /// Index 0 returns the topmost element.
    T&
    operator[] (size_type i)
    {
      return seq_[size () - 1 - i];
    }

    /// Random access.
    ///
    /// Index 0 returns the topmost element.
    T&
    operator[] (int i)
    {
      return operator[] (size_type (i));
    }

    /// Random access.
    ///
    /// Index 0 returns the topmost element.
    const T&
    operator[] (size_type i) const
    {
      return seq_[size () - 1 - i];
    }

    /// Random access.
    ///
    /// Index 0 returns the topmost element.
    const T&
    operator[] (int i) const
    {
      return operator[] (size_type (i));
    }

    /// Steal the contents of \a t.
    ///
    /// Close to move-semantics.
    void
    push (YY_MOVE_REF (T) t)
    {
      seq_.push_back (T ());
      operator[](0).move (t);
    }

    void
    pop (int n = 1)
    {
      for (; 0 < n; --n)
        seq_.pop_back ();
    }

    void
    clear ()
    {
      seq_.clear ();
    }

    size_type
    size () const
    {
      return seq_.size ();
    }

    const_iterator
    begin () const
    {
      return seq_.rbegin ();
    }

    const_iterator
    end () const
    {
      return seq_.rend ();
    }

  private:
    stack (const stack&);
    stack& operator= (const stack&);
    /// The wrapped container.
    S seq_;
  };

  /// Present a slice of the top of a stack.
  template <typename T, typename S = stack<T> >
  class slice
  {
  public:
    slice (const S& stack, int range)
      : stack_ (stack)
      , range_ (range)
    {}

    const T&
    operator[] (int i) const
    {
      return stack_[range_ - i];
    }

  private:
    const S& stack_;
    int range_;
  };



  /// A char[S] buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current state.
  template <size_t S>
  struct variant
  {
    /// Type of *this.
    typedef variant<S> self_type;

    /// Empty construction.
    variant ()
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    variant (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YYASSERT (sizeof (T) <= S);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

    /// Destruction, allowed only if empty.
    ~variant ()
    {
      YYASSERT (!yytypeid_);
    }

    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= S);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

# if defined __cplusplus && 201103L <= __cplusplus
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename U>
    T&
    emplace (U&& u)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= S);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u));
    }
# else
    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= S);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as ()
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= S);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= S);
      return *yyas_<T> ();
    }

    /// Swap the content with \a other, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// variant::move ().
    template <typename T>
    void
    swap (self_type& other)
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == *other.yytypeid_);
      std::swap (as<T> (), other.as<T> ());
    }

    /// Move the content of \a other to this.
    ///
    /// Destroys \a other.
    template <typename T>
    void
    move (self_type& other)
    {
# if defined __cplusplus && 201103L <= __cplusplus
      emplace<T> (std::move (other.as<T> ()));
# else
      emplace<T> ();
      swap<T> (other);
# endif
      other.destroy<T> ();
    }

# if defined __cplusplus && 201103L <= __cplusplus
    /// Move the content of \a other to this.
    template <typename T>
    void
    move (self_type&& other)
    {
      emplace<T> (std::move (other.as<T> ()));
      other.destroy<T> ();
    }
#endif

    /// Copy the content of \a other to this.
    template <typename T>
    void
    copy (const self_type& other)
    {
      emplace<T> (other.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator= (const self_type&);
    variant (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ ()
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[S];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };


  /// A Bison parser.
  class parser
  {
  public:
#ifndef YYSTYPE
    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // assignment_statement
      char dummy1[sizeof (AST::AssignmentStmtNode*)];

      // main_block
      char dummy2[sizeof (AST::BlockNode*)];

      // callable_declarations
      char dummy3[sizeof (AST::CallableDeclarationsNode*)];

      // compound_statement
      char dummy4[sizeof (AST::CompoundStmtNode*)];

      // empty_statement
      char dummy5[sizeof (AST::EmptyStmtNode*)];

      // expression
      char dummy6[sizeof (AST::ExprNode*)];

      // if_statement
      char dummy7[sizeof (AST::IfStmtNode*)];

      // statement
      // if_factored
      char dummy8[sizeof (AST::StmtNode*)];

      // variable_declaration
      char dummy9[sizeof (AST::VariableDeclNode*)];

      // variable_declarations
      char dummy10[sizeof (AST::VariableDeclarationsNode*)];

      // variable_lvalue
      char dummy11[sizeof (AST::VariableNode*)];

      // while_statement
      char dummy12[sizeof (AST::WhileStmtNode*)];

      // type
      // array_type
      char dummy13[sizeof (LNG::DataType)];

      // simple_type
      char dummy14[sizeof (LNG::SimpleDataType)];

      // list_statement
      char dummy15[sizeof (std::list<AST::StmtNode*>)];

      // list_variable_declaration
      char dummy16[sizeof (std::list<AST::VariableDeclNode*>)];

      // list_identifier
      char dummy17[sizeof (std::list<std::string>)];

      // t_identifier
      // t_integer_l
      // t_real_l
      // t_string_l
      char dummy18[sizeof (std::string)];
};

    /// Symbol semantic values.
    typedef variant<sizeof (union_type)> semantic_type;
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m);
      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        t_eoi = 0,
        t_assign = 258,
        t_divide = 259,
        t_eq = 260,
        t_gt = 261,
        t_gteq = 262,
        t_lt = 263,
        t_lteq = 264,
        t_minus = 265,
        t_multiply = 266,
        t_neq = 267,
        t_plus = 268,
        t_colon = 269,
        t_comma = 270,
        t_dot = 271,
        t_lbracket = 272,
        t_lparenthesis = 273,
        t_rbracket = 274,
        t_rparenthesis = 275,
        t_subrange = 276,
        t_semicolon = 277,
        t_and = 278,
        t_array = 279,
        t_begin = 280,
        t_boolean = 281,
        t_div = 282,
        t_do = 283,
        t_else = 284,
        t_end = 285,
        t_false = 286,
        t_function = 287,
        t_if = 288,
        t_integer = 289,
        t_not = 290,
        t_of = 291,
        t_or = 292,
        t_procedure = 293,
        t_program = 294,
        t_read = 295,
        t_readln = 296,
        t_real = 297,
        t_then = 298,
        t_true = 299,
        t_var = 300,
        t_while = 301,
        t_write = 302,
        t_writeln = 303,
        t_identifier = 304,
        t_integer_l = 305,
        t_real_l = 306,
        t_string_l = 307,
        t_unknown = 308
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ();

      /// Move or copy constructor.
      basic_symbol (YY_RVREF (basic_symbol) other);


      /// Constructor for valueless symbols, and symbols from each type.
      basic_symbol (typename Base::kind_type t, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::AssignmentStmtNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::BlockNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::CallableDeclarationsNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::CompoundStmtNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::EmptyStmtNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::ExprNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::IfStmtNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::StmtNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::VariableDeclNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::VariableDeclarationsNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::VariableNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (AST::WhileStmtNode*) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (LNG::DataType) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (LNG::SimpleDataType) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (std::list<AST::StmtNode*>) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (std::list<AST::VariableDeclNode*>) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (std::list<std::string>) v, YY_RVREF (location_type) l);
      basic_symbol (typename Base::kind_type t, YY_RVREF (std::string) v, YY_RVREF (location_type) l);


      /// Destroy the symbol.
      ~basic_symbol ();

      /// Destroy contents, and record that is empty.
      void clear ();

      /// Whether empty.
      bool empty () const;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if defined __cplusplus && __cplusplus < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& other);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

      /// Copy constructor.
      by_type (const by_type& other);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const;

      /// The token.
      token_type token () const;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    typedef basic_symbol<by_type> symbol_type;

    /// Build a parser object.
    parser (BParser& prs_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    // Symbol constructors declarations.
    static
    symbol_type
    make_t_eoi (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_assign (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_divide (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_eq (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_gt (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_gteq (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_lt (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_lteq (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_minus (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_multiply (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_neq (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_plus (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_colon (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_comma (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_dot (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_lbracket (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_lparenthesis (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_rbracket (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_rparenthesis (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_subrange (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_semicolon (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_and (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_array (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_begin (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_boolean (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_div (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_do (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_else (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_end (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_false (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_function (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_if (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_integer (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_not (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_of (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_or (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_procedure (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_program (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_read (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_readln (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_real (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_then (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_true (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_var (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_while (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_write (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_writeln (YY_COPY (location_type) l);

    static
    symbol_type
    make_t_identifier (YY_COPY (std::string) v, YY_COPY (location_type) l);

    static
    symbol_type
    make_t_integer_l (YY_COPY (std::string) v, YY_COPY (location_type) l);

    static
    symbol_type
    make_t_real_l (YY_COPY (std::string) v, YY_COPY (location_type) l);

    static
    symbol_type
    make_t_string_l (YY_COPY (std::string) v, YY_COPY (location_type) l);

    static
    symbol_type
    make_t_unknown (YY_COPY (location_type) l);



  private:
    /// This class is not copyable.
    parser (const parser&);
    parser& operator= (const parser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (token_type t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const signed char yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned char yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const signed char yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const signed char yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const unsigned char yytable_[];

  static const unsigned char yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned char yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned char yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    // Debugging.
    int yydebug_;
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state ();

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s);

      /// Copy constructor.
      by_state (const by_state& other);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const;

      /// The state number used to denote an empty symbol.
      enum { empty_state = -1 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if defined __cplusplus && __cplusplus < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);
#endif
    };

    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 43,     ///< Last index in yytable_.
      yynnts_ = 21,  ///< Number of nonterminal symbols.
      yyfinal_ = 4, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 54  ///< Number of tokens.
    };


    // User arguments.
    BParser& prs;
  };

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (token_type t)
  {
    static
    const token_number_type
    translate_table[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
    };
    const unsigned user_token_number_max_ = 308;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

  inline
  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
    , location ()
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (YY_RVREF (basic_symbol) other)
    : Base (YY_MOVE (other))
    , value ()
    , location (YY_MOVE (other.location))
  {
    switch (other.type_get ())
    {
      case 69: // assignment_statement
        value.YY_MOVE_OR_COPY< AST::AssignmentStmtNode* > (YY_MOVE (other.value));
        break;

      case 56: // main_block
        value.YY_MOVE_OR_COPY< AST::BlockNode* > (YY_MOVE (other.value));
        break;

      case 66: // callable_declarations
        value.YY_MOVE_OR_COPY< AST::CallableDeclarationsNode* > (YY_MOVE (other.value));
        break;

      case 64: // compound_statement
        value.YY_MOVE_OR_COPY< AST::CompoundStmtNode* > (YY_MOVE (other.value));
        break;

      case 68: // empty_statement
        value.YY_MOVE_OR_COPY< AST::EmptyStmtNode* > (YY_MOVE (other.value));
        break;

      case 71: // expression
        value.YY_MOVE_OR_COPY< AST::ExprNode* > (YY_MOVE (other.value));
        break;

      case 73: // if_statement
        value.YY_MOVE_OR_COPY< AST::IfStmtNode* > (YY_MOVE (other.value));
        break;

      case 67: // statement
      case 74: // if_factored
        value.YY_MOVE_OR_COPY< AST::StmtNode* > (YY_MOVE (other.value));
        break;

      case 59: // variable_declaration
        value.YY_MOVE_OR_COPY< AST::VariableDeclNode* > (YY_MOVE (other.value));
        break;

      case 57: // variable_declarations
        value.YY_MOVE_OR_COPY< AST::VariableDeclarationsNode* > (YY_MOVE (other.value));
        break;

      case 70: // variable_lvalue
        value.YY_MOVE_OR_COPY< AST::VariableNode* > (YY_MOVE (other.value));
        break;

      case 72: // while_statement
        value.YY_MOVE_OR_COPY< AST::WhileStmtNode* > (YY_MOVE (other.value));
        break;

      case 61: // type
      case 63: // array_type
        value.YY_MOVE_OR_COPY< LNG::DataType > (YY_MOVE (other.value));
        break;

      case 62: // simple_type
        value.YY_MOVE_OR_COPY< LNG::SimpleDataType > (YY_MOVE (other.value));
        break;

      case 65: // list_statement
        value.YY_MOVE_OR_COPY< std::list<AST::StmtNode*> > (YY_MOVE (other.value));
        break;

      case 58: // list_variable_declaration
        value.YY_MOVE_OR_COPY< std::list<AST::VariableDeclNode*> > (YY_MOVE (other.value));
        break;

      case 60: // list_identifier
        value.YY_MOVE_OR_COPY< std::list<std::string> > (YY_MOVE (other.value));
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (other.value));
        break;

      default:
        break;
    }

  }


  // Implementation of basic_symbol constructor for each type.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (location_type) l)
    : Base (t)
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::AssignmentStmtNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::BlockNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::CallableDeclarationsNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::CompoundStmtNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::EmptyStmtNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::ExprNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::IfStmtNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::StmtNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::VariableDeclNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::VariableDeclarationsNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::VariableNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (AST::WhileStmtNode*) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (LNG::DataType) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (LNG::SimpleDataType) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (std::list<AST::StmtNode*>) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (std::list<AST::VariableDeclNode*>) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (std::list<std::string>) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (std::string) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}



  template <typename Base>
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::clear ()
  {
    // User destructor.
    symbol_number_type yytype = this->type_get ();
    basic_symbol<Base>& yysym = *this;
    (void) yysym;
    switch (yytype)
    {
   default:
      break;
    }

    // Type destructor.
  switch (yytype)
    {
      case 69: // assignment_statement
        value.template destroy< AST::AssignmentStmtNode* > ();
        break;

      case 56: // main_block
        value.template destroy< AST::BlockNode* > ();
        break;

      case 66: // callable_declarations
        value.template destroy< AST::CallableDeclarationsNode* > ();
        break;

      case 64: // compound_statement
        value.template destroy< AST::CompoundStmtNode* > ();
        break;

      case 68: // empty_statement
        value.template destroy< AST::EmptyStmtNode* > ();
        break;

      case 71: // expression
        value.template destroy< AST::ExprNode* > ();
        break;

      case 73: // if_statement
        value.template destroy< AST::IfStmtNode* > ();
        break;

      case 67: // statement
      case 74: // if_factored
        value.template destroy< AST::StmtNode* > ();
        break;

      case 59: // variable_declaration
        value.template destroy< AST::VariableDeclNode* > ();
        break;

      case 57: // variable_declarations
        value.template destroy< AST::VariableDeclarationsNode* > ();
        break;

      case 70: // variable_lvalue
        value.template destroy< AST::VariableNode* > ();
        break;

      case 72: // while_statement
        value.template destroy< AST::WhileStmtNode* > ();
        break;

      case 61: // type
      case 63: // array_type
        value.template destroy< LNG::DataType > ();
        break;

      case 62: // simple_type
        value.template destroy< LNG::SimpleDataType > ();
        break;

      case 65: // list_statement
        value.template destroy< std::list<AST::StmtNode*> > ();
        break;

      case 58: // list_variable_declaration
        value.template destroy< std::list<AST::VariableDeclNode*> > ();
        break;

      case 60: // list_identifier
        value.template destroy< std::list<std::string> > ();
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

    Base::clear ();
  }

  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 69: // assignment_statement
        value.move< AST::AssignmentStmtNode* > (YY_MOVE (s.value));
        break;

      case 56: // main_block
        value.move< AST::BlockNode* > (YY_MOVE (s.value));
        break;

      case 66: // callable_declarations
        value.move< AST::CallableDeclarationsNode* > (YY_MOVE (s.value));
        break;

      case 64: // compound_statement
        value.move< AST::CompoundStmtNode* > (YY_MOVE (s.value));
        break;

      case 68: // empty_statement
        value.move< AST::EmptyStmtNode* > (YY_MOVE (s.value));
        break;

      case 71: // expression
        value.move< AST::ExprNode* > (YY_MOVE (s.value));
        break;

      case 73: // if_statement
        value.move< AST::IfStmtNode* > (YY_MOVE (s.value));
        break;

      case 67: // statement
      case 74: // if_factored
        value.move< AST::StmtNode* > (YY_MOVE (s.value));
        break;

      case 59: // variable_declaration
        value.move< AST::VariableDeclNode* > (YY_MOVE (s.value));
        break;

      case 57: // variable_declarations
        value.move< AST::VariableDeclarationsNode* > (YY_MOVE (s.value));
        break;

      case 70: // variable_lvalue
        value.move< AST::VariableNode* > (YY_MOVE (s.value));
        break;

      case 72: // while_statement
        value.move< AST::WhileStmtNode* > (YY_MOVE (s.value));
        break;

      case 61: // type
      case 63: // array_type
        value.move< LNG::DataType > (YY_MOVE (s.value));
        break;

      case 62: // simple_type
        value.move< LNG::SimpleDataType > (YY_MOVE (s.value));
        break;

      case 65: // list_statement
        value.move< std::list<AST::StmtNode*> > (YY_MOVE (s.value));
        break;

      case 58: // list_variable_declaration
        value.move< std::list<AST::VariableDeclNode*> > (YY_MOVE (s.value));
        break;

      case 60: // list_identifier
        value.move< std::list<std::string> > (YY_MOVE (s.value));
        break;

      case 49: // t_identifier
      case 50: // t_integer_l
      case 51: // t_real_l
      case 52: // t_string_l
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }

  inline
  parser::token_type
  parser::by_type::token () const
  {
    // YYTOKNUM[NUM] -- (External) token number corresponding to the
    // (internal) symbol number NUM (which must be that of a token).  */
    static
    const unsigned short
    yytoken_number_[] =
    {
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
    };
    return static_cast<token_type> (yytoken_number_[type]);
  }

  // Implementation of make_symbol for each symbol type.
  inline
  parser::symbol_type
  parser::make_t_eoi (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_eoi, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_assign (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_assign, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_divide (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_divide, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_eq (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_eq, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_gt (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_gt, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_gteq (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_gteq, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_lt (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_lt, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_lteq (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_lteq, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_minus (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_minus, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_multiply (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_multiply, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_neq (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_neq, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_plus (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_plus, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_colon (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_colon, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_comma (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_comma, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_dot (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_dot, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_lbracket (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_lbracket, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_lparenthesis (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_lparenthesis, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_rbracket (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_rbracket, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_rparenthesis (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_rparenthesis, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_subrange (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_subrange, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_semicolon (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_semicolon, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_and (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_and, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_array (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_array, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_begin (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_begin, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_boolean (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_boolean, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_div (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_div, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_do (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_do, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_else (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_else, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_end (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_end, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_false (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_false, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_function (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_function, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_if (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_if, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_integer (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_integer, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_not (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_not, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_of (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_of, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_or (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_or, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_procedure (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_procedure, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_program (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_program, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_read (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_read, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_readln (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_readln, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_real (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_real, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_then (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_then, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_true (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_true, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_var (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_var, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_while (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_while, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_write (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_write, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_writeln (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_writeln, YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_identifier (YY_COPY (std::string) v, YY_COPY (location_type) l)
  {
    return symbol_type (token::t_identifier, YY_MOVE (v), YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_integer_l (YY_COPY (std::string) v, YY_COPY (location_type) l)
  {
    return symbol_type (token::t_integer_l, YY_MOVE (v), YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_real_l (YY_COPY (std::string) v, YY_COPY (location_type) l)
  {
    return symbol_type (token::t_real_l, YY_MOVE (v), YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_string_l (YY_COPY (std::string) v, YY_COPY (location_type) l)
  {
    return symbol_type (token::t_string_l, YY_MOVE (v), YY_MOVE (l));
  }

  inline
  parser::symbol_type
  parser::make_t_unknown (YY_COPY (location_type) l)
  {
    return symbol_type (token::t_unknown, YY_MOVE (l));
  }



} // yy
#line 2094 "tpparser.h" // lalr1.cc:403




#endif // !YY_YY_TPPARSER_H_INCLUDED
