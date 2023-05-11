# CMake generated Testfile for 
# Source directory: /home/sra123456/cp/githubtest/SJTU CP2022-23
# Build directory: /home/sra123456/cp/githubtest/SJTU CP2022-23/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_misc1 "test_misc1")
set_tests_properties(test_misc1 PROPERTIES  _BACKTRACE_TRIPLES "/home/sra123456/cp/githubtest/SJTU CP2022-23/CMakeLists.txt;44;add_test;/home/sra123456/cp/githubtest/SJTU CP2022-23/CMakeLists.txt;0;")
add_test(test_misc2 "test_misc2")
set_tests_properties(test_misc2 PROPERTIES  _BACKTRACE_TRIPLES "/home/sra123456/cp/githubtest/SJTU CP2022-23/CMakeLists.txt;50;add_test;/home/sra123456/cp/githubtest/SJTU CP2022-23/CMakeLists.txt;0;")
add_test(test_Ising_honeycomb "test_Ising_honeycomb")
set_tests_properties(test_Ising_honeycomb PROPERTIES  _BACKTRACE_TRIPLES "/home/sra123456/cp/githubtest/SJTU CP2022-23/CMakeLists.txt;56;add_test;/home/sra123456/cp/githubtest/SJTU CP2022-23/CMakeLists.txt;0;")
subdirs("UnitTests/Catch2")
