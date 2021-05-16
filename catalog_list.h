#pragma once
#include<iostream>
#include<string>

using namespace std;

class catalog_list
{
public:
	catalog_list() = default;
	~catalog_list() = default;
	catalog_list(const string& NAME	)
		:_shop_name(NAME) {}
	const string& GetShopName() const;
	void SetShopName(const string& shop_name);
	void print();
private:
	string _shop_name;
};

