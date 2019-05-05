#include "Container.h"
#include "Parser.h"
#include "Visitor.h"
#include <string>

int main(){
	Container container;
	if (true){//The if-case allows Parser to go out of scope.
		Parser parser(&container);
		parser.readdoc("str.txt");
	}
	Visitor visitor(&container);
	//visitor.generate(500);
	container.printAll();
	return 0;
}
