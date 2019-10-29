/*
 * Zad404.cpp
 *
 *  Created on: 16 paź 2019
 *      Author: administrator
 */

#include <iostream>
#include <fstream>
#include <cmath>
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
	A();
	B();
	C();
	D();
	E();
}

void Zad404::A(){
	int n = 0;
	std::string hour = "";
	for(std::vector<Calls>::iterator it = calls.begin(); it != calls.end(); ++it){
		hour = it->time.substr(0,2);
		if(hour == "16" || hour == "17") n++;
	}
	std::cout << "zad A: Ilość SMSów w godz 16.00 do 17.59: " << n << std::endl;
}

void Zad404::B() {
	int n = 0;
	int day;
	for (std::vector<Calls>::iterator it = calls.begin(); it != calls.end();
				++it) {
		day = dayOfWeek(it->date);
			if(day == 5 || day == 6) n++;
		}
	std::cout << "Zad B: ilość SMS-ów wysłanych w soboty i niedziele:  " << n << std::endl;
}
void Zad404::C() {
	int s = answers.size() + 1;
	int *answ = new int[s];
	for (int i = 0; i < s; i++)
		answ[i] = 0;
	for (std::vector<Calls>::iterator it = calls.begin(); it != calls.end();
			++it) {
		answ[it->q]++;
	}
std::cout << "Zad C: ilość wysłanych odpowiedzi: " << std::endl;
	for (int i = 1; i < s; i++) {
		std::cout << i << " : " << answ[i] << std::endl;
	}
	delete[] answ;
}
void Zad404::D() {
	int s = answers.size() + 1;
	int *answGood = new int[s];
	int *answBad = new int[s];
	for (int i = 0; i < s; i++){
		answGood[i] = 0; answBad[i] = 0;
	}
	int questNumb = 0;
	char doAnswer;
	for (std::vector<Calls>::iterator it = calls.begin(); it != calls.end();
			++it) {
		questNumb = it->q;
		doAnswer = it->a;
//		std::cout << questNumb <<"-" << doAnswer << "==" << answers[questNumb] << std::endl ;
		if(answers[questNumb] == doAnswer) answGood[questNumb]++;
		else answBad[questNumb]++;
	}
	std::cout << "Zad D: procent poprawności: " << std::endl;
	double correctness = 0.0;
	for (int i = 1; i < s; i++) {
		correctness = static_cast<double>(answGood[i]) / (static_cast<double>(answGood[i]+ answBad[i]));
		std::cout << i << " : " << std::round(correctness*1000.0) / 1000.0 << std::endl;
	}
	delete[] answGood;
	delete[] answBad;
}
void Zad404::E() {
	std::map<std::string, int> phoneAnswers;
	for (std::vector<Calls>::iterator it = calls.begin(); it != calls.end();
			++it) {
		if (answers[it->q] == it->a) {
			if (phoneAnswers.find(it->phone) == phoneAnswers.end())
				phoneAnswers.insert(std::pair<std::string, int>(it->phone, 1));
			else {
				phoneAnswers[it->phone]++;
			}
		}
	}
	std::cout << "Zad E ; Poprawnie na wszystkie odpowiedział telefon: "
			<< std::endl;
	for (auto it = phoneAnswers.begin(); it != phoneAnswers.end(); ++it) {
		if (it->second == 6)
			std::cout << it->first << std::endl;
	}
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

int Zad404::dayOfWeek(std::string date){
	//1 czerwca 2017 to czwartek czyli 4
	std::vector<std::string> vec = split(date, "-");
	int day = atoi(vec[2].c_str());
	int month = atoi(vec[1].c_str());

	if(month == 7) day += 30;
//	std::cout << date << " " << day << " " << ((day+ 3) % 7) + 1 << std::endl;
	return ((day+ 2) % 7);
}

Zad404::~Zad404() {
}

