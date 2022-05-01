dic={}
count=0
with open("rhyme.txt","r")as f:
    for str in f:
        str=str.strip()
        str=str.upper()
        words=str.split(" ")
        for word in words:
            if word in dic:
                dic[word]=dic[word] + 1
            else:
                dic[word]=1
for key in list(dic.keys()):
    print(key,":", dic[key])
    count=count+dic[key]
print("Total words:",count)
        