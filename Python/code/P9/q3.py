# Write a program to display a graph for ReLU (Rectified Linear Unit) function. ReLU
# function is defined as below:
# 𝑦=𝑚𝑎𝑥 (0,𝑥)

import numpy as np
import matplotlib.pyplot as plt

x = np.array([-5, 5])
y = np.maximum(0,x)

plt.plot(x, y, label="ReLU function: y = max(0, x)", color="blue")
plt.title("ReLU (Rectified Linear Unit) Function")
plt.xlabel("x")
plt.ylabel("y")
plt.grid()
plt.legend()
plt.show()
