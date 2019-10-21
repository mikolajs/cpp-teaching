/*
 * Zad293.cpp
 *
 *  Created on: 21 paź 2019
 *      Author: administrator
 */

#include "Zad293.h"
#include <iostream>
#include <fstream>


bool Zad293::palindrom(std::string str){
	int r = str.length();
	int s = r / 2;

	for(int i = 0; i < s; i++){
		if(str[i] != str[r - i - 1])  return false;
	}
	return true;
}

void Zad293::solution() {
	for(int i = 0; i < 1000; i++){
			if(palindrom(dane[i])) std::cout << dane[i] << std::endl;
		}
}


Zad293::Zad293() {
	std::fstream plik;
	plik.open("dane/zad293/dane.txt", std::ios::in);
	dane = new std::string[1000];
	for(int i = 0; i < 1000; ++i) plik >> dane[i];
}

Zad293::~Zad293() {
	delete[] dane;
}

