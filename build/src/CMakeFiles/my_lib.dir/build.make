# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build

# Include any dependencies generated for this target.
include src/CMakeFiles/my_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/my_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/my_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/my_lib.dir/flags.make

src/CMakeFiles/my_lib.dir/account_manager.cpp.o: src/CMakeFiles/my_lib.dir/flags.make
src/CMakeFiles/my_lib.dir/account_manager.cpp.o: ../src/account_manager.cpp
src/CMakeFiles/my_lib.dir/account_manager.cpp.o: src/CMakeFiles/my_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/my_lib.dir/account_manager.cpp.o"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/my_lib.dir/account_manager.cpp.o -MF CMakeFiles/my_lib.dir/account_manager.cpp.o.d -o CMakeFiles/my_lib.dir/account_manager.cpp.o -c /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/account_manager.cpp

src/CMakeFiles/my_lib.dir/account_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/account_manager.cpp.i"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/account_manager.cpp > CMakeFiles/my_lib.dir/account_manager.cpp.i

src/CMakeFiles/my_lib.dir/account_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/account_manager.cpp.s"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/account_manager.cpp -o CMakeFiles/my_lib.dir/account_manager.cpp.s

src/CMakeFiles/my_lib.dir/bank_manager.cpp.o: src/CMakeFiles/my_lib.dir/flags.make
src/CMakeFiles/my_lib.dir/bank_manager.cpp.o: ../src/bank_manager.cpp
src/CMakeFiles/my_lib.dir/bank_manager.cpp.o: src/CMakeFiles/my_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/my_lib.dir/bank_manager.cpp.o"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/my_lib.dir/bank_manager.cpp.o -MF CMakeFiles/my_lib.dir/bank_manager.cpp.o.d -o CMakeFiles/my_lib.dir/bank_manager.cpp.o -c /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/bank_manager.cpp

src/CMakeFiles/my_lib.dir/bank_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/bank_manager.cpp.i"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/bank_manager.cpp > CMakeFiles/my_lib.dir/bank_manager.cpp.i

src/CMakeFiles/my_lib.dir/bank_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/bank_manager.cpp.s"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/bank_manager.cpp -o CMakeFiles/my_lib.dir/bank_manager.cpp.s

src/CMakeFiles/my_lib.dir/database_manager.cpp.o: src/CMakeFiles/my_lib.dir/flags.make
src/CMakeFiles/my_lib.dir/database_manager.cpp.o: ../src/database_manager.cpp
src/CMakeFiles/my_lib.dir/database_manager.cpp.o: src/CMakeFiles/my_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/my_lib.dir/database_manager.cpp.o"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/my_lib.dir/database_manager.cpp.o -MF CMakeFiles/my_lib.dir/database_manager.cpp.o.d -o CMakeFiles/my_lib.dir/database_manager.cpp.o -c /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/database_manager.cpp

src/CMakeFiles/my_lib.dir/database_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/database_manager.cpp.i"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/database_manager.cpp > CMakeFiles/my_lib.dir/database_manager.cpp.i

src/CMakeFiles/my_lib.dir/database_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/database_manager.cpp.s"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/database_manager.cpp -o CMakeFiles/my_lib.dir/database_manager.cpp.s

src/CMakeFiles/my_lib.dir/menu.cpp.o: src/CMakeFiles/my_lib.dir/flags.make
src/CMakeFiles/my_lib.dir/menu.cpp.o: ../src/menu.cpp
src/CMakeFiles/my_lib.dir/menu.cpp.o: src/CMakeFiles/my_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/my_lib.dir/menu.cpp.o"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/my_lib.dir/menu.cpp.o -MF CMakeFiles/my_lib.dir/menu.cpp.o.d -o CMakeFiles/my_lib.dir/menu.cpp.o -c /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/menu.cpp

src/CMakeFiles/my_lib.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/menu.cpp.i"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/menu.cpp > CMakeFiles/my_lib.dir/menu.cpp.i

src/CMakeFiles/my_lib.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/menu.cpp.s"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src/menu.cpp -o CMakeFiles/my_lib.dir/menu.cpp.s

# Object files for target my_lib
my_lib_OBJECTS = \
"CMakeFiles/my_lib.dir/account_manager.cpp.o" \
"CMakeFiles/my_lib.dir/bank_manager.cpp.o" \
"CMakeFiles/my_lib.dir/database_manager.cpp.o" \
"CMakeFiles/my_lib.dir/menu.cpp.o"

# External object files for target my_lib
my_lib_EXTERNAL_OBJECTS =

src/libmy_lib.a: src/CMakeFiles/my_lib.dir/account_manager.cpp.o
src/libmy_lib.a: src/CMakeFiles/my_lib.dir/bank_manager.cpp.o
src/libmy_lib.a: src/CMakeFiles/my_lib.dir/database_manager.cpp.o
src/libmy_lib.a: src/CMakeFiles/my_lib.dir/menu.cpp.o
src/libmy_lib.a: src/CMakeFiles/my_lib.dir/build.make
src/libmy_lib.a: src/CMakeFiles/my_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libmy_lib.a"
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && $(CMAKE_COMMAND) -P CMakeFiles/my_lib.dir/cmake_clean_target.cmake
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/my_lib.dir/build: src/libmy_lib.a
.PHONY : src/CMakeFiles/my_lib.dir/build

src/CMakeFiles/my_lib.dir/clean:
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src && $(CMAKE_COMMAND) -P CMakeFiles/my_lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/my_lib.dir/clean

src/CMakeFiles/my_lib.dir/depend:
	cd /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/src /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src /Users/emrahbayindir/Desktop/cppStudyRepo/Bank-Management-System/build/src/CMakeFiles/my_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/my_lib.dir/depend
