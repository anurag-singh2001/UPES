def check_baggage(baggage_weight):
    if baggage_weight>=0 and baggage_weight<=40:
        print(True)
        return True
    else:
        print(False)
        return False
def check_immigration(expiry_year):
    if expiry_year>=2030 and expiry_year<=2050:
        print(True)
        return True
    else:
        print(False)
        return False
def check_security(noc_status):
    if noc_status=="valid" or  noc_status=="VALID":
        print(True)
        return True
    else:
        print(False)
        return False
def traveler():
    tid=int(input("enter the traveler Id:"))
    tname=input("enter the traveler Name:")
    bw=int(input("enter weight of the baggage:"))
    ey=int(input("enter year:"))
    nocs=input("enter valid if noc status is valid:")
    check_baggage(bw)
    check_immigration(ey)
    check_security(nocs)
    if(check_baggage and check_immigration and check_security):
        print("Allow Traveler to ﬂy!")
        print(tname)
        print(tid)
    else:
        print("Detain Traveler for Re-checking!")    
traveler()
