# class Vechile:
#     max_speed=150
#     mileage=25
#     # name = "Volvo"
#     def seating_capacity(cap,na):
#         return f"The seating capacity of a {self.na} is {self.cap} passengers"


# class Bus(Vechile):
#     name="volvo"
#     capacity=50
#     def __init__(self): 
#         super().__init__()
#         print("Initializing Employee...\n")
#     def display(self):
        
#         print(self.name, ' ', self.capacity)
#         b=seating_capacity(self.capacity,self.name)
#         print(b)

# a=Bus()
# a.display()
# print("ggh")

# class Vehicle:
#     def __init__(self, name, max_speed, mileage):
#         self.name = name
#         self.max_speed = max_speed
#         self.mileage = mileage

#     def seating_capacity(self, capacity):
#         return f"The seating capacity of a {self.name} is {capacity} passengers and mileage is {self.mileage} and speed is {self.max_speed}"

# class Bus(Vehicle):
#     def seating_capacity(self, capacity=50):
#         return super().seating_capacity(capacity=50)

# School_bus = Bus("School Volvo", 180, 12)
# print(School_bus.seating_capacity())

# class Vehicle:
#     # Class attribute
#     color = "White"

#     def __init__(self, name, max_speed, mileage):
#         self.name = name
#         self.max_speed = max_speed
#         self.mileage = mileage

# class Bus(Vehicle):
#     pass

# class Car(Vehicle):
#     pass

# School_bus = Bus("School Volvo", 180, 12)
# print(School_bus.color, School_bus.name, "Speed:", School_bus.max_speed, "Mileage:", School_bus.mileage)

# car = Car("Audi Q5", 240, 18)
# print(car.color, car.name, "Speed:", car.max_speed, "Mileage:", car.mileage)

class Vehicle:

    def __init__(self, name,max_speed,mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
        
    def attributes(self):
        print("\n-----------------------------------------------------------------------\n")
        print("Vehicle attributes...\n")
        print("Model name...",self.name)
        print("\nTop speed...",self.max_speed)
        print("\nMileage...",self.mileage)

    def seating_capacity(self,capacity):

        print("\n-----------------------------------------------------------------------\n")
        
        print("Seating capacity... \n")
        return (f"The Seating capacity of {self.name} is {capacity} passengers")

class Bus(Vehicle):

    print("\n-----------------------------------------------------------------------\n")     
    print("Please provide vehicle information...\n")
        
    name = input("Enter name of vehicle... ")
    max_speed = int(input("\nTop speed for " + name + "... "))
    mileage = int(input("\nMileage " + name + " offer" "... "))
    capacity = int(input("\nEnter caapcity of " + name + "... "))
    

    bus = Vehicle(name,max_speed,mileage)

    Vehicle.attributes(bus)
    seats = Vehicle.seating_capacity(bus,capacity)
    print(seats)


class colour:

    def __init__(self, vehicle_colour='White'):
        
        self.vehicle_colour = vehicle_colour 
    

    def colours(self):    
        print("\n-----------------------------------------------------------------------\n")
        
        print("Please pay your kind attention... \n")
        print (f"The Mandatory colour of every vehicle is {self.vehicle_colour}...")


class colours(colour):
       
    vehicle_colour = colour() 
    colour.colours(vehicle_colour)


    print("\nEnd of program...")
    
    print("\n-----------------------------------------------------------------------\n")
