
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenNamedProperty$UnicodeCategoriesHandler__
#define __gnu_java_util_regex_RETokenNamedProperty$UnicodeCategoriesHandler__

#pragma interface

#include <gnu/java/util/regex/RETokenNamedProperty$Handler.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace regex
        {
            class RETokenNamedProperty$UnicodeCategoriesHandler;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenNamedProperty$UnicodeCategoriesHandler : public ::gnu::java::util::regex::RETokenNamedProperty$Handler
{

public:
  RETokenNamedProperty$UnicodeCategoriesHandler(JArray< jbyte > *);
  virtual jboolean includes(jchar);
private:
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::gnu::java::util::regex::RETokenNamedProperty$Handler)))) categories;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenNamedProperty$UnicodeCategoriesHandler__
