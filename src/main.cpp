#include "cxx11.h"
#include "polymorphism.h"
#include "containers/sequence.h"

#include <iostream>
#include <memory>
#include <vector>
using namespace moderncpp;


int main(){
	
	auto c11=std::make_unique<C11Features>();
	
	c11->useEnumClass();
	c11->useRangeForLoop();
    c11->useLambdaExpression();
    c11->useThreads();
    c11->useAsync();
    std::cout<<"im a main thread"<<std::endl;
    c11->useRegex();
	
    auto base=std::make_unique<Base>();
    
    base->show();
    
    auto derived=std::make_unique<Derived>();
    
    derived->show();
	
	/*** Sequence containers ***/
    /** 1. Vector **/
	auto seq_container=std::make_unique<SequenceContainers>();
	
	
	std::vector<int>int_vec;
	
	seq_container->useIntVector(int_vec);
	
	
}