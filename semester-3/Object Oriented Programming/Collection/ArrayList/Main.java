package com.samar;

import java.util.ArrayList;
import java.util.ListIterator;

public class Main {

    public static void main(String[] args) {
        System.out.println("================ArrayList===============");
        ArrayList<Integer> listOfNumbers = new ArrayList<Integer>();
        listOfNumbers.add(20);
        listOfNumbers.add(10);
        listOfNumbers.add(0);
        listOfNumbers.add(50);

        for (Integer i: listOfNumbers) {
            System.out.println(i);
        }

        //ArrayList capacity
        /*
        if the initial capacity less than zero we'll have an exception:
        IllegalArgumentException
         */
        ArrayList<String> listOfStudents = new ArrayList<String>(3);
        listOfStudents.add("Emily");
        listOfStudents.add("Edward");
        listOfStudents.add("pop");

        for (String i: listOfStudents) {
            System.out.println(i);
        }

        //Initialize ArrayList
        ArrayList<String> names = new ArrayList<String>()
        {{
            add("Hi");
            add("Hello");
            add("Bye");
        }};
        System.out.println("Elements of ArrayList are: " + names);

        //print an element/value from the arrayList
        System.out.println(listOfStudents.get(1));

        listOfStudents.add(0,"Karl");
        System.out.println("After Adding new Student at index 0: " + listOfStudents);

        ArrayList<String> listOfStudent2 = new ArrayList<String>();
        listOfStudent2.add("Tim");
        listOfStudent2.add("Carmen");
        listOfStudent2.add("Victor");

        listOfStudents.addAll(listOfStudent2);
        System.out.println("Appending listOfStudents2 into listOfStudents: "
                +  listOfStudents);

        //Remove()
        System.out.println(listOfStudents.remove(4));
        listOfStudents.removeAll(listOfStudent2);
        System.out.println(listOfStudents);

        //set()
        listOfStudents.set(2,null);
        System.out.println(listOfStudents);

        //clear()
        listOfStudent2.clear();
        System.out.println(listOfStudent2);

        //Array vs ArrayList
        // 1. the size or the length
        int[] arr = new int[5];
        for (int i = 0; i < arr.length; i++) {
            arr[i] =  i;
        }


        ArrayList arrayList = new ArrayList();
        arrayList.add(0);
        arrayList.add("Hello");
        arrayList.add(false);
        arrayList.add(2.3f);

        //Time Takes Array vs ArrayList
        String[] namesArray = new String[1000];
        long startTime = System.currentTimeMillis(); //start the timer
        for (int i = 0; i < namesArray.length; i++)
        {
            namesArray[i] = "Name"+i;
        }

        long endTime = System.currentTimeMillis(); // stop the timer
        System.out.println("Time taken by Array : "+(endTime - startTime)+"ms");


        ArrayList<String> nameList = new ArrayList<String>();
        startTime = System.currentTimeMillis(); //start the timer
        for (int i = 0; i <= 1000; i++)
        {
            nameList.add("Name"+i);
        }
        endTime = System.currentTimeMillis(); //stop the timer
        System.out.println("Time taken by ArrayList : "+(endTime-startTime)+"ms");

        //Traverse ArrayList in both directions
        ArrayList<String> list = new ArrayList<String>();
        list.add("ONE");
        list.add("TWO");
        list.add("THREE");
        list.add("FOUR");

        //ArrayList "list" implementing the Iterator Interface to create an object
        ListIterator iterator = list.listIterator();

        //using the iterator method
        System.out.println("Elements in forward direction");
        while (iterator.hasNext())
        {
            System.out.println(iterator.next());
        }

        System.out.println("Elements in backward direction");
        while (iterator.hasPrevious())
        {
            System.out.println(iterator.previous());
        }
    }
}
