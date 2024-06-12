#include "compiler.h"

#include <iostream>
#include <cstdlib>

void compile(const std::unordered_map<std::string, std::string>& config) {
	std::string source_files = config.at("source_files");
	std::string output_executable = config.at("output_executable");
	std::string compiler = config.at("compiler");
	std::string flags = config.at("flags");

	std::string command = compiler + " " + source_files + " -o " + output_executable + " " + flags;
	std::cout << "Executing command: " << command << std::endl;

	int result = std::system(command.c_str());
	if (result != 0)
		std::cerr << "Compilation failed with error code " << result << std::endl;
}
