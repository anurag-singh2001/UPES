import java.util.Scanner;

public class exp_4 {

public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    int found = 0, occurence = 0;

    System.out.print("Enter the string... ");
    String s = sc.nextLine();

    System.out.print("\n\nlength of entered string.given ... "+s.length());

    System.out.print("Enter string you want to find (Single letter only)... ");

    String required = sc.next();

    System.out.println("\n----------------------------------------------------------------\n");

    int length_str1 = s.length();
    int length_str2 = required.length();

    for (int i = 0; i < length_str1-length_str2; i++) {

        try {

            if (s.substring(i, i + length_str2).equals(required)) {

                if (found == 0) {
                     
                    System.out.println("Required substring occurred at possition/index... " + (i));
                    System.out.print("\n");
                }
    
                occurence = occurence + 1;
    
               }
            
        } catch (Exception e) {
            System.out.println("\nError... " + e);
        }

    }


    System.out.print("\n\nTotal occurrences of required substring found were... " + occurence);

    System.out.println("\n\n----------------------------------------------------------------\n");

    sc.close();
}
    
}
