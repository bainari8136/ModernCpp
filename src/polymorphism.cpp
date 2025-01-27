#include <iostream>
#include "polymorphism.h"

void moderncpp::Base::show(){
	
	std::cout<<"this is a method from base class"<<std::endl;
}

void moderncpp::Derived::show() {
	
	std::cout<<"this is a method from child class"<<std::endl;
}