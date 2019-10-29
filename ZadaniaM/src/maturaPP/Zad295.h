/*
 * Zad295.h
 *
 *  Created on: 28 paź 2019
 *      Author: administrator
 */

#ifndef MATURAPP_ZAD295_H_
#define MATURAPP_ZAD295_H_

#include "BaseSolution.h"

class Zad295: public BaseSolution {
public:
	Zad295();
	virtual ~Zad295();
	void solution() override;
private:
	int *dane;
	const int size = 1000;
	int digitsSum(int number);
	bool increasing(int number);
	void A();
	void B();
	void C();
};

#endif /* MATURAPP_ZAD295_H_ */
