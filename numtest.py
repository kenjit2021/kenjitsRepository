import numpy as np #
import matplotlib.pyplot as plt #

arr=np.array([10,20,30,40,50])
print(arr)
print(arr*2)
x=np.arange(-np.pi,np.pi,np.pi/50)
sin_y=np.sin(x)
cos_y=np.cos(x)

plt.plot(x,sin_y)
plt.plot(x,cos_y)
plt.show()

