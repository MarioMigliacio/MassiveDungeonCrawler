#pragma once

// A basic enemy Unit type.
class Unit
{
public:
	// The common core attributes for particular enemy units.
	int _strength;
	int _constitution;
	int _stamina;
	int _dexterity;
	int _spirit;
	char _name[32];

	// The uniquely determined core attributes for particular enemy units.
	int _attack;
	int _defense;
	int _speed;
	int _gold;
	int _xp;

	// Common Unit Constructor
	Unit(int str, int con, int sta, int dex, int spi);

	// Pure virtual methods which will be defined in ineriting classes from base Unit types.
	virtual int determineAttack() = 0;
	virtual int determineDefense() = 0;
	virtual int determineSpeed() = 0;
	virtual int determineXP() = 0;
	virtual int determineGold() = 0;
	virtual char* getName() = 0;
};
