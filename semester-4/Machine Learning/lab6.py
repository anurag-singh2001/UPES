# -*- coding: utf-8 -*-
"""
Created on Tue Feb 22 13:18:13 2022

@author: user
"""

from sklearn.datasets import make_classification
from sklearn.model_selection import train_test_split
import numpy as np
x,t=make_classification(100,5,n_classes=2,shuffle=True,random_state=4)
x_train,x_test,y_train,y_test = train_test_split(x,t,test_size=0.3,shuffle =True,random_state=3)

x_t=x.transpose()
res=np.dot(x_t,x)
inverse=np.linalg.inv(res)
res_1=np.dot(x_t,t)
w=np.dot(inverse,res_1)
print("weight",w)
