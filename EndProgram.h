//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_ENDPROGRAM_H
#define STACKMACHINE_ENDPROGRAM_H

#include "Instruction.h"
namespace sm {

template<typename T>
class EndProgram : public Instruction<T>{

public:
    /**
    * default destructor
    */
    ~EndProgram() override = default;

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


}


#endif //STACKMACHINE_ENDPROGRAM_H
