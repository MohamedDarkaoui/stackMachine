//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_PUSHDATA_H
#define STACKMACHINE_PUSHDATA_H


#include "Instruction.h"
#include "Data.h"

namespace sm {

template<typename T>
class PushData : public Instruction<T>{

private:
    data_t<T> data;

public:
    /**
     * simple constructor
     * @param data
     */
    explicit PushData(data_t<T> data);

    /**
     * default constructor
     */
    ~PushData() override = default;

    /**
     * @return information about the instruction
     */
    std::string retrieveInfo() const;

    void execute(std::stack<data_t<T>>& dataStack) override;
};
}
#endif //STACKMACHINE_PUSHDATA_H
