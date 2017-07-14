#ifndef MAINLIB_LIBRARY_H
#define MAINLIB_LIBRARY_H

#include <iostream>

#include "hellomodule.hh"

void hello(Hello* helloin){
    helloin->sayhello();
}

#endif