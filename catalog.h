#pragma once
#include<iostream>
#include<string>
#include"catalog_list.h"
using namespace std;
class catalog : public catalog_list{
public:
	// Конструкторы 
	catalog();
	catalog(const string& city, const string& _d, const string& _c);
	catalog(const catalog& other);
	// Сеттеры, геттеры
	const string& GetDepart() const;
	const string& GetCity() const;
	void SetDepart(const string& __depart);
	void SetCity(const string& _new_type);
	// Печать
	virtual void print();
	// Деструктор
	virtual ~catalog();

private:
	string _depart;
	string _city;
};

