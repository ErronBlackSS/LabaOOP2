#include "catalog.h"

catalog::catalog(){
	_depart = "";	
	_city = "";
}

catalog::catalog(const string& shop, const string & _d, const string & _c)
	:catalog_list(shop), _depart(_d), _city(_c) {}

catalog::catalog(const catalog & other){
	_depart = other.GetDepart();	
	_city = other.GetCity();
}

const string & catalog::GetDepart() const{
	return _depart;
}



const string & catalog::GetCity() const{
	return _city;
}

void catalog::SetDepart(const string & __depart){
	_depart = __depart;
}



void catalog::SetCity(const string & _new_city){
	_city = _new_city;
}

void catalog::print(){
	catalog_list::print();
	cout << "\n   Город: " << _city <<
		"\n   Отдел: " << _depart;
}
catalog::~catalog() = default;
