#include <chrono>
#include <future>
#include <iostream>
#include <regex>
#include <thread>
#include <vector>
#include "cxx11.h"

void moderncpp::C11Features::useEnumClass() {
	
	enum class Color {Red,Blue,Green};
	
	Color c=Color::Red;
	
	
	std::cout<<static_cast<int>(c)<<std::endl;
	
	
}

void moderncpp::C11Features::useRangeForLoop(){
	
	std::vector<int>v={1,2,3,4,5};
	
	for(auto & i:v){
		
		std::cout<<i<<std::endl;
		
	}
}

void moderncpp::C11Features::useLambdaExpression(){
	
	auto add=[](int x,int y){
		
		return x+y;
	};
	
	std::cout<<"the sum is "<<add(55,66)<<std::endl;
}

void moderncpp::C11Features::useThreads(){
	
	std::thread childThread([](){
		
		std::cout<<"im a child thread"<<std::endl;
	});
	
	childThread.join();
}

void moderncpp::C11Features::useAsync(){
	
	auto result=std::async(std::launch::async,[](){
		
		std::this_thread::sleep_for(std::chrono::seconds(2));
		
		return 45+90;
	});
	
	int sum=result.get();
	
	std::cout<<sum<<std::endl;
}

void moderncpp::C11Features::useRegex(){
	
	std::regex reg("\\d+");
	std::string str="123";
	
	std::cout<<regex_match(str,reg)<<std::endl;
}