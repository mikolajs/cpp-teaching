#ifndef BASESOLUTION_H_
#define BASESOLUTION_H_

#include <string>
#include <vector>

class BaseSolution {
public:
	BaseSolution();
	std::string trim(std::string str);
	std::vector<std::string> split(std::string str, std::string separator);
	virtual void solution() = 0;
	virtual ~BaseSolution();

protected:
	std::string ltrim(std::string str);
	std::string rtrim(std::string str);
};

#endif /* HELPER_H_ */
