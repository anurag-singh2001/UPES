stamps=["India","Australia","Bangladesh","Belgium","Dubai","Bhutan","India","India","Shrilanka","Dubai","Pakisthan","Belgium","Canada","Canada","Chile","Dubai"]
distinct_list=[]
for i in stamps:
    if i not in distinct_list:
        distinct_list.append(i)

print("The total number of distinct Country stamps are:", len(distinct_list))
