# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/apex/cognipilot/cranium/src/synapse_gz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/apex/cognipilot/cranium/build/synapse_gz

# Include any dependencies generated for this target.
include CMakeFiles/synapse_gz.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/synapse_gz.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/synapse_gz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/synapse_gz.dir/flags.make

CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o: CMakeFiles/synapse_gz.dir/flags.make
CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o: /home/apex/cognipilot/cranium/src/synapse_gz/src/synapse_gz.cpp
CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o: CMakeFiles/synapse_gz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/apex/cognipilot/cranium/build/synapse_gz/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o -MF CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o.d -o CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o -c /home/apex/cognipilot/cranium/src/synapse_gz/src/synapse_gz.cpp

CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/apex/cognipilot/cranium/src/synapse_gz/src/synapse_gz.cpp > CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.i

CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/apex/cognipilot/cranium/src/synapse_gz/src/synapse_gz.cpp -o CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.s

CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o: CMakeFiles/synapse_gz.dir/flags.make
CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o: /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/gz_client.cpp
CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o: CMakeFiles/synapse_gz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/apex/cognipilot/cranium/build/synapse_gz/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o -MF CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o.d -o CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o -c /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/gz_client.cpp

CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/gz_client.cpp > CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.i

CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/gz_client.cpp -o CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.s

CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o: CMakeFiles/synapse_gz.dir/flags.make
CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o: /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/tcp_client.cpp
CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o: CMakeFiles/synapse_gz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/apex/cognipilot/cranium/build/synapse_gz/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o -MF CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o.d -o CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o -c /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/tcp_client.cpp

CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/tcp_client.cpp > CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.i

CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/apex/cognipilot/cranium/src/synapse_gz/src/clients/tcp_client.cpp -o CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.s

# Object files for target synapse_gz
synapse_gz_OBJECTS = \
"CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o" \
"CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o" \
"CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o"

# External object files for target synapse_gz
synapse_gz_EXTERNAL_OBJECTS =

synapse_gz: CMakeFiles/synapse_gz.dir/src/synapse_gz.cpp.o
synapse_gz: CMakeFiles/synapse_gz.dir/src/clients/gz_client.cpp.o
synapse_gz: CMakeFiles/synapse_gz.dir/src/clients/tcp_client.cpp.o
synapse_gz: CMakeFiles/synapse_gz.dir/build.make
synapse_gz: /home/apex/cognipilot/cranium/install/synapse_tinyframe/lib/libsynapse_tinyframe.a
synapse_gz: /home/apex/cognipilot/cranium/install/synapse_protobuf/lib/libsynapse_protobuf.a
synapse_gz: /opt/ros/humble/lib/librclcpp.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
synapse_gz: /usr/lib/x86_64-linux-gnu/libprotobuf.so
synapse_gz: /opt/ros/humble/lib/liblibstatistics_collector.so
synapse_gz: /opt/ros/humble/lib/librcl.so
synapse_gz: /opt/ros/humble/lib/librmw_implementation.so
synapse_gz: /opt/ros/humble/lib/libament_index_cpp.so
synapse_gz: /opt/ros/humble/lib/librcl_logging_spdlog.so
synapse_gz: /opt/ros/humble/lib/librcl_logging_interface.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
synapse_gz: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
synapse_gz: /opt/ros/humble/lib/librcl_yaml_param_parser.so
synapse_gz: /opt/ros/humble/lib/libyaml.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
synapse_gz: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
synapse_gz: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
synapse_gz: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
synapse_gz: /opt/ros/humble/lib/librmw.so
synapse_gz: /opt/ros/humble/lib/libfastcdr.so.1.0.24
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
synapse_gz: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
synapse_gz: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
synapse_gz: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
synapse_gz: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
synapse_gz: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
synapse_gz: /opt/ros/humble/lib/librosidl_typesupport_c.so
synapse_gz: /opt/ros/humble/lib/librcpputils.so
synapse_gz: /opt/ros/humble/lib/librosidl_runtime_c.so
synapse_gz: /opt/ros/humble/lib/librcutils.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libpython3.10.so
synapse_gz: /opt/ros/humble/lib/libtracetools.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libgz-transport13.so.13.2.0
synapse_gz: /usr/lib/x86_64-linux-gnu/libgz-msgs10.so.10.1.2
synapse_gz: /usr/lib/x86_64-linux-gnu/libgz-math7.so.7.4.0
synapse_gz: /usr/lib/x86_64-linux-gnu/libgz-utils2.so.2.2.0
synapse_gz: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libprotobuf.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libuuid.so
synapse_gz: /usr/lib/x86_64-linux-gnu/libuuid.so
synapse_gz: CMakeFiles/synapse_gz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/apex/cognipilot/cranium/build/synapse_gz/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable synapse_gz"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/synapse_gz.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/synapse_gz.dir/build: synapse_gz
.PHONY : CMakeFiles/synapse_gz.dir/build

CMakeFiles/synapse_gz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/synapse_gz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/synapse_gz.dir/clean

CMakeFiles/synapse_gz.dir/depend:
	cd /home/apex/cognipilot/cranium/build/synapse_gz && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/apex/cognipilot/cranium/src/synapse_gz /home/apex/cognipilot/cranium/src/synapse_gz /home/apex/cognipilot/cranium/build/synapse_gz /home/apex/cognipilot/cranium/build/synapse_gz /home/apex/cognipilot/cranium/build/synapse_gz/CMakeFiles/synapse_gz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/synapse_gz.dir/depend

