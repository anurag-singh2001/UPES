package com.samar;

import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Vector;

//First way to use the Comparable Interface to use the Sort() of the Collection
/*
class Student implements Comparable<Student>{
    private int id;

    public Student(int id){
        this.id = id;
    }

    public int getId(){
        return this.id;
    }

    public String toString(){
        return "Student [ "+ this.id + "]";
    }

    @Override
    public int compareTo(Student otherStudent) {
        return this.getId() - otherStudent.getId();
    }
}

 */

// Second way of Sorting a vector without using the Comparable Interface
class Student{
    private int id;

    public Student(int id){
        this.id = id;
    }

    public int getId(){
        return this.id;
    }

    public String toString(){
        return "Student [ "+ this.id + "]";
    }
}

//sort by ascending order
class StudentComparator implements Comparator<Student>{

    @Override
    public int compare(Student o1, Student o2) {
        return o1.getId() - o2.getId();
    }
}

class StudentComparatorByDisacending implements Comparator<Student>{
    @Override
    public int compare(Student o1, Student o2) {
        return o2.getId() - o1.getId();
    }
}
public class Main {
    public static void main(String[] args) {

        //Basic Method
        /*
	    //create a vector
        Vector<Integer> vector = new Vector<Integer>();

        //using the add() method
        vector.add(2);
        vector.add(3);
        vector.add(10);

        //Access vector methods
        /*
        get()
        iterator()


        Vector<String> animals = new Vector<String>();
        animals.add("dog");
        animals.add("cat");
        animals.add("Horse");

        //using get()
        //String element = animals.get(12); // ArrayIndexOutOfBoundsException
        String element = animals.get(1);
        System.out.println("Element at index 1: " + element);

        //using the iterator()
        Iterator<String> iterator = animals.iterator();
        System.out.print("Vector: ");
        while(iterator.hasNext()){
            System.out.print(iterator.next());
            System.out.print(", ");
        }

        System.out.println();
        //Remove Vector Element
        String removeElement = animals.remove(0);
        System.out.println("Removed Element: " + removeElement);

        animals.clear();
        System.out.println("Vector after clear(): " + animals);

        //set() - changing on element
        System.out.println("Vector Numbers: " + vector);
        vector.set(2, 50);
        System.out.println("After Using the set(): " + vector);

        //return the size of the vector
        System.out.println(vector.size());*/

        Vector<Student> vStudent = new Vector<Student>();
        vStudent.add(new Student(103));
        vStudent.add(new Student(115));
        vStudent.add(new Student(100));
        vStudent.add(new Student(102));
        vStudent.add(new Student(112));

        //Before sort() print vStudent
        System.out.println(vStudent);

        //Storing the Vector - First way of sorting
        //Collections.sort(vStudent);

        //Second way of sorting
        //calling class the sorting by ascending order
        Collections.sort(vStudent,new StudentComparator());
        //After sort() print vStudent
        System.out.println("ascending" + vStudent);


        Collections.sort(vStudent, new StudentComparatorByDisacending());
        //After sort() print vStudent
        System.out.println("descending order" + vStudent);
    }
}
