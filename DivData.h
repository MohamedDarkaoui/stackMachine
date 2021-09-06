//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_DIVDATA_H
#define STACKMACHINE_DIVDATA_H


#include "Instruction.h"
namespace sm {

template<typename T>
class DivData : public Instruction<T>{

public:
    /**
     * default destructor
     */
    ~DivData() override = default;

    /**
     * get info
     * @return info
     */
    std::string retrieveInfo() const override;

    /**
     * execute the div instruction
     */
    void execute(std::stack<data_t<T>>&) override;
};


}


#endif //STACKMACHINE_DIVDATA_H
