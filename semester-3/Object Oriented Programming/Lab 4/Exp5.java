import java.util.Scanner;
class Employee{
    String name;
    int empid;
    double salary;
    Employee(){
        name = "Anurag";
        empid = 10001;
        salary = 150000.0;
    }
    Employee(String name, int empid,double salary){
        this.name = name;
        this.empid = empid;
        this.salary = salary;
    }
    void increaseSalary(double raise){
        double new_salary;
        new_salary = salary+ salary*(raise/100);
        System.out.print("The new revised salary of the employee is: " + new_salary);
    }
    void show(){
        System.out.printf("Name: %s\nempid: %d\nsalary: %.2f\n",name,empid,salary);
    }
}

class Manager extends Employee{
    String department;
    Manager(String name, int empid,double salary,String department){
        super(name,empid,salary);
        this.department = department;
    }
    void show(){
        System.out.println("\nManager Class");
        System.out.printf("Name: %s\nempid: %d\nsalary: %.2f\ndepartment: %s\n",name,empid,salary,department);
    }
}

public class Exp5 {
    public static void main(String[] args) {
        int raise;
        Scanner in = new Scanner(System.in);
        Employee e1 = new Employee();
        e1.show();
        System.out.print("Enter the Percentage of raise to the employee: ");
        raise = in.nextInt();
        e1.increaseSalary(raise);
        Employee e2 = new Manager("Arnav",10002,120000,"Management");
        e2.show();
    }
}