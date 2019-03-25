#ifndef Container_h
#define Container_h
#include "Node.h"
#include <vector>
#include <string>

/* The container creates, stores and manages Nodes. */

class Container{
public:
	Container();
	~Container();
	void addword(std::string);
	void printAll(); //Exists for testing, remove. TODO
	std::vector<Node*>::iterator start();
	std::vector<Node*>::iterator end();
private:
	std::vector<Node*> nodes;
	Node* lastNode;
	
};

#endif
