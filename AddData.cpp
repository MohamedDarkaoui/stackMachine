//
// Created by mohamed on 9/6/21.
//

#include "AddData.h"

using namespace sm;

template<typename T>
std::string AddData<T>::retrieveInfo() const {
    return "AddData()";
}

template<typename T>
void AddData<T>::execute(std::stack<data_t<T>>& dataStack) {

    if (dataStack.size() < 2)
        throw std::runtime_error("Not enough elements in the stack to perform addition\n");

    data_t<T> data1 = std::move(dataStack.top());
    dataStack.pop();
    data_t<T> data2 (std::move(dataStack.top()));
    dataStack.pop();

    Data<T> result = *data1 + *data2;

    dataStack.push(std::make_unique<Data<T>>(result.getData()));
}
