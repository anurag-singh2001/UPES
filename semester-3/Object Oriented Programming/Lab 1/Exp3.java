import java.util.Scanner;
public class Exp3 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num;
        System.out.println("enter value of num");
        num=input.nextInt();
        while(num>100){
            num=num/10;
        }
        System.out.println(num%10);
    }
}
