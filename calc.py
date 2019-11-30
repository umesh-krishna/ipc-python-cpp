import subprocess
import os

data, temp = os.pipe()
op = input("Enter Operation(ADD/SUB): ")
a = input("Enter First Number: ")
b = input("Enter Second Number: ")
os.write(temp, bytes("%s\n%s\n%s\n" % (op, a, b), encoding="utf-8"))
os.close(temp)
p = subprocess.check_output("g++ calc.cpp -o out2;./out2", stdin=data, shell=True)
print("Raw Result: ", p)
print("Result: ", int(p))