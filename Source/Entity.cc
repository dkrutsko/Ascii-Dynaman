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

#include "Entity.h"



//----------------------------------------------------------------------------//
// Constructors                                                        Entity //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

Entity::Entity (World* world, const Point& pos) : mPosition (pos)
{
	mColor	= 8;
	mIcon	= ' ';
	mLives	= 1;
	mImmune	= 0;
	mWorld	= world;
}

////////////////////////////////////////////////////////////////////////////////

Entity::Entity (World* world, int32 x, int32 y) : mPosition (x, y)
{
	mColor	= 8;
	mIcon	= ' ';
	mLives	= 1;
	mImmune	= 0;
	mWorld	= world;
}

////////////////////////////////////////////////////////////////////////////////

Entity::~Entity	(void)
{
}



//----------------------------------------------------------------------------//
// Functions                                                           Entity //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

char Entity::GetIcon (void) const
{
	return mIcon;
}

////////////////////////////////////////////////////////////////////////////////

int8 Entity::GetColor (void) const
{
	return mColor;
}

////////////////////////////////////////////////////////////////////////////////

int32 Entity::GetX (void) const
{
	return mPosition.X;
}

////////////////////////////////////////////////////////////////////////////////

int32 Entity::GetY (void) const
{
	return mPosition.Y;
}

////////////////////////////////////////////////////////////////////////////////

Point Entity::GetPosition (void) const
{
	return mPosition;
}

////////////////////////////////////////////////////////////////////////////////

void Entity::SetPosition (const Point& pos)
{
	mPosition = pos;
}

////////////////////////////////////////////////////////////////////////////////

void Entity::SetPosition (int32 x, int32 y)
{
	mPosition.X = x;
	mPosition.Y = y;
}

////////////////////////////////////////////////////////////////////////////////

bool Entity::IsAlive (void) const
{
	return mLives > 0;
}

////////////////////////////////////////////////////////////////////////////////

int8 Entity::GetLives (void) const
{
	return mLives;
}

////////////////////////////////////////////////////////////////////////////////

void Entity::SetLives (int8 lives)
{
	if (lives > 9)
		mLives = 9;

	elif (lives < 0)
		mLives = 0;

	else
		mLives = lives;
}

////////////////////////////////////////////////////////////////////////////////

void Entity::AddLives (int8 lives)
{
	SetLives (mLives + lives);
}

////////////////////////////////////////////////////////////////////////////////

void Entity::Damage (void)
{
	if (mImmune <= 0)
	{
		mImmune = 2000;
		if (--mLives < 0)
			  mLives = 0;
	}
}

////////////////////////////////////////////////////////////////////////////////

void Entity::Update (uint32 elapsed)
{
	// Make item immune for a short time
	if (mImmune > 0) mImmune -= elapsed;
}