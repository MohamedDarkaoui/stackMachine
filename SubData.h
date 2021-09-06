//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_SUBDATA_H
#define STACKMACHINE_SUBDATA_H

#include "Instruction.h"

namespace sm {
template<typename T>
class SubData : public Instruction<T> {

public:
    /**
     * default destructor
     */
    ~SubData() override = default;

    /**
     * retrieve information
     * @return "SubData()"
     */
    std::string retrieveInfo() const override;

    /**
     * execute the sub instruction
     */
    void execute(std::stack<data_t<T>>&) override;
};



}

#endif //STACKMACHINE_SUBDATA_H
