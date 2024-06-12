#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> parseConfig(const std::string& filename);

#endif // !PARSER_H
