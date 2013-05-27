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

#ifndef WORLD_BUILDER_H
#define WORLD_BUILDER_H

class Wall;
class Point;
class World;

#include "Types.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////
/// <summary> Generates random game worlds. </summary>

class WorldBuilder
{
public:
	// Functions
	static void		CreateWorld		(World* world, uint8 stage);
	static void		AddSmoke		(World* world, uint8 count);

private:
	// Internal
	static Point	FindEmptySpot	(const World* world);
	static Wall*	FindEmptyBush	(const World* world);
};

#endif // WORLD_BUILDER_H
