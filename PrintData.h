//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_PRINTDATA_H
#define STACKMACHINE_PRINTDATA_H

#include "Instruction.h"
#include <iostream>

namespace sm {

template<typename T>
class PrintData : public Instruction<T> {

public:
    /**
    * default destructor
    */
    ~PrintData() override = default;

    /**
     * get info
     * @return info
     */
    std::string retrieveInfo() const override;

    /**
     * execute the print instruction
     */
    void execute(std::stack<data_t<T>>&) override;
};

template<>
class PrintData<int> : public Instruction<int> {

public:
    /**
    * default destructor
    */
    ~PrintData() override = default;

    /**
     * get info
     * @return info
     */
    std::string retrieveInfo() const override;

    /**
     * execute the print instruction
     */
    void execute(std::stack<data_t<int>>& dataStack) override{
        std::cout<< dataStack.top()->getData() << " (=int)"<< "\n";
    };
};

template<>
class PrintData<double> : public Instruction<double> {

public:
    /**
    * default destructor
    */
    ~PrintData() override = default;

    /**
     * get info
     * @return info
     */
    std::string retrieveInfo() const override;

    /**
     * execute the print instruction
     */
    void execute(std::stack<data_t<double>>& dataStack) override{
        std::cout<< dataStack.top()->getData() << " (=double)"<< "\n";
    };
};

}


#endif //STACKMACHINE_PRINTDATA_H
