# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yako/projects/tp2_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yako/projects/tp2_2/build

# Include any dependencies generated for this target.
include CMakeFiles/tp2_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp2_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp2_2.dir/flags.make

CMakeFiles/tp2_2.dir/objet.cpp.o: CMakeFiles/tp2_2.dir/flags.make
CMakeFiles/tp2_2.dir/objet.cpp.o: ../objet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yako/projects/tp2_2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/tp2_2.dir/objet.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tp2_2.dir/objet.cpp.o -c /home/yako/projects/tp2_2/objet.cpp

CMakeFiles/tp2_2.dir/objet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_2.dir/objet.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yako/projects/tp2_2/objet.cpp > CMakeFiles/tp2_2.dir/objet.cpp.i

CMakeFiles/tp2_2.dir/objet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_2.dir/objet.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yako/projects/tp2_2/objet.cpp -o CMakeFiles/tp2_2.dir/objet.cpp.s

CMakeFiles/tp2_2.dir/objet.cpp.o.requires:
.PHONY : CMakeFiles/tp2_2.dir/objet.cpp.o.requires

CMakeFiles/tp2_2.dir/objet.cpp.o.provides: CMakeFiles/tp2_2.dir/objet.cpp.o.requires
	$(MAKE) -f CMakeFiles/tp2_2.dir/build.make CMakeFiles/tp2_2.dir/objet.cpp.o.provides.build
.PHONY : CMakeFiles/tp2_2.dir/objet.cpp.o.provides

CMakeFiles/tp2_2.dir/objet.cpp.o.provides.build: CMakeFiles/tp2_2.dir/objet.cpp.o

CMakeFiles/tp2_2.dir/obstacle.cpp.o: CMakeFiles/tp2_2.dir/flags.make
CMakeFiles/tp2_2.dir/obstacle.cpp.o: ../obstacle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yako/projects/tp2_2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/tp2_2.dir/obstacle.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tp2_2.dir/obstacle.cpp.o -c /home/yako/projects/tp2_2/obstacle.cpp

CMakeFiles/tp2_2.dir/obstacle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_2.dir/obstacle.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yako/projects/tp2_2/obstacle.cpp > CMakeFiles/tp2_2.dir/obstacle.cpp.i

CMakeFiles/tp2_2.dir/obstacle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_2.dir/obstacle.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yako/projects/tp2_2/obstacle.cpp -o CMakeFiles/tp2_2.dir/obstacle.cpp.s

CMakeFiles/tp2_2.dir/obstacle.cpp.o.requires:
.PHONY : CMakeFiles/tp2_2.dir/obstacle.cpp.o.requires

CMakeFiles/tp2_2.dir/obstacle.cpp.o.provides: CMakeFiles/tp2_2.dir/obstacle.cpp.o.requires
	$(MAKE) -f CMakeFiles/tp2_2.dir/build.make CMakeFiles/tp2_2.dir/obstacle.cpp.o.provides.build
.PHONY : CMakeFiles/tp2_2.dir/obstacle.cpp.o.provides

CMakeFiles/tp2_2.dir/obstacle.cpp.o.provides.build: CMakeFiles/tp2_2.dir/obstacle.cpp.o

CMakeFiles/tp2_2.dir/personnage.cpp.o: CMakeFiles/tp2_2.dir/flags.make
CMakeFiles/tp2_2.dir/personnage.cpp.o: ../personnage.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yako/projects/tp2_2/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/tp2_2.dir/personnage.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tp2_2.dir/personnage.cpp.o -c /home/yako/projects/tp2_2/personnage.cpp

CMakeFiles/tp2_2.dir/personnage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_2.dir/personnage.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yako/projects/tp2_2/personnage.cpp > CMakeFiles/tp2_2.dir/personnage.cpp.i

CMakeFiles/tp2_2.dir/personnage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_2.dir/personnage.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yako/projects/tp2_2/personnage.cpp -o CMakeFiles/tp2_2.dir/personnage.cpp.s

CMakeFiles/tp2_2.dir/personnage.cpp.o.requires:
.PHONY : CMakeFiles/tp2_2.dir/personnage.cpp.o.requires

CMakeFiles/tp2_2.dir/personnage.cpp.o.provides: CMakeFiles/tp2_2.dir/personnage.cpp.o.requires
	$(MAKE) -f CMakeFiles/tp2_2.dir/build.make CMakeFiles/tp2_2.dir/personnage.cpp.o.provides.build
.PHONY : CMakeFiles/tp2_2.dir/personnage.cpp.o.provides

CMakeFiles/tp2_2.dir/personnage.cpp.o.provides.build: CMakeFiles/tp2_2.dir/personnage.cpp.o

CMakeFiles/tp2_2.dir/element.cpp.o: CMakeFiles/tp2_2.dir/flags.make
CMakeFiles/tp2_2.dir/element.cpp.o: ../element.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yako/projects/tp2_2/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/tp2_2.dir/element.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tp2_2.dir/element.cpp.o -c /home/yako/projects/tp2_2/element.cpp

CMakeFiles/tp2_2.dir/element.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_2.dir/element.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yako/projects/tp2_2/element.cpp > CMakeFiles/tp2_2.dir/element.cpp.i

CMakeFiles/tp2_2.dir/element.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_2.dir/element.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yako/projects/tp2_2/element.cpp -o CMakeFiles/tp2_2.dir/element.cpp.s

CMakeFiles/tp2_2.dir/element.cpp.o.requires:
.PHONY : CMakeFiles/tp2_2.dir/element.cpp.o.requires

CMakeFiles/tp2_2.dir/element.cpp.o.provides: CMakeFiles/tp2_2.dir/element.cpp.o.requires
	$(MAKE) -f CMakeFiles/tp2_2.dir/build.make CMakeFiles/tp2_2.dir/element.cpp.o.provides.build
.PHONY : CMakeFiles/tp2_2.dir/element.cpp.o.provides

CMakeFiles/tp2_2.dir/element.cpp.o.provides.build: CMakeFiles/tp2_2.dir/element.cpp.o

CMakeFiles/tp2_2.dir/main.cpp.o: CMakeFiles/tp2_2.dir/flags.make
CMakeFiles/tp2_2.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yako/projects/tp2_2/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/tp2_2.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tp2_2.dir/main.cpp.o -c /home/yako/projects/tp2_2/main.cpp

CMakeFiles/tp2_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp2_2.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yako/projects/tp2_2/main.cpp > CMakeFiles/tp2_2.dir/main.cpp.i

CMakeFiles/tp2_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp2_2.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yako/projects/tp2_2/main.cpp -o CMakeFiles/tp2_2.dir/main.cpp.s

CMakeFiles/tp2_2.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/tp2_2.dir/main.cpp.o.requires

CMakeFiles/tp2_2.dir/main.cpp.o.provides: CMakeFiles/tp2_2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/tp2_2.dir/build.make CMakeFiles/tp2_2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/tp2_2.dir/main.cpp.o.provides

CMakeFiles/tp2_2.dir/main.cpp.o.provides.build: CMakeFiles/tp2_2.dir/main.cpp.o

# Object files for target tp2_2
tp2_2_OBJECTS = \
"CMakeFiles/tp2_2.dir/objet.cpp.o" \
"CMakeFiles/tp2_2.dir/obstacle.cpp.o" \
"CMakeFiles/tp2_2.dir/personnage.cpp.o" \
"CMakeFiles/tp2_2.dir/element.cpp.o" \
"CMakeFiles/tp2_2.dir/main.cpp.o"

# External object files for target tp2_2
tp2_2_EXTERNAL_OBJECTS =

tp2_2: CMakeFiles/tp2_2.dir/objet.cpp.o
tp2_2: CMakeFiles/tp2_2.dir/obstacle.cpp.o
tp2_2: CMakeFiles/tp2_2.dir/personnage.cpp.o
tp2_2: CMakeFiles/tp2_2.dir/element.cpp.o
tp2_2: CMakeFiles/tp2_2.dir/main.cpp.o
tp2_2: CMakeFiles/tp2_2.dir/build.make
tp2_2: CMakeFiles/tp2_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable tp2_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp2_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp2_2.dir/build: tp2_2
.PHONY : CMakeFiles/tp2_2.dir/build

CMakeFiles/tp2_2.dir/requires: CMakeFiles/tp2_2.dir/objet.cpp.o.requires
CMakeFiles/tp2_2.dir/requires: CMakeFiles/tp2_2.dir/obstacle.cpp.o.requires
CMakeFiles/tp2_2.dir/requires: CMakeFiles/tp2_2.dir/personnage.cpp.o.requires
CMakeFiles/tp2_2.dir/requires: CMakeFiles/tp2_2.dir/element.cpp.o.requires
CMakeFiles/tp2_2.dir/requires: CMakeFiles/tp2_2.dir/main.cpp.o.requires
.PHONY : CMakeFiles/tp2_2.dir/requires

CMakeFiles/tp2_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp2_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp2_2.dir/clean

CMakeFiles/tp2_2.dir/depend:
	cd /home/yako/projects/tp2_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yako/projects/tp2_2 /home/yako/projects/tp2_2 /home/yako/projects/tp2_2/build /home/yako/projects/tp2_2/build /home/yako/projects/tp2_2/build/CMakeFiles/tp2_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp2_2.dir/depend
