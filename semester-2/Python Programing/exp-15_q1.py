import xlwt
from xlwt import Workbook

wb = Workbook()

sheet1 = wb.add_sheet('Sheet 1')

sheet1.write(0, 0, 'GOOGLE')
sheet1.write(1, 0, 'WMT')
sheet1.write(2, 0, 'MSFT')
sheet1.write(3, 0, 'RIL')
sheet1.write(4, 0, 'TATA')

sheet1.write(0, 1, 27.82)
sheet1.write(1, 1, 4.61)
sheet1.write(2, 1, -1)
sheet1.write(3, 1, 'not available')
sheet1.write(4, 1, 5.6)

sheet1.write(0, 2, 87)
sheet1.write(1, 2, 484)
sheet1.write(2, 2, 85)
sheet1.write(3, 2, 50)
sheet1.write(4, 2, -1)

sheet1.write(0, 3, 'larry page')
sheet1.write(1, 3, 'n.a.')
sheet1.write(2, 3, 'bill gates')
sheet1.write(3, 3, 'mukesh ambani')
sheet1.write(4, 3, 'ratan tata')

wb.save('new.csv')
