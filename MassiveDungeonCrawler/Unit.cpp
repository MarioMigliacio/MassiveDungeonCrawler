#include "Unit.h"

// The Constructor for a base Unit type.
Unit::Unit(int str, int con, int sta, int dex, int spi)
{
	_strength = str;
	_constitution = con;
	_stamina = sta;
	_dexterity = dex;
	_spirit = spi;
}
