#include "Node.h"
#include <string>


Node::Node(std::string str):value{str}{}

std::string Node::getvalue(){
	return value;
}

/*Adds a child to the Node.*/
void Node::addchild(Node* node){
	bool found = false;
	for (unsigned int i=0; i != children.size(); ++i){		//Search if child already exists.
		if ((*children[i].node).getvalue() == (*node).getvalue()){
			children[i].uses++;
			found = true;
		}
	}
	if (!found){
		child.uses = 0;
		child.node = node;
		children.push_back(child);
	}
}

std::vector<Node::Child> Node::getchildren(){ //Should probably return an iterator TODO
	return children;
}

