/*
 * Zad404.cpp
 *
 *  Created on: 16 paź 2019
 *      Author: administrator
 */

#include <iostream>
#include <fstream>
#include "Zad404.h"
#include <vector>

Zad404::Zad404() {
	std::cout << "Zadanie 404 PP przeznaczone dla arkusza kalkulacyjnego" << std::endl;
	std::fstream file;
		file.open("dane/zad404/odpowiedzi.txt", std::ios::in);
		int ans;
		std::string right;
		file.ignore(1000, '\n');
		for(int i = 0; i < 6; i++) {
			file >> ans;
			file >> right;
			answers.insert(std::pair<int, char>(ans, right[0]));
		}
		file.close();
		file.open("dane/zad404/konkurs.txt", std::ios::in);
		file.ignore(1000, '\n');
		Calls c;
		while(file.good()){
			file >> c.phone;
			file >> c.date;
			file >> c.time;
			file >> c.q;
			file >> c.a;
			calls.push_back(c);
		}
		file.close();
}

void Zad404::solution(){
	//print();
}

void Zad404::print(){
	std::map<int, char>::iterator it;
		for(int i = 1; i <= 6; i++){
			it = answers.find(i);
			if(it != answers.end())
				std::cout << i << " : "<< it->second << std::endl;
		}
		for(std::vector<Calls>::iterator it = calls.begin(); it != calls.end(); ++it){
			std::cout << it->phone << " : " << it->date << " " << it->time << " :  " << it->q << " : " << it->a <<  std::endl;
		}
}


Zad404::~Zad404() {
}

