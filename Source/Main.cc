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

#include "Game.h"
#include "Graphics.h"
#include <curses.h>



//----------------------------------------------------------------------------//
// Main                                                                       //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////
/// <summary> Main execution point for this application. </summary>
/// <param name="argc"> Number of arguments in the command line. </param>
/// <param name="argv"> Arguments from the command line. </param>
/// <returns> Zero for success, error code for failure. </returns>

int main (int argc, char** argv)
{
	initscr();				// Init nCurses
	start_color();			// Enable color

	noecho();				// Don't output user input
	curs_set(0);			// Hide the blinking cursor
	keypad (stdscr, TRUE);	// Enable getch with keypad

	Graphics::Init();		// Initialize graphics
	Game game;				// Create a game instance
	game.Menu();			// Start the game

	endwin();				// Close nCurses
	return 0;				// Exit application
}
