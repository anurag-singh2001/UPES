import java.util.*;

public class Exp2 {

    public static void main(String[] args) {
        // Create an empty hash map by declaring object of string and integer type

        HashMap<String, Integer> hash_map = new HashMap<>();
 
        // Adding elements to the Map

        hash_map.put("Maths", 87);
        hash_map.put("Physics", 85);
        hash_map.put("Chemistry", 75);

        // find whether specified value exists or not

        System.out.println("Is the value 85 present? " + hash_map.containsValue(85));

        // get all keys from the given HashMap

        for (String key : hash_map.keySet()) {
            System.out.println(key);
        }

        // get all key-value pair as Entry objects
        for (Map.Entry<String,Integer> entry : hash_map.entrySet()) {
            String key = entry.getKey();
            Integer value = entry.getValue();
            System.out.println("key: " + key + ", value: " + value);
        }


    }
    
}
