#include <iostream>
#include <iomanip>
#include <cassert>

int main() {
    assert (2 == 1 + 1);
    // bool
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and true) != false);
    // double
    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);

  // Unsigned
    assert(1!=0.5+0.5);
    assert(2==1+1);
    assert(10!=5+6);
    assert(20==20);

    //Char
    assert('a'=='a');
    assert('a'!='b');
    assert("hello"=="hello");

    ///Existen mas tipos de datos,short, int , long , double , float.

    //Long
    assert(2000==3000-2000);
    assert(1000<2000);
}
