# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/marsupial/marsupial/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marsupial/marsupial/build

# Include any dependencies generated for this target.
include gscam/CMakeFiles/gscam_node.dir/depend.make

# Include the progress variables for this target.
include gscam/CMakeFiles/gscam_node.dir/progress.make

# Include the compile flags for this target's objects.
include gscam/CMakeFiles/gscam_node.dir/flags.make

gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o: gscam/CMakeFiles/gscam_node.dir/flags.make
gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o: /home/marsupial/marsupial/src/gscam/src/gscam_node.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marsupial/marsupial/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o"
	cd /home/marsupial/marsupial/build/gscam && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o -c /home/marsupial/marsupial/src/gscam/src/gscam_node.cpp

gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gscam_node.dir/src/gscam_node.cpp.i"
	cd /home/marsupial/marsupial/build/gscam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marsupial/marsupial/src/gscam/src/gscam_node.cpp > CMakeFiles/gscam_node.dir/src/gscam_node.cpp.i

gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gscam_node.dir/src/gscam_node.cpp.s"
	cd /home/marsupial/marsupial/build/gscam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marsupial/marsupial/src/gscam/src/gscam_node.cpp -o CMakeFiles/gscam_node.dir/src/gscam_node.cpp.s

gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.requires:
.PHONY : gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.requires

gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.provides: gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.requires
	$(MAKE) -f gscam/CMakeFiles/gscam_node.dir/build.make gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.provides.build
.PHONY : gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.provides

gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.provides.build: gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o

# Object files for target gscam_node
gscam_node_OBJECTS = \
"CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o"

# External object files for target gscam_node
gscam_node_EXTERNAL_OBJECTS =

/home/marsupial/marsupial/devel/lib/gscam/gscam: gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o
/home/marsupial/marsupial/devel/lib/gscam/gscam: gscam/CMakeFiles/gscam_node.dir/build.make
/home/marsupial/marsupial/devel/lib/gscam/gscam: /home/marsupial/marsupial/devel/lib/libgscam.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libimage_transport.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libmessage_filters.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libnodeletlib.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libbondcpp.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libuuid.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libtinyxml.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libclass_loader.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/libPocoFoundation.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libdl.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libroslib.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libcamera_calibration_parsers.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libcamera_info_manager.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libroscpp.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libboost_signals.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libboost_filesystem.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/librosconsole.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/liblog4cxx.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libboost_regex.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/librostime.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libboost_date_time.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /opt/ros/indigo/lib/libcpp_common.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libboost_system.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libboost_thread.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libpthread.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: /usr/lib/i386-linux-gnu/libconsole_bridge.so
/home/marsupial/marsupial/devel/lib/gscam/gscam: gscam/CMakeFiles/gscam_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/marsupial/marsupial/devel/lib/gscam/gscam"
	cd /home/marsupial/marsupial/build/gscam && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gscam_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gscam/CMakeFiles/gscam_node.dir/build: /home/marsupial/marsupial/devel/lib/gscam/gscam
.PHONY : gscam/CMakeFiles/gscam_node.dir/build

gscam/CMakeFiles/gscam_node.dir/requires: gscam/CMakeFiles/gscam_node.dir/src/gscam_node.cpp.o.requires
.PHONY : gscam/CMakeFiles/gscam_node.dir/requires

gscam/CMakeFiles/gscam_node.dir/clean:
	cd /home/marsupial/marsupial/build/gscam && $(CMAKE_COMMAND) -P CMakeFiles/gscam_node.dir/cmake_clean.cmake
.PHONY : gscam/CMakeFiles/gscam_node.dir/clean

gscam/CMakeFiles/gscam_node.dir/depend:
	cd /home/marsupial/marsupial/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marsupial/marsupial/src /home/marsupial/marsupial/src/gscam /home/marsupial/marsupial/build /home/marsupial/marsupial/build/gscam /home/marsupial/marsupial/build/gscam/CMakeFiles/gscam_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gscam/CMakeFiles/gscam_node.dir/depend
