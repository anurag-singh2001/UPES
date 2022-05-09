from itertools import permutations

def distance(p1,p2):

 return ((p1[0]-p2[0])**2+(p1[1]-p2[1])**2)**0.5

print(distance([5,2],[5,7]))



def all_distance(points):

 return sum([distance(point,points[index+1]) for index,point in enumerate(points[:-1])])

print(all_distance([[5,2],[3,6],[3,3],[7,4]]))

def traveling_salesman(points,start=None):
    if start is None:
        start = points[0]
    return min([perm for perm in permutations(points) if perm[0] == start],key=all_distance)



test_list=["A","B","C","D"]

test_per=permutations(test_list)

for perm in test_per:

 print(perm)

 import datetime

def main():

 points=[[0,0],[1,5.7],[2,3],[3,7],[0.5,9],[9,1],[10,5],[20,5],[12,12],[20,19],[25,6],[23,7]]

 points=points[:-4]

 current_time=datetime.datetime.now()

 result=traveling_salesman(points)

 final_result=all_distance(result)

 end_time=datetime.datetime.now()

 print("total time taken in calculating minimum distance is:",current_time-end_time)
 print(final_result)
 print(result)
 
 
if __name__=='__main__':
     main()
