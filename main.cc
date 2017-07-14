#include <iostream>

#include <mainlib/library.hh>
#include <mainlib/implementhellomodule.hh>

int main() {
    Hello* helloobj = new HelloMod();
    hello(helloobj);
    delete helloobj;
    return 0;
}