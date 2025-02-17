/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef ABSYN_HEADER
#define ABSYN_HEADER

#include<string>
#include<vector>
#include <memory>

//C++ Abstract Syntax Interface.
using namespace std;
/********************   TypeDef Section    ********************/

typedef int Integer;
typedef char Char;
typedef double Double;
typedef std::string String;
typedef std::string Ident;


typedef std::string Id;
typedef std::string Library;


/********************   Forward Declarations    ********************/

class Program;
class Def;
class Field;
class Argument;
class Statment;
class Declaration;
class ConstDeclaration;
class ConstSpecification;
class VariableDeclaration;
class VariableSpecification;
class SimpleStatment;
class ShortVariableDeclaration;
class Expression;
class Type;
class PDefs;
class DFun;
class DFunWithoutType;
class DStruct;
class DMethode;
class DMethodeWithoutType;
class DImport;
class DPackage;
class FDeclaration;
class AArgument;
class SExprssion;
class SDeclaration;
class SSimpleStatment;
class SReturn;
class SReturnV;
class SWhile;
class SFor;
class SForSimple;
class SBlock;
class SIf;
class SIfSimple;
class SIfElse;
class SIfElseSimple;
class DeclarationConstDeclaration;
class DeclarationVariableDeclaration;
class DConstant;
class ConstSpecification1;
class ConstSpecification2;
class DVariable;
class VariableSpecification1;
class VariableSpecification2;
class VariableSpecification3;
class SimpleStatmentShortVariableDeclaration;
class SDVar;
class ETrue;
class EFalse;
class EInt;
class EDouble;
class EId;
class EApp;
class EProj;
class FStatment;
class FStatmentMethode;
class EPIncr;
class EPDecr;
class EIncr;
class EDecr;
class EUPlus;
class EUMinus;
class ENeg;
class ETimes;
class EDiv;
class EPlus;
class EMinus;
class ETwc;
class ELt;
class EGt;
class ELtEq;
class EGtEq;
class EEq;
class ENEq;
class EAnd;
class EOr;
class EAss;
class EAssadd;
class EAssSub;
class Type_bool;
class Type_int;
class TypeId;
class Type_string;
class ListDef;
class ListField;
class ListArgument;
class ListStatment;
class ListExpression;
class ListType;
class ListId;


/********************   Visitor Interfaces    ********************/
class Visitor
{
public:
  virtual ~Visitor() {}
  virtual void visitProgram(Program *p) = 0;
  virtual void visitDef(Def *p) = 0;
  virtual void visitField(Field *p) = 0;
  virtual void visitArgument(Argument *p) = 0;
  virtual void visitStatment(Statment *p) = 0;
  virtual void visitDeclaration(Declaration *p) = 0;
  virtual void visitConstDeclaration(ConstDeclaration *p) = 0;
  virtual void visitConstSpecification(ConstSpecification *p) = 0;
  virtual void visitVariableDeclaration(VariableDeclaration *p) = 0;
  virtual void visitVariableSpecification(VariableSpecification *p) = 0;
  virtual void visitSimpleStatment(SimpleStatment *p) = 0;
  virtual void visitShortVariableDeclaration(ShortVariableDeclaration *p) = 0;
  virtual void visitExpression(Expression *p) = 0;
  virtual void visitType(Type *p) = 0;
  virtual void visitPDefs(PDefs *p) = 0;
  virtual void visitDFun(DFun *p) = 0;
  virtual void visitDFunWithoutType(DFunWithoutType *p) = 0;
  virtual void visitDStruct(DStruct *p) = 0;
  virtual void visitDMethode(DMethode *p) = 0;
  virtual void visitDMethodeWithoutType(DMethodeWithoutType *p) = 0;
  virtual void visitDImport(DImport *p) = 0;
  virtual void visitDPackage(DPackage *p) = 0;
  virtual void visitFDeclaration(FDeclaration *p) = 0;
  virtual void visitAArgument(AArgument *p) = 0;
  virtual void visitSExprssion(SExprssion *p) = 0;
  virtual void visitSDeclaration(SDeclaration *p) = 0;
  virtual void visitSSimpleStatment(SSimpleStatment *p) = 0;
  virtual void visitSReturn(SReturn *p) = 0;
  virtual void visitSReturnV(SReturnV *p) = 0;
  virtual void visitSWhile(SWhile *p) = 0;
  virtual void visitSFor(SFor *p) = 0;
  virtual void visitSForSimple(SForSimple *p) = 0;
  virtual void visitSBlock(SBlock *p) = 0;
  virtual void visitSIf(SIf *p) = 0;
  virtual void visitSIfSimple(SIfSimple *p) = 0;
  virtual void visitSIfElse(SIfElse *p) = 0;
  virtual void visitSIfElseSimple(SIfElseSimple *p) = 0;
  virtual void visitDeclarationConstDeclaration(DeclarationConstDeclaration *p) = 0;
  virtual void visitDeclarationVariableDeclaration(DeclarationVariableDeclaration *p) = 0;
  virtual void visitDConstant(DConstant *p) = 0;
  virtual void visitConstSpecification1(ConstSpecification1 *p) = 0;
  virtual void visitConstSpecification2(ConstSpecification2 *p) = 0;
  virtual void visitDVariable(DVariable *p) = 0;
  virtual void visitVariableSpecification1(VariableSpecification1 *p) = 0;
  virtual void visitVariableSpecification2(VariableSpecification2 *p) = 0;
  virtual void visitVariableSpecification3(VariableSpecification3 *p) = 0;
  virtual void visitSimpleStatmentShortVariableDeclaration(SimpleStatmentShortVariableDeclaration *p) = 0;
  virtual void visitSDVar(SDVar *p) = 0;
  virtual void visitETrue(ETrue *p) = 0;
  virtual void visitEFalse(EFalse *p) = 0;
  virtual void visitEInt(EInt *p) = 0;
  virtual void visitEDouble(EDouble *p) = 0;
  virtual void visitEId(EId *p) = 0;
  virtual void visitEApp(EApp *p) = 0;
  virtual void visitEProj(EProj *p) = 0;
  virtual void visitFStatment(FStatment *p) = 0;
  virtual void visitFStatmentMethode(FStatmentMethode *p) = 0;
  virtual void visitEPIncr(EPIncr *p) = 0;
  virtual void visitEPDecr(EPDecr *p) = 0;
  virtual void visitEIncr(EIncr *p) = 0;
  virtual void visitEDecr(EDecr *p) = 0;
  virtual void visitEUPlus(EUPlus *p) = 0;
  virtual void visitEUMinus(EUMinus *p) = 0;
  virtual void visitENeg(ENeg *p) = 0;
  virtual void visitETimes(ETimes *p) = 0;
  virtual void visitEDiv(EDiv *p) = 0;
  virtual void visitEPlus(EPlus *p) = 0;
  virtual void visitEMinus(EMinus *p) = 0;
  virtual void visitETwc(ETwc *p) = 0;
  virtual void visitELt(ELt *p) = 0;
  virtual void visitEGt(EGt *p) = 0;
  virtual void visitELtEq(ELtEq *p) = 0;
  virtual void visitEGtEq(EGtEq *p) = 0;
  virtual void visitEEq(EEq *p) = 0;
  virtual void visitENEq(ENEq *p) = 0;
  virtual void visitEAnd(EAnd *p) = 0;
  virtual void visitEOr(EOr *p) = 0;
  virtual void visitEAss(EAss *p) = 0;
  virtual void visitEAssadd(EAssadd *p) = 0;
  virtual void visitEAssSub(EAssSub *p) = 0;
  virtual void visitType_bool(Type_bool *p) = 0;
  virtual void visitType_int(Type_int *p) = 0;
  virtual void visitTypeId(TypeId *p) = 0;
  virtual void visitType_string(Type_string *p) = 0;
  virtual void visitListDef(ListDef *p) = 0;
  virtual void visitListField(ListField *p) = 0;
  virtual void visitListArgument(ListArgument *p) = 0;
  virtual void visitListStatment(ListStatment *p) = 0;
  virtual void visitListExpression(ListExpression *p) = 0;
  virtual void visitListType(ListType *p) = 0;
  virtual void visitListId(ListId *p) = 0;


  virtual void visitInteger(Integer x) = 0;
  virtual void visitChar(Char x) = 0;
  virtual void visitDouble(Double x) = 0;
  virtual void visitString(String x) = 0;
  virtual void visitIdent(Ident x) = 0;
  virtual void visitId(Id x) = 0;

};


class Visitable
{
 public:
  virtual ~Visitable() {}
  virtual void accept(Visitor *v) = 0;
};


/********************   Abstract Syntax Classes    ********************/

class Program : public Visitable
{
public:
  virtual Program *clone() const = 0;

};

class Def : public Visitable
{
public:
  virtual Def *clone() const = 0;

};

class Field : public Visitable
{
public:
  virtual Field *clone() const = 0;

};

class Argument : public Visitable
{
public:
  virtual Argument *clone() const = 0;

};

class Statment : public Visitable
{
public:
  virtual Statment *clone() const = 0;

};

class Declaration : public Visitable
{
public:
  virtual Declaration *clone() const = 0;

};

class ConstDeclaration : public Visitable
{
public:
  virtual ConstDeclaration *clone() const = 0;

};

class ConstSpecification : public Visitable
{
public:
  virtual ConstSpecification *clone() const = 0;

};

class VariableDeclaration : public Visitable
{
public:
  virtual VariableDeclaration *clone() const = 0;

};

class VariableSpecification : public Visitable
{
public:
  virtual VariableSpecification *clone() const = 0;

};

class SimpleStatment : public Visitable
{
public:
  virtual SimpleStatment *clone() const = 0;

};

class ShortVariableDeclaration : public Visitable
{
public:
  virtual ShortVariableDeclaration *clone() const = 0;

};

class Expression : public Visitable
{
public:
  unique_ptr<Type> type; // type of the expression

  virtual Expression *clone() const = 0;

};

class Type : public Visitable
{
public:
  virtual Type *clone() const = 0;

};



class PDefs : public Program
{
public:
  ListDef *listdef_;

  PDefs(const PDefs &);
  PDefs &operator=(const PDefs &);
  PDefs(ListDef *p1);
  ~PDefs();
  virtual void accept(Visitor *v);
  virtual PDefs *clone() const;
  void swap(PDefs &);
};

class DFun : public Def
{
public:
  Id id_;
  ListArgument *listargument_;
  Type *type_;
  ListStatment *liststatment_;

  bool returnStatment = false; // true if there is a return statement in the function 
  
  DFun(const DFun &);
  DFun &operator=(const DFun &);
  DFun(Id p1, ListArgument *p2, Type *p3, ListStatment *p4);
  ~DFun();
  virtual void accept(Visitor *v);
  virtual DFun *clone() const;
  void swap(DFun &);
};

class DFunWithoutType : public Def
{
public:
  Id id_;
  ListArgument *listargument_;
  ListStatment *liststatment_;

  DFunWithoutType(const DFunWithoutType &);
  DFunWithoutType &operator=(const DFunWithoutType &);
  DFunWithoutType(Id p1, ListArgument *p2, ListStatment *p3);
  ~DFunWithoutType();
  virtual void accept(Visitor *v);
  virtual DFunWithoutType *clone() const;
  void swap(DFunWithoutType &);
};

class DStruct : public Def
{
public:
  Id id_;
  ListField *listfield_;

  DStruct(const DStruct &);
  DStruct &operator=(const DStruct &);
  DStruct(Id p1, ListField *p2);
  ~DStruct();
  virtual void accept(Visitor *v);
  virtual DStruct *clone() const;
  void swap(DStruct &);
};

class DMethode : public Def
{
public:
  Id id_1;
  Type *type_1;
  Id id_2;
  Argument *argument_;
  Type *type_2;
  ListStatment *liststatment_;

  DMethode(const DMethode &);
  DMethode &operator=(const DMethode &);
  DMethode(Id p1, Type *p2, Id p3, Argument *p4, Type *p5, ListStatment *p6);
  ~DMethode();
  virtual void accept(Visitor *v);
  virtual DMethode *clone() const;
  void swap(DMethode &);
};

class DMethodeWithoutType : public Def
{
public:
  Id id_1;
  Type *type_;
  Id id_2;
  Argument *argument_;
  ListStatment *liststatment_;

  DMethodeWithoutType(const DMethodeWithoutType &);
  DMethodeWithoutType &operator=(const DMethodeWithoutType &);
  DMethodeWithoutType(Id p1, Type *p2, Id p3, Argument *p4, ListStatment *p5);
  ~DMethodeWithoutType();
  virtual void accept(Visitor *v);
  virtual DMethodeWithoutType *clone() const;
  void swap(DMethodeWithoutType &);
};

class DImport : public Def
{
public:
  Library library_;

  DImport(const DImport &);
  DImport &operator=(const DImport &);
  DImport(Library p1);
  ~DImport();
  virtual void accept(Visitor *v);
  virtual DImport *clone() const;
  void swap(DImport &);
};

class DPackage : public Def
{
public:
  Id id_;

  DPackage(const DPackage &);
  DPackage &operator=(const DPackage &);
  DPackage(Id p1);
  ~DPackage();
  virtual void accept(Visitor *v);
  virtual DPackage *clone() const;
  void swap(DPackage &);
};

class FDeclaration : public Field
{
public:
  Id id_;
  Type *type_;

  FDeclaration(const FDeclaration &);
  FDeclaration &operator=(const FDeclaration &);
  FDeclaration(Id p1, Type *p2);
  ~FDeclaration();
  virtual void accept(Visitor *v);
  virtual FDeclaration *clone() const;
  void swap(FDeclaration &);
};

class FStatment : public Field
{
public:
  Id id_;

  FStatment(const FStatment &);
  FStatment &operator=(const FStatment &);
  FStatment(Id p1);
  ~FStatment();
  virtual void accept(Visitor *v);
  virtual FStatment *clone() const;
  void swap(FStatment &);
};

class FStatmentMethode : public Field
{
public:
  Id id_;
  ListExpression *listexpression_;

  FStatmentMethode(const FStatmentMethode &);
  FStatmentMethode &operator=(const FStatmentMethode &);
  FStatmentMethode(Id p1, ListExpression *p2);
  ~FStatmentMethode();
  virtual void accept(Visitor *v);
  virtual FStatmentMethode *clone() const;
  void swap(FStatmentMethode &);
};

class AArgument : public Argument
{
public:
  Id id_;
  Type *type_;

  AArgument(const AArgument &);
  AArgument &operator=(const AArgument &);
  AArgument(Id p1, Type *p2);
  ~AArgument();
  virtual void accept(Visitor *v);
  virtual AArgument *clone() const;
  void swap(AArgument &);
};

class SExprssion : public Statment
{
public:
  Expression *expression_;

  SExprssion(const SExprssion &);
  SExprssion &operator=(const SExprssion &);
  SExprssion(Expression *p1);
  ~SExprssion();
  virtual void accept(Visitor *v);
  virtual SExprssion *clone() const;
  void swap(SExprssion &);
};

class SDeclaration : public Statment
{
public:
  Declaration *declaration_;

  SDeclaration(const SDeclaration &);
  SDeclaration &operator=(const SDeclaration &);
  SDeclaration(Declaration *p1);
  ~SDeclaration();
  virtual void accept(Visitor *v);
  virtual SDeclaration *clone() const;
  void swap(SDeclaration &);
};

class SSimpleStatment : public Statment
{
public:
  SimpleStatment *simplestatment_;

  SSimpleStatment(const SSimpleStatment &);
  SSimpleStatment &operator=(const SSimpleStatment &);
  SSimpleStatment(SimpleStatment *p1);
  ~SSimpleStatment();
  virtual void accept(Visitor *v);
  virtual SSimpleStatment *clone() const;
  void swap(SSimpleStatment &);
};

class SReturn : public Statment
{
public:
  Expression *expression_;

  SReturn(const SReturn &);
  SReturn &operator=(const SReturn &);
  SReturn(Expression *p1);
  ~SReturn();
  virtual void accept(Visitor *v);
  virtual SReturn *clone() const;
  void swap(SReturn &);
};

class SReturnV : public Statment
{
public:

  SReturnV(const SReturnV &);
  SReturnV &operator=(const SReturnV &);
  SReturnV();
  ~SReturnV();
  virtual void accept(Visitor *v);
  virtual SReturnV *clone() const;
  void swap(SReturnV &);
};

class SWhile : public Statment
{
public:
  Expression *expression_;
  ListStatment *liststatment_;

  SWhile(const SWhile &);
  SWhile &operator=(const SWhile &);
  SWhile(Expression *p1, ListStatment *p2);
  ~SWhile();
  virtual void accept(Visitor *v);
  virtual SWhile *clone() const;
  void swap(SWhile &);
};

class SFor : public Statment
{
public:
  SimpleStatment *simplestatment_;
  Expression *expression_1;
  Expression *expression_2;
  ListStatment *liststatment_;

  SFor(const SFor &);
  SFor &operator=(const SFor &);
  SFor(SimpleStatment *p1, Expression *p2, Expression *p3, ListStatment *p4);
  ~SFor();
  virtual void accept(Visitor *v);
  virtual SFor *clone() const;
  void swap(SFor &);
};

class SForSimple : public Statment
{
public:
  Statment *statment_;
  ListStatment *liststatment_;

  SForSimple(const SForSimple &);
  SForSimple &operator=(const SForSimple &);
  SForSimple(Statment *p1, ListStatment *p2);
  ~SForSimple();
  virtual void accept(Visitor *v);
  virtual SForSimple *clone() const;
  void swap(SForSimple &);
};

class SBlock : public Statment
{
public:
  ListStatment *liststatment_;

  SBlock(const SBlock &);
  SBlock &operator=(const SBlock &);
  SBlock(ListStatment *p1);
  ~SBlock();
  virtual void accept(Visitor *v);
  virtual SBlock *clone() const;
  void swap(SBlock &);
};

class SIf : public Statment
{
public:
  Expression *expression_;
  ListStatment *liststatment_;

  SIf(const SIf &);
  SIf &operator=(const SIf &);
  SIf(Expression *p1, ListStatment *p2);
  ~SIf();
  virtual void accept(Visitor *v);
  virtual SIf *clone() const;
  void swap(SIf &);
};

class SIfSimple : public Statment
{
public:
  SimpleStatment *simplestatment_;
  Expression *expression_;
  ListStatment *liststatment_;

  SIfSimple(const SIfSimple &);
  SIfSimple &operator=(const SIfSimple &);
  SIfSimple(SimpleStatment *p1, Expression *p2, ListStatment *p3);
  ~SIfSimple();
  virtual void accept(Visitor *v);
  virtual SIfSimple *clone() const;
  void swap(SIfSimple &);
};

class SIfElse : public Statment
{
public:
  Expression *expression_;
  ListStatment *liststatment_1;
  ListStatment *liststatment_2;

  SIfElse(const SIfElse &);
  SIfElse &operator=(const SIfElse &);
  SIfElse(Expression *p1, ListStatment *p2, ListStatment *p3);
  ~SIfElse();
  virtual void accept(Visitor *v);
  virtual SIfElse *clone() const;
  void swap(SIfElse &);
};

class SIfElseSimple : public Statment
{
public:
  SimpleStatment *simplestatment_;
  Expression *expression_;
  ListStatment *liststatment_1;
  ListStatment *liststatment_2;

  SIfElseSimple(const SIfElseSimple &);
  SIfElseSimple &operator=(const SIfElseSimple &);
  SIfElseSimple(SimpleStatment *p1, Expression *p2, ListStatment *p3, ListStatment *p4);
  ~SIfElseSimple();
  virtual void accept(Visitor *v);
  virtual SIfElseSimple *clone() const;
  void swap(SIfElseSimple &);
};

class DeclarationConstDeclaration : public Declaration
{
public:
  ConstDeclaration *constdeclaration_;

  DeclarationConstDeclaration(const DeclarationConstDeclaration &);
  DeclarationConstDeclaration &operator=(const DeclarationConstDeclaration &);
  DeclarationConstDeclaration(ConstDeclaration *p1);
  ~DeclarationConstDeclaration();
  virtual void accept(Visitor *v);
  virtual DeclarationConstDeclaration *clone() const;
  void swap(DeclarationConstDeclaration &);
};

class DeclarationVariableDeclaration : public Declaration
{
public:
  VariableDeclaration *variabledeclaration_;

  DeclarationVariableDeclaration(const DeclarationVariableDeclaration &);
  DeclarationVariableDeclaration &operator=(const DeclarationVariableDeclaration &);
  DeclarationVariableDeclaration(VariableDeclaration *p1);
  ~DeclarationVariableDeclaration();
  virtual void accept(Visitor *v);
  virtual DeclarationVariableDeclaration *clone() const;
  void swap(DeclarationVariableDeclaration &);
};

class DConstant : public ConstDeclaration
{
public:
  ConstSpecification *constspecification_;

  DConstant(const DConstant &);
  DConstant &operator=(const DConstant &);
  DConstant(ConstSpecification *p1);
  ~DConstant();
  virtual void accept(Visitor *v);
  virtual DConstant *clone() const;
  void swap(DConstant &);
};

class ConstSpecification1 : public ConstSpecification
{
public:
  ListId *listid_;
  ListExpression *listexpression_;

  ConstSpecification1(const ConstSpecification1 &);
  ConstSpecification1 &operator=(const ConstSpecification1 &);
  ConstSpecification1(ListId *p1, ListExpression *p2);
  ~ConstSpecification1();
  virtual void accept(Visitor *v);
  virtual ConstSpecification1 *clone() const;
  void swap(ConstSpecification1 &);
};

class ConstSpecification2 : public ConstSpecification
{
public:
  ListId *listid_;
  Type *type_;
  ListExpression *listexpression_;

  ConstSpecification2(const ConstSpecification2 &);
  ConstSpecification2 &operator=(const ConstSpecification2 &);
  ConstSpecification2(ListId *p1, Type *p2, ListExpression *p3);
  ~ConstSpecification2();
  virtual void accept(Visitor *v);
  virtual ConstSpecification2 *clone() const;
  void swap(ConstSpecification2 &);
};

class DVariable : public VariableDeclaration
{
public:
  VariableSpecification *variablespecification_;

  DVariable(const DVariable &);
  DVariable &operator=(const DVariable &);
  DVariable(VariableSpecification *p1);
  ~DVariable();
  virtual void accept(Visitor *v);
  virtual DVariable *clone() const;
  void swap(DVariable &);
};

class VariableSpecification1 : public VariableSpecification
{
public:
  ListId *listid_;
  Type *type_;

  VariableSpecification1(const VariableSpecification1 &);
  VariableSpecification1 &operator=(const VariableSpecification1 &);
  VariableSpecification1(ListId *p1, Type *p2);
  ~VariableSpecification1();
  virtual void accept(Visitor *v);
  virtual VariableSpecification1 *clone() const;
  void swap(VariableSpecification1 &);
};

class VariableSpecification2 : public VariableSpecification
{
public:
  ListId *listid_;
  Type *type_;
  ListExpression *listexpression_;

  VariableSpecification2(const VariableSpecification2 &);
  VariableSpecification2 &operator=(const VariableSpecification2 &);
  VariableSpecification2(ListId *p1, Type *p2, ListExpression *p3);
  ~VariableSpecification2();
  virtual void accept(Visitor *v);
  virtual VariableSpecification2 *clone() const;
  void swap(VariableSpecification2 &);
};

class VariableSpecification3 : public VariableSpecification
{
public:
  ListId *listid_;
  ListExpression *listexpression_;

  VariableSpecification3(const VariableSpecification3 &);
  VariableSpecification3 &operator=(const VariableSpecification3 &);
  VariableSpecification3(ListId *p1, ListExpression *p2);
  ~VariableSpecification3();
  virtual void accept(Visitor *v);
  virtual VariableSpecification3 *clone() const;
  void swap(VariableSpecification3 &);
};

class SimpleStatmentShortVariableDeclaration : public SimpleStatment
{
public:
  ShortVariableDeclaration *shortvariabledeclaration_;

  SimpleStatmentShortVariableDeclaration(const SimpleStatmentShortVariableDeclaration &);
  SimpleStatmentShortVariableDeclaration &operator=(const SimpleStatmentShortVariableDeclaration &);
  SimpleStatmentShortVariableDeclaration(ShortVariableDeclaration *p1);
  ~SimpleStatmentShortVariableDeclaration();
  virtual void accept(Visitor *v);
  virtual SimpleStatmentShortVariableDeclaration *clone() const;
  void swap(SimpleStatmentShortVariableDeclaration &);
};

class SDVar : public ShortVariableDeclaration
{
public:
  ListId *listid_;
  ListExpression *listexpression_;

  SDVar(const SDVar &);
  SDVar &operator=(const SDVar &);
  SDVar(ListId *p1, ListExpression *p2);
  ~SDVar();
  virtual void accept(Visitor *v);
  virtual SDVar *clone() const;
  void swap(SDVar &);
};

class ETrue : public Expression
{
public:

  ETrue(const ETrue &);
  ETrue &operator=(const ETrue &);
  ETrue();
  ~ETrue();
  virtual void accept(Visitor *v);
  virtual ETrue *clone() const;
  void swap(ETrue &);
};

class EFalse : public Expression
{
public:

  EFalse(const EFalse &);
  EFalse &operator=(const EFalse &);
  EFalse();
  ~EFalse();
  virtual void accept(Visitor *v);
  virtual EFalse *clone() const;
  void swap(EFalse &);
};

class EInt : public Expression
{
public:
  Integer integer_;

  EInt(const EInt &);
  EInt &operator=(const EInt &);
  EInt(Integer p1);
  ~EInt();
  virtual void accept(Visitor *v);
  virtual EInt *clone() const;
  void swap(EInt &);
};

class EDouble : public Expression
{
public:
  Double double_;

  EDouble(const EDouble &);
  EDouble &operator=(const EDouble &);
  EDouble(Double p1);
  ~EDouble();
  virtual void accept(Visitor *v);
  virtual EDouble *clone() const;
  void swap(EDouble &);
};

class EId : public Expression
{
public:
  Id id_;

  EId(const EId &);
  EId &operator=(const EId &);
  EId(Id p1);
  ~EId();
  virtual void accept(Visitor *v);
  virtual EId *clone() const;
  void swap(EId &);
};

class EApp : public Expression
{
public:
  Id id_;
  ListExpression *listexpression_;

  EApp(const EApp &);
  EApp &operator=(const EApp &);
  EApp(Id p1, ListExpression *p2);
  ~EApp();
  virtual void accept(Visitor *v);
  virtual EApp *clone() const;
  void swap(EApp &);
};

class EProj : public Expression
{
public:
  Expression *expression_;
  Field *field_;

  EProj(const EProj &);
  EProj &operator=(const EProj &);
  EProj(Expression *p1, Field *p2);
  ~EProj();
  virtual void accept(Visitor *v);
  virtual EProj *clone() const;
  void swap(EProj &);
};

class EPIncr : public Expression
{
public:
  Expression *expression_;

  EPIncr(const EPIncr &);
  EPIncr &operator=(const EPIncr &);
  EPIncr(Expression *p1);
  ~EPIncr();
  virtual void accept(Visitor *v);
  virtual EPIncr *clone() const;
  void swap(EPIncr &);
};

class EPDecr : public Expression
{
public:
  Expression *expression_;

  EPDecr(const EPDecr &);
  EPDecr &operator=(const EPDecr &);
  EPDecr(Expression *p1);
  ~EPDecr();
  virtual void accept(Visitor *v);
  virtual EPDecr *clone() const;
  void swap(EPDecr &);
};

class EIncr : public Expression
{
public:
  Expression *expression_;

  EIncr(const EIncr &);
  EIncr &operator=(const EIncr &);
  EIncr(Expression *p1);
  ~EIncr();
  virtual void accept(Visitor *v);
  virtual EIncr *clone() const;
  void swap(EIncr &);
};

class EDecr : public Expression
{
public:
  Expression *expression_;

  EDecr(const EDecr &);
  EDecr &operator=(const EDecr &);
  EDecr(Expression *p1);
  ~EDecr();
  virtual void accept(Visitor *v);
  virtual EDecr *clone() const;
  void swap(EDecr &);
};

class EUPlus : public Expression
{
public:
  Expression *expression_;

  EUPlus(const EUPlus &);
  EUPlus &operator=(const EUPlus &);
  EUPlus(Expression *p1);
  ~EUPlus();
  virtual void accept(Visitor *v);
  virtual EUPlus *clone() const;
  void swap(EUPlus &);
};

class EUMinus : public Expression
{
public:
  Expression *expression_;

  EUMinus(const EUMinus &);
  EUMinus &operator=(const EUMinus &);
  EUMinus(Expression *p1);
  ~EUMinus();
  virtual void accept(Visitor *v);
  virtual EUMinus *clone() const;
  void swap(EUMinus &);
};

class ENeg : public Expression
{
public:
  Expression *expression_;

  ENeg(const ENeg &);
  ENeg &operator=(const ENeg &);
  ENeg(Expression *p1);
  ~ENeg();
  virtual void accept(Visitor *v);
  virtual ENeg *clone() const;
  void swap(ENeg &);
};

class ETimes : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  ETimes(const ETimes &);
  ETimes &operator=(const ETimes &);
  ETimes(Expression *p1, Expression *p2);
  ~ETimes();
  virtual void accept(Visitor *v);
  virtual ETimes *clone() const;
  void swap(ETimes &);
};

class EDiv : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EDiv(const EDiv &);
  EDiv &operator=(const EDiv &);
  EDiv(Expression *p1, Expression *p2);
  ~EDiv();
  virtual void accept(Visitor *v);
  virtual EDiv *clone() const;
  void swap(EDiv &);
};

class EPlus : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EPlus(const EPlus &);
  EPlus &operator=(const EPlus &);
  EPlus(Expression *p1, Expression *p2);
  ~EPlus();
  virtual void accept(Visitor *v);
  virtual EPlus *clone() const;
  void swap(EPlus &);
};

class EMinus : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EMinus(const EMinus &);
  EMinus &operator=(const EMinus &);
  EMinus(Expression *p1, Expression *p2);
  ~EMinus();
  virtual void accept(Visitor *v);
  virtual EMinus *clone() const;
  void swap(EMinus &);
};

class ETwc : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  ETwc(const ETwc &);
  ETwc &operator=(const ETwc &);
  ETwc(Expression *p1, Expression *p2);
  ~ETwc();
  virtual void accept(Visitor *v);
  virtual ETwc *clone() const;
  void swap(ETwc &);
};

class ELt : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  ELt(const ELt &);
  ELt &operator=(const ELt &);
  ELt(Expression *p1, Expression *p2);
  ~ELt();
  virtual void accept(Visitor *v);
  virtual ELt *clone() const;
  void swap(ELt &);
};

class EGt : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EGt(const EGt &);
  EGt &operator=(const EGt &);
  EGt(Expression *p1, Expression *p2);
  ~EGt();
  virtual void accept(Visitor *v);
  virtual EGt *clone() const;
  void swap(EGt &);
};

class ELtEq : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  ELtEq(const ELtEq &);
  ELtEq &operator=(const ELtEq &);
  ELtEq(Expression *p1, Expression *p2);
  ~ELtEq();
  virtual void accept(Visitor *v);
  virtual ELtEq *clone() const;
  void swap(ELtEq &);
};

class EGtEq : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EGtEq(const EGtEq &);
  EGtEq &operator=(const EGtEq &);
  EGtEq(Expression *p1, Expression *p2);
  ~EGtEq();
  virtual void accept(Visitor *v);
  virtual EGtEq *clone() const;
  void swap(EGtEq &);
};

class EEq : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EEq(const EEq &);
  EEq &operator=(const EEq &);
  EEq(Expression *p1, Expression *p2);
  ~EEq();
  virtual void accept(Visitor *v);
  virtual EEq *clone() const;
  void swap(EEq &);
};

class ENEq : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  ENEq(const ENEq &);
  ENEq &operator=(const ENEq &);
  ENEq(Expression *p1, Expression *p2);
  ~ENEq();
  virtual void accept(Visitor *v);
  virtual ENEq *clone() const;
  void swap(ENEq &);
};

class EAnd : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EAnd(const EAnd &);
  EAnd &operator=(const EAnd &);
  EAnd(Expression *p1, Expression *p2);
  ~EAnd();
  virtual void accept(Visitor *v);
  virtual EAnd *clone() const;
  void swap(EAnd &);
};

class EOr : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EOr(const EOr &);
  EOr &operator=(const EOr &);
  EOr(Expression *p1, Expression *p2);
  ~EOr();
  virtual void accept(Visitor *v);
  virtual EOr *clone() const;
  void swap(EOr &);
};

class EAss : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EAss(const EAss &);
  EAss &operator=(const EAss &);
  EAss(Expression *p1, Expression *p2);
  ~EAss();
  virtual void accept(Visitor *v);
  virtual EAss *clone() const;
  void swap(EAss &);
};

class EAssadd : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EAssadd(const EAssadd &);
  EAssadd &operator=(const EAssadd &);
  EAssadd(Expression *p1, Expression *p2);
  ~EAssadd();
  virtual void accept(Visitor *v);
  virtual EAssadd *clone() const;
  void swap(EAssadd &);
};

class EAssSub : public Expression
{
public:
  Expression *expression_1;
  Expression *expression_2;

  EAssSub(const EAssSub &);
  EAssSub &operator=(const EAssSub &);
  EAssSub(Expression *p1, Expression *p2);
  ~EAssSub();
  virtual void accept(Visitor *v);
  virtual EAssSub *clone() const;
  void swap(EAssSub &);
};

class Type_bool : public Type
{
public:

  Type_bool(const Type_bool &);
  Type_bool &operator=(const Type_bool &);
  Type_bool();
  ~Type_bool();
  virtual void accept(Visitor *v);
  virtual Type_bool *clone() const;
  void swap(Type_bool &);
};

class Type_int : public Type
{
public:

  Type_int(const Type_int &);
  Type_int &operator=(const Type_int &);
  Type_int();
  ~Type_int();
  virtual void accept(Visitor *v);
  virtual Type_int *clone() const;
  void swap(Type_int &);
};

class TypeId : public Type
{
public:
  Id id_;

  TypeId(const TypeId &);
  TypeId &operator=(const TypeId &);
  TypeId(Id p1);
  ~TypeId();
  virtual void accept(Visitor *v);
  virtual TypeId *clone() const;
  void swap(TypeId &);
};

class Type_string : public Type
{
public:

  Type_string(const Type_string &);
  Type_string &operator=(const Type_string &);
  Type_string();
  ~Type_string();
  virtual void accept(Visitor *v);
  virtual Type_string *clone() const;
  void swap(Type_string &);
};



class ListDef : public Visitable, public std::vector<Def*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListDef *clone() const;
};

ListDef* consListDef(Def* x, ListDef* xs);

class ListField : public Visitable, public std::vector<Field*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListField *clone() const;
};

ListField* consListField(Field* x, ListField* xs);

class ListArgument : public Visitable, public std::vector<Argument*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListArgument *clone() const;
};

ListArgument* consListArgument(Argument* x, ListArgument* xs);

class ListStatment : public Visitable, public std::vector<Statment*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListStatment *clone() const;
};

ListStatment* consListStatment(Statment* x, ListStatment* xs);

class ListExpression : public Visitable, public std::vector<Expression*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListExpression *clone() const;
};

ListExpression* consListExpression(Expression* x, ListExpression* xs);

class ListType : public Visitable, public std::vector<Type*>
{
public:
  virtual void accept(Visitor *v);
  virtual ListType *clone() const;
};

ListType* consListType(Type* x, ListType* xs);

class ListId : public Visitable, public std::vector<Id>
{
public:
  virtual void accept(Visitor *v);
  virtual ListId *clone() const;
};

ListId* consListId(Id x, ListId* xs);





#endif
