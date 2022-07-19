import matplotlib.pyplot as plt
import numpy as np

# read files
import time


data = [[],[],[]]
for i in range(4,17):
    f = open(f'output/random/{i}.out', 'r')
    for j in range(3):
        algo, comps = f.readline().strip().split(': ')
        data[j].append(float(comps))
    f.close()


# fig = plt.subplots(figsize =(12, 8))

X = np.arange(13)
plt.bar(X+0.00, data[0], color='b', width=0.25, label="Prime")
plt.bar(X+0.25, data[1], color='g', width=0.25, label="Insertion")
plt.bar(X+0.50, data[2], color='r', width=0.25, label="Shell")

plt.xlabel('Array size', fontweight ='bold', fontsize = 15)
plt.ylabel('Average Comparisons', fontweight ='bold', fontsize = 15)
plt.xticks(X+0.25,
        list(range(4,17)))

plt.legend()
plt.show()