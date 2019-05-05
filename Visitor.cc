#include "Visitor.h"
#include "Node.h"
#include <iostream>
#include <random>

/** This visitor implementation is just meant as an example using the interface offered by the Container and the underlying datastructure. **/

Visitor::Visitor(Container* container):container{container}{}


/*Open a file, output strings to said file as the container and it's nodes are being traversed.*/
void Visitor::generate(int desiredLenght){
	Node* np = (*container).firstWordStart();
	std::cout << (*np).getvalue() << std::endl;
	for (int i=0; i!=desiredLenght; ++i){
		unsigned int size = (*np).nbrOfChildren();
		std::random_device rd; // obtain a random number from hardware
		std::mt19937 eng(rd()); // seed the generator
		std::uniform_int_distribution<> distr(0, size); // define the range
		auto t = distr(eng);
		std::cout << (*np).getchildren()[t].node->getvalue() << std::endl;
		np = (*np).getchildren()[t].node;
		
	} 
}
