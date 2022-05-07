import java.util.Scanner;

class Exp1 {
    public static void main(String[] args) throws Exception {

        int length_str1, length_str2, found = 0;

        Scanner sc = new Scanner(System.in);

        // enter strings

        System.out.print("Enter the string... ");
        String s1 = sc.nextLine();

        System.out.print("\nEnter the string to be searched... ");
        String s2 = sc.nextLine();


        // finding the length of the strings given 

        length_str1 = s1.length();
        length_str2 = s2.length();

        // looping till end of the string from index-0 to index-n
        
        for (int i = 0; i <= (length_str1 - length_str2); i++) {

            // substring(start,end) this gives till end-1 characters

            if (s1.substring(i, i + length_str2).equals(s2)) {

                if (found == 0) {
                     
                    System.out.print("first occurance is at possition/index... " + (i));
                }

                found = i;
               }
      
        }


        if (found != 0){System.out.print("\n\nLast occurance is at possition/index... " + found);}

        else{System.out.print("\noccurence of required string was not found!!!");}

    }
}