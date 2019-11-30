from subprocess import Popen, PIPE

p = Popen(["./basic.out"], shell=True, stdin=PIPE, stdout=PIPE, stderr=PIPE)

for ii in range(10):
    value = str(ii) + '\n'
    value = bytes(value, 'UTF-8')  # Needed in Python 3.
    p.stdin.write(value)
    p.stdin.flush()
    result = p.stdout.readline().strip()
    print(result)