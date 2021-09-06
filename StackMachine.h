//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_STACKMACHINE_H
#define STACKMACHINE_STACKMACHINE_H

#include <stack>
#include "Data.h"
#include "Program.h"
#include <iostream>

namespace sm {

template <unsigned int MAX, typename T>
class StackMachine {
private:
    std::stack<data_t<T>> data_stack;

public:

    /**
     * run the stack machine
     * @param prog the program to run
     */
    void run(Program<MAX,T>& prog){
        for(unsigned int i = 0; i < MAX; i++){
            prog[i]->execute(data_stack);
            std::cout<<"I = "<< i << " instruction : " << *prog[i] << "\n";
        }
    }
};


}


#endif //STACKMACHINE_STACKMACHINE_H
