import numpy as np
from sklearn.datasets import make_regression
from sklearn.linear_model import LinearRegression

X,t = make_regression(100, 5, shuffle=True, bias=0.9, noise=5, random_state=3, n_targets = 2)
x0 = np.array([[1.0 for i in range(100)]])
x0 = np.transpose(x0)
X = np.concatenate((x0,X),axis =1)

#w = (X^TX)^-1 * X^T*t

# (X^T)
X_transpose = np.transpose(X)
# (X^TX)^-1
Xproduct_inverse = np.linalg.inv(np.matmul(X_transpose,X))
# X^T*t
Xt_multiplication = np.matmul(X_transpose,t)
# w 
w = np.matmul(Xproduct_inverse, Xt_multiplication)
print("\nw = (X^TX)^-1 * X^T*t\n")
print(w)

#Using LinearRegression()
reg = LinearRegression().fit(X,t)
print("\nRegression coefficient: ")
print(reg.coef_)
print("\nRegression Intercept:")
print(reg.intercept_)