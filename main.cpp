#include <iostream>
#include "PushData.cpp"
#include "Program.cpp"
#include "SubData.cpp"
#include "MulData.cpp"
#include "AddData.cpp"
#include "PrintData.cpp"
#include "EndProgram.cpp"
#include "StackMachine.cpp"


int main() {
    using namespace sm;
    const int MAX_SIZE = 10;
    Program < MAX_SIZE , float > prog ;
    data_t<float> d ( std :: make_unique <Data <float > >(3.0));
    prog << std :: make_unique < PushData <float > >( std::move(d))
         << std :: make_unique < PushData <float > >( std :: make_unique <Data <float > >(3.2))
         << std :: make_unique < SubData <float > >()
         << std :: make_unique < PushData <float > >( std :: make_unique <Data <float > >(1.7))
         << std :: make_unique < MulData <float > >()
         << std :: make_unique < PushData <float > >( std :: make_unique <Data <float > >(2.0))
         << std :: make_unique < AddData <float > >()
         << std :: make_unique < PrintData <float > >()
         << std :: make_unique < EndProgram <float > >();

    StackMachine < MAX_SIZE , float > machine ;
    machine.run( prog );

}
