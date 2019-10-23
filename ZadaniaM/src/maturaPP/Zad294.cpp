/*
 * Zad294.cpp
 *
 *  Created on: 22 paź 2019
 *      Author: administrator
 */

#include "Zad294.h"
#include <fstream>
#include <iostream>

Zad294::Zad294() {
	std::fstream file;
	file.open("dane/zad294/hasla.txt", std::ios::in);
	passwords = new std::string[200];
	for(int i = 0; i < 200; i++)
		file >> passwords[i];

}


void Zad294::solution(){
	std::cout << "Zadanie 294" << std::endl;
	A();
	B();
	C();
}

void Zad294::A(){
	std::cout << "podpunkt A:" << std::endl;
int even = 0;
	for(int i = 0; i < 200; i++)
		if(passwords[i].length() % 2 == 0) even++;
	std::cout << "Parzystych: " << even << ", nieparzystych: " << (200 - even) << std::endl;

}

bool Zad294::palindrom(std::string str){
	int r = str.length();
	int s = r / 2;

	for(int i = 0; i < s; i++){
		if(str[i] != str[r - i - 1])  return false;
	}
	return true;
}


void Zad294::B(){
	std::cout << "podpunkt B:" << std::endl;
  for(int i = 0; i < 200; i++){
	  if(palindrom(passwords[i]))
		  std::cout << passwords[i] << std::endl;
  }
}

bool Zad294::has220(std::string str){
	for(int i = 0; i < str.length()-1; i++){
		if(((int)str[i])+((int)str[i+1]) == 220) return true;
	}
	return false;
}

void Zad294::C(){
	std::cout << "podpunkt C:" << std::endl;
	for(int i = 0; i < 200; i++)
		if(has220(passwords[i])) std::cout << passwords[i] << std::endl;
}

Zad294::~Zad294() {
	delete[] passwords;
}

