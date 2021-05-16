#include "catalog_list.h"

const string & catalog_list::GetShopName() const
{
	return _shop_name;
}

void catalog_list::SetShopName(const string & shop_name)
{
	_shop_name = shop_name;
}

void catalog_list::print()
{
	cout << "   Название магазина: " << _shop_name;
}
