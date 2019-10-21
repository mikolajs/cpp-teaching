/*
 * Zad292.cpp
 *
 *  Created on: 21 paź 2019
 *      Author: administrator
 */

#include "Zad292.h"
#include <fstream>
#include <cmath>
#include <iostream>

Zad292::Zad292() {
	dane = new int[500];
	std::fstream plik;
		plik.open("dane/zad292/liczby.txt", std::ios::in);
		for (int i = 0; i < 500; i++) {
			plik >> dane[i];
		}

}

void Zad292::solution(){
	int s;
		bool prime = true;
		for(int i = 2; i < 1000; i++){
			s = static_cast<int>(sqrt(i));
			prime = true;
			for(int j = 2; j <= s; j++){
				if(i % j == 0) {
					prime = false;
					break;
				}
			}
			if(prime){
				for(int k = 0; k < 500; k++){
					if(i*i == dane[k]) std::cout << dane[k] << std::endl;
				}
			}
		}
}

Zad292::~Zad292() {
	delete[] dane;
}

