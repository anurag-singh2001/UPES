package com.samar;

import java.util.Iterator;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {
        //LinkedList
        System.out.println("==================LinkedList=========================");
        LinkedList<String> list = new LinkedList<String>();

        //Adding element to linked list
        list.add("Steve");
        list.add("Raj");
        list.add("Alaa");

        //adding an element to the first position
        //first way
        list.add(0,"Rick");
        //second way
        list.addFirst("Jasmine");

        list.addLast("Kim");

        //Iterating  link list
        Iterator<String> iteratorList = list.iterator();
        while(iteratorList.hasNext()){
            System.out.println(iteratorList.next());
        }

        list.clear();
        System.out.println(list);
    }
}
