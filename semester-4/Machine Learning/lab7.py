# -*- coding: utf-8 -*-
"""
Created on Tue Mar 22 10:37:26 2022

@author: user
"""
#%%
import pandas
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.ensemble import AdaBoostClassifier

data = {'CGPA':['g9','l9','g9','l9','g9'],
        'Inter':['Y','N','N','N','Y'],
        'PK':['++','==','==','==','=='],
        'CS':['G','G','A','A','G'],
        'Job':['Y','Y','N','N','Y']}

table=pandas.DataFrame(data,columns=["CGPA","Inter","PK","CS","Job"])
encoder=LabelEncoder()
for i in table:
    table[i]=encoder.fit_transform(table[i])

X=table.iloc[:,0:4].values
t=table.iloc[:,4].values

X_train,X_test,t_train,t_test=train_test_split(X,t,test_size=0.2,random_state=2)


clf = AdaBoostClassifier(n_estimators=100, random_state=0)
clf.fit(X_train,t_train)

pred=clf.predict(X_test)
from sklearn.metrics import accuracy_score
accuracy=accuracy_score(t_test,pred)
print("Accuracy using AdaBoost",accuracy)

#%%

from sklearn.ensemble import RandomForestRegressor
from sklearn.datasets import make_regression
from sklearn.model_selection import train_test_split

x,t=make_regression(10000,5,bias=0.2,noise=0,random_state= 40,shuffle=True)
x_train,x_test,y_train,y_test=train_test_split(x,t,test_size=0.3,random_state=40,shuffle=True)

reg=RandomForestRegressor(n_estimators = 100, random_state = 0).fit(x_train,y_train)
pred=reg.predict(x_test)

from sklearn.metrics import r2_score
accuracy=r2_score(y_test,pred)
print("Accuracy using RandomForestRegressor",accuracy)

#%%
from sklearn.metrics import accuracy_score
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn import tree
import pandas

data = {'CGPA':['g9','l9','g9','l9','g9'],
        'Inter':['Y','N','N','N','Y'],
        'PK':['++','==','==','==','=='],
        'CS':['G','G','A','A','G'],
        'Job':['Y','Y','N','N','Y']}

table=pandas.DataFrame(data,columns=["CGPA","Inter","PK","CS","Job"])
encoder=LabelEncoder()
for i in table:
    table[i]=encoder.fit_transform(table[i])
X=table.iloc[:,0:4].values
t=table.iloc[:,4].values

X_train,X_test,t_train,t_test=train_test_split(X,t,test_size=0.1,random_state=2)
 
model = tree.DecisionTreeClassifier(max_depth = 2, random_state = 0)
model = model.fit(X_train, t_train)

predicted_value = model.predict(X_test)

print(predicted_value)

tree.plot_tree(model)


from sklearn.metrics import accuracy_score
accuracy = accuracy_score(t_test, predicted_value)
print("Accuracy using DecisionTreeClassifier: ",accuracy)

#%%



