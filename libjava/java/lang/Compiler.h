
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Compiler__
#define __java_lang_Compiler__

#pragma interface

#include <java/lang/Object.h>

class java::lang::Compiler : public ::java::lang::Object
{

  Compiler();
public:
  static jboolean compileClass(::java::lang::Class *);
  static jboolean compileClasses(::java::lang::String *);
  static ::java::lang::Object * command(::java::lang::Object *);
  static void enable();
  static void disable();
  static ::java::lang::Class class$;
};

#endif // __java_lang_Compiler__
