import os
from subprocess import Popen, PIPE

p = Popen(["./proc.out"], shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE)

for ii in range(10):
    value = input(">") + '\n'
    value = bytes(value, 'UTF-8')  # Needed in Python 3.
    p.stdin.write(value)
    p.stdin.flush()
    result = p.stdout.readline().strip()
    if not result:
        break
    print(result)


# for ii in range(10):
#     value = str(ii) + '\n'
#     value = bytes("CMD"+value, 'UTF-8')  # Needed in Python 3.
#     p.stdin.write(value)
#     p.stdin.flush()
#     result = p.stdout.readline().strip()
#     print(result)