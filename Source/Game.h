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

#ifndef GAME_H
#define GAME_H

class World;
class Player;

#include "Types.h"



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////
/// <summary> Controls the primary aspects of the game. </summary>

class Game
{
public:
	// Functions
	void		Menu			(void);
	void		NormalGame		(void);

private:
	// Fields
	World*		mWorld;			// The overall game world
	Player*		mPlayer;		// Player entity in the game

	int32		mPressed;		// Currently pressed key
	uint32		mElapsed;		// Time since last update
	uint32		mLastUpdate;	// Time last updated game

	uint32		mStage;			// Current stage in the game
};

#endif // GAME_H
