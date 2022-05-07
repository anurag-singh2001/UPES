package Balance;
import java.util.Scanner;

public class Balance {
    int acc, bal;
    String name;

    public void read()  {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the name :");
        name = sc.nextLine();
        System.out.println("Enter the account number :");
        acc = sc.nextInt();
        System.out.println("Enter the account balance :");
        bal = sc.nextInt();
        sc.close();
    }

    public void disp() {
        System.out.println("--- Account Details ---");
        System.out.println("Name :" + name);
        System.out.println("Account number :" + acc);
        System.out.println("Balance :" + bal);
        
    }
}