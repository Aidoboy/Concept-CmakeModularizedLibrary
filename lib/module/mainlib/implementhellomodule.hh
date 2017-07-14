//
// Created by aidan on 7/13/17.
//

#ifndef INCLUDETEST_IMPLEMENTHELLOMODULE_HH
#define INCLUDETEST_IMPLEMENTHELLOMODULE_HH

#include <iostream>

#include <mainlib/hellomodule.hh>

class HelloMod : public Hello {
public:
    // pure virtual function
    virtual void sayhello(){
        std::cout << "Hello, World!" << std::endl;
    }
};

#endif //INCLUDETEST_IMPLEMENTHELLOMODULE_HH
