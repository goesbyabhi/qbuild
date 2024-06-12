#include "parser.h"

#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

std::unordered_map<std::string, std::string> parseConfig(const std::string& filename) {
	std::unordered_map<std::string, std::string> config;
	std::ifstream file(filename);

	if (!file.is_open())
		throw std::runtime_error("Could not open configuration file.");

	std::string line;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string key;
		if (std::getline(iss, key, ':')) {
			std::string value;
			if (std::getline(iss, value)) {
				config[key] = value;
			}
		}
	}
	return config;
}
