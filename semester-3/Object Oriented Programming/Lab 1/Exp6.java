import java.util.Scanner;
public class Exp6 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int x,y,sum=0;
        System.out.println("enter value of x and y");
        x=input.nextInt();
        y=input.nextInt();
        while(x>0){
            sum=sum+(x%10)*(y%10);
            x=x/10;
            y=y/10;
        }
        System.out.println(sum);
    }
}
