#ifndef Visitor_h
#define Visitor_h
#include "Container.h"


/*Intended to traverse the container and it's nodes to generate a human-like text.*/
class Visitor {
public:
	Visitor(Container*);
	void generate(int);
private:
	Container* container;

};

#endif
