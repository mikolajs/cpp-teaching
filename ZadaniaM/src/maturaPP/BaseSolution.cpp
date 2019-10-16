

#include "BaseSolution.h"
#include <string>
#include <vector>

BaseSolution::BaseSolution() {

}

std::string BaseSolution::trim(std::string str){
	return rtrim(ltrim(str));
}

std::string BaseSolution::ltrim(std::string str){
	return str.substr(str.find_first_not_of(" \t\n\r\b"));
}

std::string BaseSolution::rtrim(std::string str){
	return str.substr(0, str.find_last_not_of(" \t\n\r\b")+1);
}

std::vector<std::string> BaseSolution::split(std::string str, std::string separator) {
	std::vector<std::string> array;
	int pos = str.find_first_of(separator);
	while (pos > -1) {
		array.push_back(str.substr(0, pos));
		if (static_cast<int>(str.length()) > (pos + 1))
			str = str.substr(pos + 1);
		pos = str.find_first_of(separator);
	}
	array.push_back(str);
	return array;
}

BaseSolution::~BaseSolution() {

}

