// Copyright (C) 2004-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <set>
#include <testsuite_hooks.h>

// libstdc++/17948
void test01()
{
  bool test __attribute__((unused)) = true;
  using namespace std;

  typedef set<int>::size_type size_type;

  set<int> s;
    
  s.insert(2);
  s.insert(3);

  size_type x = s.erase(3);

  VERIFY( s.size() == 1 );
  VERIFY( x == 1 );
}

int main ()
{
  test01();
  return 0;
}
