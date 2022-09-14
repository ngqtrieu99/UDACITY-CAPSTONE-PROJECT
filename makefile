INC_DIR := inc
SRC_DIR := src
BIN_DIR := bin

program_INCLUDE_DIRS := /usr/include/SDL2
CC       := g++
CPPFLAGS := -I$(INC_DIR) -I$(program_INCLUDE_DIRS) -MMD -MP
CXXFLAGS := -Wall
LDLIBS   := -lSDL2 -lSDL2_image -lSDL2_ttf 

SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
BINARY := $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)
DEPS    := $(wildcard $(BIN_DIR)/*.d)

.PHONY: clean

Breakout: $(BINARY)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(BINARY): $(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(OUTPUT_OPTION) $<

clean: ; $(RM) $(DEPS) $(BINARY) $ Breakout

include $(DEPS)

$(MAKEFILE_LIST): ;
%:: %,v
%:: RCS/%,v
%:: RCS/%
%:: s.%
%:: SCCS/s.%