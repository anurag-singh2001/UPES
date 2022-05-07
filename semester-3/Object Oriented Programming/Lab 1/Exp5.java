import java.util.Scanner;
public class Exp5 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,sum=0;
        System.out.println("enter value of num");
        num=input.nextInt();
        while(num>10){
            int d=num%100;
            sum=sum+(d/10)*(d%10);
            num=num/10;
        }
        System.out.println(sum);
        
    }
}
