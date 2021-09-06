//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_INSTRUCTION_H
#define STACKMACHINE_INSTRUCTION_H

#include <string>
#include <stdexcept>
#include <memory>
#include <stack>
#include "Data.h"

namespace sm {

template<typename T>
class Instruction {

public:

    /**
     * simple virtual default destructor
     */
    virtual ~Instruction() = default;

    /**
     * @return what kind of instruction it is
     */
    virtual std::string retrieveInfo() const = 0;

    /**
     * executes the instruction
     */
    virtual void execute(std::stack<data_t<T>>&) = 0;
};

/**
 * overload operator << for printing information about the instruction
 * @param out
 * @param instruction
 * @return out
 */
template<typename T>
std::ostream& operator<<(std::ostream &out, const Instruction<T> &instruction){
    out<<instruction.retrieveInfo();
    return out;
}

template<typename T> using instruction_t = std::unique_ptr<Instruction<T>>;
}

#endif //STACKMACHINE_INSTRUCTION_H