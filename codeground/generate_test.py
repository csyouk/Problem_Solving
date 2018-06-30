import sys
from random import randint

orig_stdout = sys.stdout
f = open('testset.txt', 'w')
sys.stdout = f

print(100000)
for i in range(1, 100001):
  print(randint(0,9)),
##    print(1),
sys.stdout = orig_stdout
f.close()

