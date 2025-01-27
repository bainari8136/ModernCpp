#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H

namespace moderncpp {
	
	class Base {
		
		public:
		
		virtual void show();
	};
	
	class Derived : public Base {
		
		public:
		
		void show() override ;
		
		
	};
}

#endif