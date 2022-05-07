import java.util.Scanner;

public class Exp4 {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("enter first number");
            int a = sc.nextInt();
            System.out.println("enter second number");
            int b = sc.nextInt();
            int c = a / b;
            System.out.println(c);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
