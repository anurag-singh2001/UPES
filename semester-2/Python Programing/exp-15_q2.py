import pandas as pd

read_file = pd.read_excel (r'D:\\backup\\UPES\semester-2\\Python Programing\\xlwt.xlsx')
read_file.to_csv (r'new.csv', index = None, header=True)