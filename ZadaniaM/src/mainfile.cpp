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
#include "maturaPP/Zad294.h"
#include <string>

int main(){
	std::cout << "zadania maturalne" << std::endl;
	Zad294 *zad294 = new Zad294();
	zad294->solution();
	delete zad294;
//    Zad404	 *zad = new Zad404();
//	zad->solution();
//	delete zad;
	return 0;
}
