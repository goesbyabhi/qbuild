#include "parser.h"
#include "compiler.h"
#include <iostream>
#include <exception>

int main () {
	try {
		auto config = parseConfig("build.config");
		compile(config);
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}
