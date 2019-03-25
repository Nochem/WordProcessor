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
	Node* current = new Node(str);
	if (nodes.empty()){
		nodes.push_back(current);
		lastNode = current;
	} else {
		bool found = false; //Binary search instead. TODO
		for (unsigned int i = 0; i != nodes.size(); ++i){ 
			//If the current word exists in the list:
			if ((*nodes[i]).getvalue() == (*current).getvalue()){
				//Add the current word as a child of the previous.
				(*lastNode).addchild(nodes[i]);			
				//Prepare for the next word.
				lastNode = nodes[i];
				//Remove the duplicate node.				
				delete current;					
				found = true;
				break;
			}
		}
		if (!found) {
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
			std::cout << "-" + (*nodes[i]).getchildren()[v].node->getvalue() << std::endl;
		}
	}
}


std::vector<Node*>::iterator Container::start(){
	return nodes.begin();
}

std::vector<Node*>::iterator Container::end(){
	return nodes.end();
}

