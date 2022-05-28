# -*- coding: utf-8 -*-
"""
Created on Tue Feb 15 13:09:38 2022

@author: user
"""

from sklearn.model_selection import train_test_split
from sklearn.datasets import make_regression
from sklearn.linear_model import LinearRegression,Ridge
from sklearn.metrics import r2_score
from matplotlib import pyplot as plt


noise_list=[0,10,20,30,40,50,60,70,80]

'''   Linear Regression   '''
train_r2_list = []
test_r2_list = []
'''   Ridge   '''
train_r2_list_ridge = []
test_r2_list_ridge = []

for n in noise_list:
    
    X,T = make_regression(100,1,n_targets=1,noise=n,random_state=5)
    x_train,x_test,y_train,y_test = train_test_split(X,T,test_size=0.3,shuffle =True,random_state=3)
    
    reg = LinearRegression().fit(x_train,y_train)
    ridge = Ridge(alpha = 5)
    ridge.fit(x_train,y_train)
    
    train_predict = reg.predict(x_train)
    test_predict = reg.predict(x_test)
    
    train_r2 = r2_score(y_train,train_predict)
    test_r2 = r2_score(y_test,test_predict)
   
    train_r2_list.append(train_r2)
    test_r2_list.append(test_r2)
    
    train_predict_ridge = ridge.predict(x_train)
    test_predict_ridge = ridge.predict(x_test)
    
    train_r2_ridge = r2_score(y_train,train_predict_ridge)
    test_r2_ridge = r2_score(y_test,test_predict_ridge)
    
    train_r2_list_ridge.append(train_r2_ridge)
    test_r2_list_ridge.append(test_r2_ridge)

    
print("train_r2_list",train_r2_list)
print("test_r2_list",test_r2_list)
print("train_r2_list_ridge",train_r2_list_ridge)
print("test_r2_list_ridge",test_r2_list_ridge)    
plt.xlabel("Noise")
plt.ylabel("R2")

plt.plot(noise_list,train_r2_list,color="Blue")
plt.plot(noise_list,test_r2_list,color="Yellow")

plt.plot(noise_list,train_r2_list_ridge,color="Red")
plt.plot(noise_list,test_r2_list_ridge ,color="Green")

plt.show()