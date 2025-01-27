#include "containers/sequence.h"
#include <iostream>

void moderncpp::SequenceContainers::useIntVector(std::vector<int>vec){
	
	for(int i=1;i<100;++i){
		
		vec.push_back(i);
	}
	
	for(int i=0;i<vec.size();++i){
		
		std::cout<<"element:"<<vec[i]<<std::endl;
	}
	
}