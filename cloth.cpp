#include "cloth.h"

cloth::cloth(const string& shop, const string & _d, const string & _city, const string & _s, const string & _b_p, const int & _p_c)
	: catalog(shop, _d, _city), _size(_s), _type(_b_p), _count(_p_c) {}

cloth::cloth(const cloth & other)
{
	this->SetShopName(other.GetShopName());
	this->SetDepart(other.GetDepart());
	this->SetCity(other.GetCity());
	_size = other.GetSize();
	_type = other.GetType();
	_count = other.GetCount();
}

const string & cloth::GetSize() const
{
	return _size;
}

const int & cloth::GetCount() const
{
	return _count;
}

const string & cloth::GetType() const
{
	return _type;
}

void cloth::SetSize(const string & _new_size)
{
	_size = _new_size;
}

void cloth::SetCount(const int & _new_code)
{
	_count = _new_code;
}

void cloth::SetType(const string & _new_type)
{
	_type = _new_type;
}

bool cloth::operator==(const cloth & man)
{
	return tuple<string, string, string, string, string, int>(this->GetShopName(), this->GetDepart(), this->GetCity(),
		this->GetSize(), this->GetType(), this->GetCount()) == tuple<string, string, string, string, string, int>(man.GetShopName(), man.GetDepart(), man.GetCity(),
			man.GetSize(), man.GetType(), man.GetCount());
}

bool cloth::operator!=(const cloth & man)
{
	return tuple<string, string, string, string, string, int>(this->GetShopName(), this->GetDepart(), this->GetCity(),
		this->GetSize(), this->GetType(), this->GetCount()) != tuple<string, string, string, string, string, int>(man.GetShopName(), man.GetDepart(), man.GetCity(),
			man.GetSize(), man.GetType(), man.GetCount());
}

void cloth::print()
{
	cout << "{" << "\n";
	catalog::print();
	cout << "\n   Размер: " << _size <<
		"\n   Тип: " << _type <<
		"\n   Колличество: " << _count << '\n';
	cout << "}"<<"\n";
}
