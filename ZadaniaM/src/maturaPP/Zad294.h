/*
 * Zad294.h
 *
 *  Created on: 22 paź 2019
 *      Author: administrator
 */

#ifndef ZAD294_H_
#define ZAD294_H_

#include "BaseSolution.h"

class Zad294: public BaseSolution {
public:
	Zad294();
	void solution() override;
	virtual ~Zad294();
private:
	std::string *passwords;
	void A();
	void B();
	void C();
	bool palindrom(std::string str);
	bool has220(std::string str);
};

#endif /* ZAD294_H_ */
