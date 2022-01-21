#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <cassert>

class Karen {
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
};

#endif
