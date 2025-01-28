#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H

namespace moderncpp {
	
	class Base {
		
		public:
		
		~Base(){}
		virtual void show();
		
	};
	
	class Derived : public Base {
		
		public:
		~Derived(){}
		void show() override ;
		
		
	};
}

#endif