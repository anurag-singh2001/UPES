# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
#%%
from sklearn.datasets import make_regression
import numpy as np


x,t=make_regression(100,5,shuffle=True,bias=0,noise=0,random_state=5)
x_t=x.transpose()

res=np.dot(x_t,x)
inverse=np.linalg.inv(res)

res_1=np.dot(x_t,t)

w=np.dot(inverse,res_1)
w=1.00+w

print("weight calculated using formula",w)
#%%

#%%
from sklearn.linear_model import LinearRegression
model=LinearRegression().fit(x,t)
print("weight calculated using sklearn linear model",model.coef_)
print(model.intercept_)
#%%

