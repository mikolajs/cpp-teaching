/*
 * Zad295.cpp
 *
 *  Created on: 28 paź 2019
 *      Author: administrator
 */

#include <fstream>
#include <iostream>
#include "Zad295.h"

Zad295::Zad295() {
	dane = new int[size];
	std::fstream plik;
		plik.open("cyfry.txt", std::ios::in);
		for(int i = 0; i < size; i++)
			plik >> dane[i];
}

void Zad295::A(){
	int n = 0;
		for(int i = 0; i < size; i++){
			if(dane[i] % 2 == 0) n++;
		}
		std::cout << "odp A: " << n << std::endl;
}

void Zad295::B(){
	int max = 0;
		int min = 1000000;
		int maxIndex = -1;
		int minIndex = -1;
		int sum;
		for(int i = 0; i < size; i++){
				sum = digitsSum(dane[i]);
				if(sum > max) {
					max = sum;
					maxIndex = i;
				}
				if(sum < min){
					min = sum;
					minIndex = i;
				}
			}
	std::cout << "Maksymalna: " << dane[maxIndex] << " suma cyfr: " << max
				<< std::endl;
	std::cout << "Minimalna: " << dane[minIndex] << " suma cyfr: " << min
				<< std::endl;
}

int Zad295::digitsSum(int number){
	int sum = 0;
		while(number > 0){
			sum += number % 10;
			number /= 10;
		}
		return sum;
}
bool Zad295::increasing(int number){
	int last = 10;
	while(number > 0){
		if(last <= number % 10) return false;
		last = number % 10;
		number /= 10;
	}
	return true;
}

void Zad295::C(){
	for(int i = 0;i < size;i++){
			if(increasing(dane[i])) std::cout << dane[i] << std::endl;
		}
}

void Zad295::solution(){
	A();
	B();
	C();
}

Zad295::~Zad295() {
	delete[] dane;
}

