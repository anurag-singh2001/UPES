import java.util.Scanner;
public class Exp7 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int x,unit=1;
        System.out.println("enter value of x ");
        x=input.nextInt();
        while(x>0){
            int d=x%10;
            System.out.println(d*unit);
            unit=unit*10;
            x=x/10;

        }
        
    }
}
