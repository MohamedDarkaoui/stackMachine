//
// Created by mohamed on 9/6/21.
//

#include "PushData.h"

namespace sm {

template<typename T>
PushData<T>::PushData(data_t<T> data) : data(std::move(data)) {}

template<typename T>
std::string PushData<T>::retrieveInfo() const{
    return "PushData()";
}

template<typename T>
void PushData<T>::execute(std::stack<data_t<T>> &dataStack) {
    dataStack.push(std::move(data));
    data = nullptr;
}

}