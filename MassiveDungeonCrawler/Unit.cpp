#include "Unit.h"

// The Default Constructor for a base Unit type using a uniform Initialization list.
Unit::Unit() : _strength{ 0 }, _constitution{ 0 }, _dexterity{ 0 }, _spirit{ 0 }
{
	_name = "unit";
	_spells.clear();
	_id = _staticID++;
}

// The Constructor which accepts parameters as values to define a Unit using a uniform Initialization list.
Unit::Unit(int str, int con, int dex, int spi) : _strength{ str }, _constitution{ con }, _dexterity{ dex }, _spirit{ spi }
{
	_name = "unit";
	_spells.clear();
	_id = _staticID++;
}

// Deconstructor for a base Unit type.
Unit::~Unit() 
{
	
}

// Start the Id's from a 1 based index.
int Unit::_staticID = 1;

// Fetches the next iterable ID tag.
const int Unit::getId()
{
	return _id;
}