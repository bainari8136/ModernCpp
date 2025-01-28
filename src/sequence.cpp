#include "containers/sequence.h"
#include "utils/container_utils.h"

#include <iostream>

void moderncpp::SequenceContainers::useIntVector(std::vector<int>&vec){
	
	for(int i=1;i<100;++i){
		
		vec.push_back(i);
	}
	
	ContainerUtils::printVector(vec);
	
}