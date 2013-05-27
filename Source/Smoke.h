////////////////////////////////////////////////////////////////////////////////
// -------------------------------------------------------------------------- //
//                                                                            //
//                        (C) 2011-2013  David Krutsko                        //
//                        See LICENSE.md for copyright                        //
//                                                                            //
// -------------------------------------------------------------------------- //
////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------//
// Prefaces                                                                   //
//----------------------------------------------------------------------------//

#ifndef ENEMY_SMOKE_H
#define ENEMY_SMOKE_H

#include "Enemy.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

class Smoke : public Enemy
{
public:
	//----------------------------------------------------------------------------//
	// Constructors                                                               //
	//----------------------------------------------------------------------------//

	////////////////////////////////////////////////////////////////////////////////

	Smoke (World* world, const Point& pos) : Enemy (world, pos)
	{
		mIcon  = 'S';
		mLives = 3;

		mSpeed   = 150;
		mJetpack = true;
	}

	////////////////////////////////////////////////////////////////////////////////

	Smoke (World* world, int32 x, int32 y) : Enemy (world, x, y)
	{
		mIcon  = 'S';
		mLives = 3;

		mSpeed   = 150;
		mJetpack = true;
	}



public:
	//----------------------------------------------------------------------------//
	// Functions                                                                  //
	//----------------------------------------------------------------------------//

	////////////////////////////////////////////////////////////////////////////////

	Kind GetType (void) const
	{
		return Entity::eSmoke;
	}
};

#endif // ENEMY_SMOKE_H
