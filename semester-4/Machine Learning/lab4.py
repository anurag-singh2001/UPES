# -*- coding: utf-8 -*-
"""
Created on Tue Feb 15 11:15:04 2022

@author: user
"""
from sklearn.datasets import make_regression
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plt
noise_select = [0,10,50]
scoreR2_1=[]
scoreR2_2=[]

for i in range (0, len(noise_select)):
    X,t = make_regression(100,1, shuffle=True, random_state=1, noise = noise_select[i])
    X_train, X_test, t_train, t_test = train_test_split(X, t, test_size=0.33, random_state=2, shuffle = True)
    reg =LinearRegression().fit(X_train,t_train)
    t_train_pred = reg.predict(X_train)
    t_test_pred = reg.predict(X_test)
    r2score_1 = r2_score(t_train, t_train_pred)
    scoreR2_1.append(r2score_1)
    r2score_2 = r2_score(t_test, t_test_pred)
    scoreR2_2.append(r2score_2)

print()
print(scoreR2_1)
print(scoreR2_2)
print()
plt.xlabel
plt.plot(noise_select, scoreR2_1, color = "red")
plt.plot(noise_select, scoreR2_2, color = "blue")
plt.show()

