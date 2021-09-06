//
// Created by mohamed on 9/6/21.
//

#include "PrintData.h"

using namespace sm;

template<typename T>
std::string PrintData<T>::retrieveInfo() const {
    return "PrintData()";
}

template<typename T>
void PrintData<T>::execute(std::stack<data_t<T>>& dataStack) {
    std::cout<< dataStack.top()->getData() << "\n";
}

