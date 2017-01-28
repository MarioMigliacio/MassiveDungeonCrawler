#pragma once

#include <string>
#include <vector>

// A basic enemy Unit type.
class Unit
{
protected:
	// Contains common attributes relating to a monster unit. 
	#pragma region Common Core Attributes

	// Variable is used to uniquely increment the _id field.
	static int _staticID;

	// The Name of a particular unit. Name is used to identify what type of monster we are using.
	std::string _name;

	// The collection of available spells for a particular unit. If spells are available for a unit, their attack behavior will reflect this.
	std::vector<std::string> _spells;

	// The uniquely associated Identification for the spawned Unit.
	int _id;

	// The Strength of a particular unit. Strength helps determine how much physical damage a unit can attack with.
	int _strength;

	// The Constitution of a particular unit. Constitution helps determine a units health value.
	int _constitution;

	// The Dexterity of a particular unit. Dexterity helps determine a units speed, armor, and chance to hit with attacks.
	int _dexterity;

	// The Spirit of a particular unit. Spirit helps determine a units resistance and damage spells will deal. 
	int _spirit;

	#pragma endregion

public:
	// Contains the essential Constructor for Units.
	#pragma region Constructors and Destructors

	// Default Unit Constructor.
	Unit();

	// A Constructor which accepts values as parameters to define a Unit.
	Unit(int str, int con, int dex, int spi);

	// Default Deconstructor.
	virtual ~Unit();

	#pragma endregion

	// Contains the getId method to uniquely identify Units.
	#pragma region Identification
	
	// Fetches the next iterable ID tag.
	const int getId();

	#pragma endregion

	// Contains Pure virtual methods which will be defined in ineriting classes from base Unit types.
	#pragma region Virtual Members to be defind through inheritance	

	// Returns the _strength value for this unit.
	virtual int getStrength() = 0;

	// Sets the _strength value for this unit based on str argument.
	virtual void setStrength(int str) = 0;

	// Returns the _constitution value for this unit.
	virtual int getConstitution() = 0;

	// Sets the _constitution value for this unit based on con argument.
	virtual void setConstitution(int con) = 0;

	// Returns the _dexterity value for this unit.
	virtual int getDexterity() = 0;

	// Sets the _dexterity value for this unit based on dex argument.
	virtual void setDexterity(int dex) = 0;

	// Returns the _spirit value for this unit.
	virtual int getSpirit() = 0;

	// Sets the _spirit value for this unit based on spi argument.
	virtual void setSpirit(int spi) = 0;

	// Returns the value of gold this unit was worth upon its death.
	virtual int acquireGold() = 0;

	// Returns the value of experience this unit was worth upon its death.
	virtual int acquireXP() = 0;

	#pragma endregion
};
