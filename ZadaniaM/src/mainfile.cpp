//============================================================================
// Name        : ZadaniaM.cpp
// Author      : Me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "maturaPP/Zad404.h"
#include "maturaPP/Zad292.h"
#include "maturaPP/Zad293.h"
#include <string>

int main(){
	std::cout << "zadania maturalne" << std::endl;
	BaseSolution *zad = new Zad293();
	zad->solution();
	delete zad;
	return 0;
}
