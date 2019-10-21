/*
 * Zad293.h
 *
 *  Created on: 21 paź 2019
 *      Author: administrator
 */

#ifndef MATURAPP_ZAD293_H_
#define MATURAPP_ZAD293_H_

#include "BaseSolution.h"

class Zad293: public BaseSolution {
public:
	Zad293();
	void solution() override;
	virtual ~Zad293();
private:
	std::string* dane;
	bool palindrom(std::string str);
};

#endif /* MATURAPP_ZAD293_H_ */
