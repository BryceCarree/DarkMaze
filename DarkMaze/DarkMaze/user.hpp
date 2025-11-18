#ifndef USER_HPP
#define USER_HPP

#include "movementkeys.hpp"

// pragma once
class User
{
	int xLocation;
	int yLocation;

	User(MovementKeys xStart, MovementKeys yStart);

	void move(MovementKeys direction);
};

#endif