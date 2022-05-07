import java.util.Scanner;

public class Exp3 {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        // Asking user to enter strings

        System.out.print("Enter the string... ");
        String s = sc.nextLine();
        
        char[] chars = s.toCharArray();
        
        for (int i=0; i<chars.length; i++) {
            char c = chars[i];
            if ('a' <= c && c <= 'z') {
                chars[i] = (char) (c - 32); // 97 = 'a' and 65 = 'A'
            }
        }

        String resultant_string = new String(chars);

        System.out.print("Capitalized string... \n\n"+ resultant_string);


    }
    
}
