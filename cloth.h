#pragma once

#include"catalog.h"
#include<tuple>
using namespace std;

class cloth : public catalog
{
public:
	cloth() = default;
	~cloth() = default;
	cloth(const string& shop, const string & _d, const string & _city, const string & _s, const string & _b_p, const int & _p_c);
	cloth(const cloth& other);
	const string& GetSize() const;
	const int& GetCount() const;
	const string& GetType() const;

	void SetSize(const string& _new_size);
	void SetCount(const int& _new_code);
	void SetType(const string& _new_phone);

	bool operator==(const cloth& man);
	bool operator!=(const cloth& man);

	void print();
private:
	string _size;
	string _type;
	int _count;
};

