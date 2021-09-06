//
// Created by mohamed on 9/6/21.
//

#include "SubData.h"
using namespace sm;

template<typename T>
std::string SubData<T>::retrieveInfo() const {
    return "SubData()";
}

template<typename T>
void SubData<T>::execute(std::stack<data_t<T>>& dataStack) {

    if (dataStack.size() < 2)
        throw std::runtime_error("Not enough elements in the stack to perform subtraction\n");

    data_t<T> data1 = std::move(dataStack.top());
    dataStack.pop();
    data_t<T> data2 (std::move(dataStack.top()));
    dataStack.pop();

    Data<T> result = *data2 - *data1;

    dataStack.push(std::make_unique<Data<T>>(result.getData()));
}
