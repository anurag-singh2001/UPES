import java.util.*;

public class Exp3 {
    public static void main(String[] args) {

        HashSet<Integer> a = new HashSet<Integer>();
        //add elements to HashSet
        a.add(5);
        a.add(7);
        a.add(3);
        a.add(1);
        a.add(9);
        System.out.println(a);
        HashSet<Integer> b = new HashSet<Integer>();
        b.add(18);
        b.add(45);

        // copy another collection object to HashSet object
        a.addAll(b);
        System.out.println("HashSet content after adding another collection:");
        System.out.println(a);
        
        // search user defined objects from HashSet
        System.out.println("Does set contains 78 ? "+a.contains(78));

       // search user defined objects from HashSet
        a.clear();
        System.out.println(a);

    }
}
