import subprocess
import os

def execute_cpp():
    s = subprocess.check_call("g++ hello.cpp -o out1;./out1", shell = True) 
    print(", return code", s)

def main():
    execute_cpp()

main()