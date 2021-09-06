//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_PROGRAM_H
#define STACKMACHINE_PROGRAM_H

#include <vector>
#include "Instruction.h"

namespace sm {

template<unsigned int MAX, typename T>
class Program {

private:
    std::vector<instruction_t<T>> instructions;


public:
    /**
     * operator << overloading to add an instruction
     * @return
     */
    Program& operator<<(instruction_t<T>);

    /**
     * operator [] overloading
     * @param i index
     * @return instructions[i]
     */
    instruction_t<T>& operator[] (unsigned int i);

    /**
     * simple getter
     * @return instructions
     */
    const std::vector<instruction_t<T>> &getInstructions() const;
};


}


#endif //STACKMACHINE_PROGRAM_H
