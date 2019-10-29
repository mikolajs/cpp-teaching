/*
 * Zad404.h
 *
 *  Created on: 16 paź 2019
 *      Author: administrator
 */

#ifndef ZAD404_H_
#define ZAD404_H_
#include "BaseSolution.h"
#include <map>
#include <vector>

struct Calls {
	std::string phone;
	std::string date;
	std::string time;
	int q;
	char a;
};


class Zad404 : public BaseSolution {
public:
	Zad404();
	void solution() override;
	virtual ~Zad404();
private:
	std::map<int, char> answers;
    std::vector<Calls> calls;
    void A();
    void B();
    void C();
    void D();
    void E();
    void print();
    int dayOfWeek(std::string date);
};



#endif /* ZAD404_H_ */
