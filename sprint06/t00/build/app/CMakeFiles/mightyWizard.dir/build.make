# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Users/spleshkov/.brew/Cellar/cmake/3.18.2/bin/cmake

# The command to remove a file.
RM = /Users/spleshkov/.brew/Cellar/cmake/3.18.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build

# Include any dependencies generated for this target.
include app/CMakeFiles/mightyWizard.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/mightyWizard.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/mightyWizard.dir/flags.make

app/CMakeFiles/mightyWizard.dir/main.cpp.o: app/CMakeFiles/mightyWizard.dir/flags.make
app/CMakeFiles/mightyWizard.dir/main.cpp.o: ../app/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/mightyWizard.dir/main.cpp.o"
	cd /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mightyWizard.dir/main.cpp.o -c /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/app/main.cpp

app/CMakeFiles/mightyWizard.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mightyWizard.dir/main.cpp.i"
	cd /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/app/main.cpp > CMakeFiles/mightyWizard.dir/main.cpp.i

app/CMakeFiles/mightyWizard.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mightyWizard.dir/main.cpp.s"
	cd /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/app/main.cpp -o CMakeFiles/mightyWizard.dir/main.cpp.s

# Object files for target mightyWizard
mightyWizard_OBJECTS = \
"CMakeFiles/mightyWizard.dir/main.cpp.o"

# External object files for target mightyWizard
mightyWizard_EXTERNAL_OBJECTS =

app/mightyWizard: app/CMakeFiles/mightyWizard.dir/main.cpp.o
app/mightyWizard: app/CMakeFiles/mightyWizard.dir/build.make
app/mightyWizard: app/CMakeFiles/mightyWizard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mightyWizard"
	cd /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mightyWizard.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/mightyWizard.dir/build: app/mightyWizard

.PHONY : app/CMakeFiles/mightyWizard.dir/build

app/CMakeFiles/mightyWizard.dir/clean:
	cd /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app && $(CMAKE_COMMAND) -P CMakeFiles/mightyWizard.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/mightyWizard.dir/clean

app/CMakeFiles/mightyWizard.dir/depend:
	cd /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00 /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/app /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app /Users/spleshkov/Desktop/unit-factory-ucode-half-marathon-c/sprint06/t00/build/app/CMakeFiles/mightyWizard.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/mightyWizard.dir/depend
