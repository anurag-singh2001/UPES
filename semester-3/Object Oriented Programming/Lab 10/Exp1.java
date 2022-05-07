import java.util.*;

class Exp1 {
    public static void main(String[] args) {
        // Size of the
        // ArrayList
        int n = 5;

        // Declaring the ArrayList with
        // initial size n
        ArrayList<Integer> arr1 = new ArrayList<Integer>(n);
        ArrayList<Integer> arr2 = new ArrayList<Integer>(n);

        // Appending new elements at
        // the end of the list
        for (int i = 1; i <= n; i++)
            arr1.add(i);

        // Printing elements
        System.out.println(arr1);

        // duplicate object of an ArrayList instance

        arr2=(ArrayList)arr1.clone();
        System.out.println(arr2);

        // Reverse Array content
        Collections.reverse(arr1);
        System.out.println("\nElements after reversing: ");
        System.out.println(arr1);
    }
}