import java.util.Scanner;

public class Exp1 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num,k;
        System.out.println("enter value of k and num");
        num=input.nextInt();
        k=input.nextInt();
        int x=num;
        for(int i=0;i<k-1;i++){
            x=x/10;
        }
        System.out.println(x%10);

    }
}
