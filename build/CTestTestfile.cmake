# CMake generated Testfile for 
# Source directory: /home/lynn1289/桌面/code/MC
# Build directory: /home/lynn1289/桌面/code/MC/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_misc1 "test_misc1")
set_tests_properties(test_misc1 PROPERTIES  _BACKTRACE_TRIPLES "/home/lynn1289/桌面/code/MC/CMakeLists.txt;44;add_test;/home/lynn1289/桌面/code/MC/CMakeLists.txt;0;")
add_test(test_misc2 "test_misc2")
set_tests_properties(test_misc2 PROPERTIES  _BACKTRACE_TRIPLES "/home/lynn1289/桌面/code/MC/CMakeLists.txt;50;add_test;/home/lynn1289/桌面/code/MC/CMakeLists.txt;0;")
add_test(test_Ising_Kagome "test_Ising_Kagome")
set_tests_properties(test_Ising_Kagome PROPERTIES  _BACKTRACE_TRIPLES "/home/lynn1289/桌面/code/MC/CMakeLists.txt;56;add_test;/home/lynn1289/桌面/code/MC/CMakeLists.txt;0;")
subdirs("UnitTests/Catch2")
