package com.samar;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        // ArrayList implementation of List
        List<String> list1 = new ArrayList<>();

        // LinkedList implementation of List
        List<String> list2 = new LinkedList<>();

        // Creating list using the ArrayList class
        List<Integer> numbers = new ArrayList<>();

        // Add elements to the list
        numbers.add(1);
        numbers.add(2);
        numbers.add(3);
        System.out.println("List: " + numbers);

        // Access element from the list
        int number = numbers.get(2);
        System.out.println("Accessed Element: " + number);

        // Remove element from the list
        int removedNumber = numbers.remove(1);
        System.out.println("Removed Element: " + removedNumber);

        // Creating list using the LinkedList class
        List<Integer> numbers2 = new LinkedList<>();

        // Add elements to the list
        numbers2.add(1);
        numbers2.add(2);
        numbers2.add(3);
        System.out.println("List: " + numbers2);

        // Access element from the list
        int num = numbers2.get(2);
        System.out.println("Accessed Element: " + number);

        // Using the indexOf() method
        int index = numbers2.indexOf(2);
        System.out.println("Position of 3 is " + index);

        // Remove element from the list
        int removedNumbers = numbers2.remove(1);
        System.out.println("Removed Element: " + removedNumber);
    }
}