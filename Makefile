################################################################################
## -------------------------------------------------------------------------- ##
##                                                                            ##
##                        (C) 2012-2013  David Krutsko                        ##
##                        See LICENSE.md for copyright                        ##
##                                                                            ##
## -------------------------------------------------------------------------- ##
################################################################################

##----------------------------------------------------------------------------##
## Variables                                                                  ##
##----------------------------------------------------------------------------##

PROGRAM		= Dynaman

EXTENSION	= cc
OBJECT		= Object/
SOURCE		= Source/

CXX			= g++
LIBRARIES	= -lncurses

ifeq ($(mode), release)
	CXXFLAGS = -std=c++0x -Wall -pedantic-errors -O2 -s
else
	mode     = debug
	CXXFLAGS = -std=c++0x -Wall -pedantic-errors -O0 -g
endif

SOURCES		= $(shell find $(SOURCE) -name "*.$(EXTENSION)")
OBJECTS		= $(shell find $(OBJECT) -name "*.o")
GENERATED	= $(patsubst $(SOURCE)%.$(EXTENSION), $(OBJECT)%.o, $(SOURCES))



##----------------------------------------------------------------------------##
## Compile                                                                    ##
##----------------------------------------------------------------------------##

makepp_no_builtin = 1

$(OBJECT)%.o: $(SOURCE)%.$(EXTENSION)
	$(CXX) $(CXXFLAGS) -c $< -o $@



##----------------------------------------------------------------------------##
## Build                                                                      ##
##----------------------------------------------------------------------------##

.PHONY: build rebuild clean

build: _build $(GENERATED)
	$(CXX) $(OBJECTS) -o $(PROGRAM) $(LIBRARIES)
	@echo Build succeeded

rebuild: _rebuild clean $(GENERATED)
	$(CXX) $(OBJECTS) -o $(PROGRAM) $(LIBRARIES)
	@echo Build succeeded

clean:
	$(RM) $(PROGRAM) $(GENERATED)



##----------------------------------------------------------------------------##
## Run                                                                        ##
##----------------------------------------------------------------------------##

.PHONY: run

run: build
	./$(PROGRAM)



##----------------------------------------------------------------------------##
## Helpers                                                                    ##
##----------------------------------------------------------------------------##

.PHONY: clear tar cloc

clear:
	clear

tar: clear clean
	@echo Creating tar file: $(PROGRAM).tar.gz...
	$(RM) $(PROGRAM).tar.gz
	tar czf $(PROGRAM).tar.gz $(OBJECT) $(SOURCE) LICENSE Makefile README.md *.png

cloc: clear
	cloc --by-file $(SOURCE)



##----------------------------------------------------------------------------##
## Internal                                                                   ##
##----------------------------------------------------------------------------##

.PHONY: _build _rebuild

_build: clear
	@echo Building $(PROGRAM) - $(mode) Mode
	@echo ---------------------------------
ifneq ($(mode), $(filter $(mode), debug release))
	@echo ERROR: Invalid build mode
	@exit 1
endif

_rebuild: clear
	@echo Rebuilding $(PROGRAM) - $(mode) Mode
	@echo -----------------------------------
ifneq ($(mode), $(filter $(mode), debug release))
	@echo ERROR: Invalid build mode
	@exit 1
endif
