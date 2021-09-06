//
// Created by mohamed on 9/6/21.
//

#ifndef STACKMACHINE_DATA_H
#define STACKMACHINE_DATA_H

#include <memory>

namespace sm {

template<typename T>
class Data {

private:
    T data;

public:
    /**
     * simple constructor
     * @param data
     */
    explicit Data(T data) : data(data) {}

    /**
     * simple getter
     * @return data
     */
    T getData() const {return data;}

    Data operator+(const Data<T>& other){
        T d = data + other.data;
        Data<T> returnData(d);
        return returnData;
    }

    Data operator-(const Data<T>& other){
        T d = data - other.data;
        Data<T> returnData(d);
        return returnData;
    }

    Data operator*(const Data<T>& other){
        T d = data * other.data;
        Data<T> returnData(d);
        return returnData;
    }

    Data operator/(const Data<T>& other){
        T d = data / other.data;
        Data<T> returnData(d);
        return returnData;
    }
};

template<typename T> using data_t = std::unique_ptr<Data<T>>;
}

#endif //STACKMACHINE_DATA_H
