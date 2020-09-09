This project demonstrates interprocess communication between Python and C/C++ processes using PIPE.

#1 helloWorld
hello.py, hello.cpp

#2 basic
compile: g++ process_cpp -o basic.out
execute: python3 basic.py

#3 advanced
compile: g++ process_cpp -o proc.out
execute: python3 process_py.py
