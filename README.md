# Dynaman

Dynaman is a game of survival based on the popular Bomberman series. The game is set in the Lost universe where you play your favorite Lost character trying to escape the forest. This is your story...

### Story
You heard that there is a hatch buried beneath some bushes but you don't know exactly where. To make things worse, there are deadly enemies who are trying to eat your face off. The good news is that you were wise enough to snag some dynamite from the Black Rock before you left. Assuming you don’t blow yourself up, your job is to blow up enemies and find the hatch. Dynamite is extremely unstable and you will only get a couple seconds to take cover. Hiding behind trees or bushes is always a good idea. If you do happen to come across the hatch, you will find that there is a person living there. Sadly he will not let you in until you’ve cleared all the enemies. Trying to ram your way in will only set off alarms and alert enemies to you. Occasionally you will encounter supply crates, these crates contain items which will aid in your survival so don't blow them up. Also remember that nightfall is just around the corner, you only have a couple minutes to escape before all hell breaks loose.

### Controls
**Menu**

* Arrow - Menu Selection
* Enter - Make Selection
* Escape - Exit the Game

**Game**

* Arrow - Player Movement
* Enter - Accept Message
* Escape - Pause the Game
* Q - Return to Menu (When Paused)
* D - Place Dynamite
* P - Skip Current Level (Cheat)

### Entities
**Actors**

* Player - That's You!!
* Hatch - That's your way out
* Fire - Very painful
* Dynamite - Your best friend
* Bush - Weak but tough to get through
* Tree - Very tall, old and sturdy

**Enemies**

* Grunt - Mindlessly runs around
* Boar - Tends to charge at you
* Smoke - Your worst nightmare

**Items**

* Gunpowder - Makes dynamite more powerful
* Armor - Stops even the most powerful attacks
* Healthpack - Gives you another chance to escape
* Jetpack - Just powerful enough to fly over bushes

### Development
**Requires**

* g++
* ncurses

**Compiling**

```bash
$ make
$ make run
```

**Makefile**

* build - Builds the entire project
* rebuild - Forces everything to be rebuilt
* clean - Deletes generated object code
* run - Runs the project (./Dynaman)
* clear - Clears the console
* tar - Cleans project and packages it in a tar file
* cloc - Computes the number of lines of code

**Modes**
```bash
$ make mode=debug
$ make mode=release
```

**Code**

Certain portions of the code are delivered as x86 object files. Please keep in mind that a compatible Linux platform is required to compile and run this software.

## Authors
**D. Krutsko**

* Email: <dave@krutsko.net>
* Home: [dave.krutsko.net](http://dave.krutsko.net)
* GitHub: [github.com/dkrutsko](https://github.com/dkrutsko)

**C. Laurendeau**
* Email: <claurend@scs.carleton.ca>
* Home: [scs.carleton.ca/~claurend](http://people.scs.carleton.ca/~claurend/)