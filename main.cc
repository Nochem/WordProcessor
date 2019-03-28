#include "Container.h"
#include "Parser.h"
#include <string>

int main(){
	Container container;
	if (true){//The if-case allows Parser to go out of scope.
		Parser parser(&container);
		parser.readdoc("str.txt");
	}	
	container.printAll();
	return 0;
}
