//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_MULDATA_H
#define STACKMACHINE_MULDATA_H

#include "Instruction.h"

namespace sm {
template<typename T>
class MulData : public sm::Instruction<T> {
public:
    /**
     * default destructor
     */
    ~MulData() override = default;

    /**
     * get info
     * @return info
     */
    std::string retrieveInfo() const override;

    /**
     * execute the mul instruction
     */
    void execute(std::stack<data_t<T>>&) override;
};


}


#endif //STACKMACHINE_MULDATA_H
