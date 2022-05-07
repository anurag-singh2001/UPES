import java.util.Scanner;
public class Exp4 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,sum=0;
        System.out.println("enter value of num");
        num=input.nextInt();
        while(num>0){
            int d=num%10;
            sum=sum+d;
            num=num/10;
        }
        System.out.println(sum);
    }
}
