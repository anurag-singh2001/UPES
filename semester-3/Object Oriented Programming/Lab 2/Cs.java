class Student {
   String name, city;
   int age;
   static int m;

   void printData() {
      System.out.println("Student name = " + name);
      System.out.println("Student city  = " + city);
      System.out.println("Student age = " + age);
   }
}

class Cs {
   public static void main(String args[]) {
      Student s1 = new Student();
      Student s2 = new Student();
      s1.name = "Amit";
      s1.city = "Dehradun";
      s1.age = 22;
      s2.name = "Kapil";
      s2.city = "Delhi";
      s2.age = 23;
      s2.printData();
      s1.printData();
      Student.m = 20;
      System.out.println("s1.m = " + Student.m);
      Student.m = 22;
      System.out.println("s2.m = " + Student.m);
      Student.m = 27;
      System.out.println("Student.m = " + Student.m);
   }
}

// class Student
// {
// String name, city;
// int age;
// public void getData(String x, String y, int t)
// {
// name=x;
// city=y;
// age=t;
// }
// public void printData()
// {
// System.out.println("Student name = "+name);
// System.out.println("Student city = "+city);
// System.out.println("Student age = "+age);
// }
// }
// class Cs
// {
// public static void main(String args[])
// {
// Student s1=new Student();
// Student s2=new Student();
// s2.getData("Kapil","Delhi",23);
// s2.printData();
// s1.getData("Amit","Dehradun",22);
// s1.printData();
// }
// }
