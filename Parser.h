#ifndef Parser_h
#define Parser_h
#include <iostream>
#include <sstream>
#include <string>
#include "Node.h"
#include "Container.h"

class Parser{
	public:
		Parser(Container*);
		void readdoc(std::string); //Creates new nodes
	private:
		Container* containerPointer;
};
#endif

