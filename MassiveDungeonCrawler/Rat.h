#pragma once

#include "Unit.h"

class Rat : public Unit
{
public:
	// Contains the essential Constructor for a Rat.
	#pragma region Constructor 

	// Default Rat Constructor.
	Rat();

	// A Constructor which accepts values as parameters to define a Rat.
	Rat(int str, int con, int dex, int spi);

	// The Deconstructor for a Rat Unit.
	virtual ~Rat();

	#pragma endregion

	#pragma region Defined behavior for this Unit

	// Returns the _strength value for this unit.
	int getStrength();

	// Sets the _strength value for this unit based on str argument.
	void setStrength(int str);

	// Returns the _constitution value for this unit.
	int getConstitution();

	// Sets the _constitution value for this unit based on str argument.
	void setConstitution(int con);

	// Returns the _dexterity value for this unit.
	int getDexterity();

	// Sets the _dexterity value for this unit based on str argument.
	void setDexterity(int dex);

	// Returns the _spirit value for this unit.
	int getSpirit();

	// Sets the _spirit value for this unit based on str argument.
	void setSpirit(int spi);

	// Returns the value of gold this unit was worth upon its death.
	int acquireGold();

	// Returns the value of experience this unit was worth upon its death.
	int acquireXP();

	#pragma endregion
};