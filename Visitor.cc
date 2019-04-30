#include "Visitor.h"

Visitor::Visitor(Container* pointer):container{pointer}{}

/*Open a file, output strings to said file as the container and it's nodes are being traversed.*/
void Visitor::generate(int desiredLenght){
	//Pick a start node, preferably one starting with a capital letter.
	for (int i=0; i!=desiredLenght; ++i){
		//Travel to a child node based on uses
		//If several high-use words (small words like "and") have been picked recently, prefer less common words.
		
		//I need to find some way to avoid circular paths, allthough unlikely.
	} 
}
