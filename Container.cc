#include "Container.h"
#include <string>
#include <iostream>

Container::Container(){}

Container::~Container(){
	for (unsigned int i = 0; i!= nodes.size(); ++i){
		delete (nodes[i]);
	}
}


/* Creates a new node with str as value as long as no such node already exists. */
void Container::addword(std::string str){
	if (nodes.empty()){
		lastNode = new Node(str);
		nodes.push_back(lastNode);
	} else {
		bool found = false; //Use binary search instead. TODO
		for (unsigned int i = 0; i != nodes.size(); ++i){
			if ((*nodes[i]).getvalue() == str){
				(*lastNode).addchild(nodes[i]);
				lastNode = nodes[i];							
				found = true;
				break;
			}
		}
		if (!found) {
			Node* current = new Node(str);
			(*lastNode).addchild(current);	
			nodes.push_back(current);
			lastNode = current;
		}
	} 
}

//Scaffolding, remove TODO
void Container::printAll(){
	for (unsigned int i = 0; i!= nodes.size(); ++i){
		std::cout << (*nodes[i]).getvalue() + " " << std::endl;
		for (unsigned int v = 0; v != (*nodes[i]).getchildren().size(); ++v){
			std::cout << "-" << (*nodes[i]).getchildren()[v].node->getvalue() << " " << (*nodes[i]).getchildren()[v].uses << std::endl; //Strange results in Cygwin, TODO
		}
	}
}


std::vector<Node*>::iterator Container::start(){
	return nodes.begin();
}

std::vector<Node*>::iterator Container::end(){
	return nodes.end();
}

