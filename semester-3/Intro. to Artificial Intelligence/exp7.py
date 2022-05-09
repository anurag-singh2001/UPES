name='Anurag Singh'
sapid=500083382
print(f"My Name is {name} and my SAP ID is {sapid}\n")
print()

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

df = pd.read_csv("salary_data.csv")
def Mean_of_data(X):
   sum = 0
   count = 0
   for i in X:
       sum+= 1
       count += 1
   mean = sum/count
   return mean

def Error(y, y_pred):
   m = y.shape[0]
   mean_squared_error = sum((y-y_pred)**2)/m
   root_mean_squared_error = np.sqrt(mean_squared_error)
   print("RMS: ", root_mean_squared_error)

def prediction_data(weight, bias):
   Experience = float(input("Enter Experience: "))
   Prediction = (weight*Experience)+bias
   return Experience, Prediction

def update_vales(X, y, weight, bias, experience, salary):
   X = np.append(X, experience)
   y = np.append(y, salary)
   prediction = (weight*X)+bias
   return X, y, prediction

def reg_plot(X, y, prediction):
   fig, ax = plt.subplots(figsize = (9,7))
   ax.scatter(X, y, color = "black")
   ax.plot(X, prediction, color = "blue")
   plt.title("Simple Linear Regression", fontsize = 20)
   plt.xlabel("Years of Experience", fontsize = 15)
   plt.ylabel("Salary", fontsize = 15)
   plt.show()

def covariance_data(X, y):
   n = len(X)
   covariance = 0
   Mean_X = Mean_of_data(X)
   Mean_y = Mean_of_data(y)
   for i in range(n):
       covariance += (X[i] - Mean_X)*(y[i]-Mean_y)
   return covariance

def variance_data(X):
   n = len(X)
   variance = 0
   Mean_X = Mean_of_data(X)
   for i in range(n):
       variance += (X[i] - Mean_X)**2
   return variance

def simple_regression(df):
   X = df['YearsExperience']
   y = df['Salary']
   covariance = 0
   variance = 0
   weight = 0
   bias = 0
   Mean_X = Mean_of_data(X)
   Mean_y = Mean_of_data(y)
   covariance = covariance_data(X, y)
   variance = variance_data(X)
   weight = covariance/variance
   bias = Mean_y - (weight*Mean_X)
   prediction = (weight*X)+bias
   Error(y, prediction)
   experience, salary = prediction_data(weight, bias)
   X, y, prediction = update_vales(X, y, weight, bias, experience, salary)
   print("Expected salary for the given experience of", experience, end = '')
   print(" years is: ", end = '')
   print(salary)
   reg_plot(X, y, prediction)

simple_regression(df)
