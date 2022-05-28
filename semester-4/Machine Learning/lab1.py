# -*- coding: utf-8 -*-
"""
Created on Mon Apr 11 10:33:28 2022

@author: user
"""

from sklearn.datasets import make_regression
import numpy as np
import matplotlib.pyplot as plt

x,t=make_regression(100,1,shuffle=True,bias=0,noise=0,random_state=5)
print("x max",x.max())
print("t max",t.max())
print("t mean",np.mean(t))
print("x mean",np.mean(x))
print("t standard devation",np.std(t))
plt.scatter(x,t)
plt.show()
temp_x=x.squeeze()
m=(np.sum((temp_x-np.mean(temp_x)))*np.sum((t-np.mean(t))))/((np.sum((x-np.mean(temp_x))))**2)
c=np.mean(t)-(m*np.mean(temp_x))
print(m,c)
