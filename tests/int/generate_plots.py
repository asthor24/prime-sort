import matplotlib.pyplot as plt
import numpy as np
import sys

# read files
import time

log_scale = False
array_sizes = list(range(4,17))
if len(sys.argv) >= 2:
    if sys.argv[1] == "small":
        pass
    else:
        log_scale = True
        array_sizes = [1 << i for i in range(4,13)]
        

data = [[],[],[]]
for i in array_sizes:
    f = open(f'output/random/{i}.out', 'r')
    for j in range(3):
        algo, comps = f.readline().strip().split(': ')
        data[j].append(float(comps))
    f.close()


X = np.arange(len(array_sizes))
plt.bar(X+0.00, data[0], color='b', width=0.25, label="Prime")
plt.bar(X+0.25, data[1], color='g', width=0.25, label="Insertion")
plt.bar(X+0.50, data[2], color='r', width=0.25, label="Shell")

plt.xlabel('Array size', fontweight ='bold', fontsize = 15)
plt.ylabel('Average Comparisons', fontweight ='bold', fontsize = 15)
if log_scale:
    plt.yscale("log")
plt.xticks(X+0.25,
        array_sizes)

plt.legend()
plt.show()