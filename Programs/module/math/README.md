g++ -std=c++20 -fmodules-ts -x c++ -c math.cppm
g++ -std=c++20 -fmodules-ts -x c++ -c math.cpp
g++ -std=c++20 -fmodules-ts main.cpp math.o -o myexe


// in gcc there is no full support of mudule ..
// in msvc complete support avilable

//gcm = gcc compiled module