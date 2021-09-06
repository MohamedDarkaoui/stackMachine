//
// Created by mohamed on 9/6/21.
//

#include "Program.h"
using namespace sm;


template<unsigned int MAX, typename T>
Program<MAX, T>& Program<MAX, T>::operator<<(instruction_t<T> instruction) {
    if (instructions.size() == MAX)
        throw std::length_error("Too many instructions.\n");

    instructions.push_back(std::move(instruction));
    return *this;
}

template<unsigned int MAX, typename T>
instruction_t<T> &Program<MAX, T>::operator[](unsigned int i) {
    if (i>= instructions.size())
        throw std::length_error("weed");
    return instructions[i];
}

template<unsigned int MAX, typename T>
const std::vector<instruction_t<T>> &Program<MAX, T>::getInstructions() const {
    return instructions;
}
