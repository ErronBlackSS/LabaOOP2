#pragma once
#include<iostream>
#include<string>
#include"catalog_list.h"
using namespace std;
class catalog : public catalog_list{
public:
	// ������������ 
	catalog();
	catalog(const string& city, const string& _d, const string& _c);
	catalog(const catalog& other);
	// �������, �������
	const string& GetDepart() const;
	const string& GetCity() const;
	void SetDepart(const string& __depart);
	void SetCity(const string& _new_type);
	// ������
	virtual void print();
	// ����������
	virtual ~catalog();

private:
	string _depart;
	string _city;
};

