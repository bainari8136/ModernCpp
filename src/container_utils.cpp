#include "utils/container_utils.h"


#include <iomanip>
#include <iostream>
#include <vector>

void moderncpp::ContainerUtils::printVector(const std::vector<int>&vec){
	
	// Print the top border
    std::cout << "+----------+----------+" << std::endl;
    std::cout << "| Index    | Value    |" << std::endl;
    std::cout << "+----------+----------+" << std::endl;

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "| " << std::left << std::setw(8) << i << " | " << std::setw(8) << vec[i] << " |" << std::endl;
    }

    // Print the bottom border
    std::cout << "+----------+----------+" << std::endl;
}