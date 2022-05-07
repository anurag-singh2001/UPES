import java.util.Scanner;
public class Exp2 {

    public String toUpperCase(String str) {

        char[] chars = str.toCharArray();

        for (int i = 0; i < chars.length; i++) {
            char c = chars[i];
            if ('a' <= c && c <= 'z') {
                chars[i] = (char) (c - 32); // 97 = 'a' and 65 = 'A'
            }
        }

        return new String(chars);
    }

    public static void main(String[] args) {
        
        StringBuffer s = new StringBuffer();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string... ");
        s.append(sc.nextLine());

        Exp2 in = new Exp2();

        String str = s.toString();

        String resultant_string = in.toUpperCase(str);
        System.out.print("Capitalized string... \n" + resultant_string);



    }

}
