#include "Rat.h"

// The Default Constructor for a Rat Unit.
Rat::Rat() : Unit()
{
	_name = "Rat";
	_spells.clear();
}

// The Constructor for a Rat which accepts parameters to define the the core attributes.
Rat::Rat(int str, int con, int dex, int spi) : Unit(str, con, dex, spi)
{
	_name = "Rat";
	_spells.clear();
}

// The default Deconstructor for a Rat.
Rat::~Rat()
{
}

// Returns the _strength attribute for this unit.
inline int Rat::getStrength()
{
	return _strength;
}

// Sets the _strength attribute for this unit.
inline void Rat::setStrength(int str)
{
	_strength = str;
}

// Returns the _constitution attribute for this unit.
inline int Rat::getConstitution()
{
	return _constitution;
}

// Sets the _constitution attribute for this unit.
inline void Rat::setConstitution(int con)
{
	_constitution = con;
}

// Returns the _dexterity attribute for this unit.
inline int Rat::getDexterity()
{
	return _dexterity;
}

// Sets the _dexterity attribute for this unit.
inline void Rat::setDexterity(int dex)
{
	_dexterity = dex;
}

// Returns the _spirit attribute for this unit.
inline int Rat::getSpirit()
{
	return _spirit;
}

// Sets the _spirit attribute for this unit.
inline void Rat::setSpirit(int spi)
{
	_spirit = spi;
}

// Returns the value of gold this unit was worth upon its death.
inline int Rat::acquireGold()
{
	return 22;
}

// Returns the value of experience this unit was worth upon its death.
inline int Rat::acquireXP()
{
	return 30;
}
