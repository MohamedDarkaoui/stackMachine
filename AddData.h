//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_ADDDATA_H
#define STACKMACHINE_ADDDATA_H

#include "Instruction.h"
namespace sm {

template<typename T>
class AddData : public Instruction<T>{

public:
    /**
     * default destructor
     */
    ~AddData() override = default;

    /**
     * get info
     * @return info
     */
    std::string retrieveInfo() const override;

    /**
     * execute the add instruction
     */
    void execute(std::stack<data_t<T>>&) override;
};
}

#endif //STACKMACHINE_ADDDATA_H
