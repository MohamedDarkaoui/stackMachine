//
// Created by mohamed on 9/6/21.
//

#include "EndProgram.h"

using namespace sm;

template<typename T>
std::string EndProgram<T>::retrieveInfo() const {
    return "EndProgram()";
}

template<typename T>
void EndProgram<T>::execute(std::stack<data_t<T>> &) {
    exit(0);
}
