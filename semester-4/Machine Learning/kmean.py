# -*- coding: utf-8 -*-
"""
Created on Tue Apr  5 13:29:38 2022

@author: user
"""

from sklearn.datasets import make_regression
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.datasets import make_classification
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

x,t=make_classification(1000,random_state= 1,shuffle=True,n_clusters_per_class=1, n_informative=2,n_features=2,n_redundant=0)
kmeans = KMeans(n_clusters=2, random_state=0,n_init=1).fit(x)
label=kmeans.predict(x)
print(label)
centers = kmeans.cluster_centers_
plt.scatter(x[:, 0], x[:, 1], c=label,  cmap='viridis')
plt.scatter(centers[:, 0], centers[:, 1], c='black', s=200, alpha=0.5);
plt.show()





