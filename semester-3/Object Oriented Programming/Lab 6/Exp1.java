import java.util.Scanner;
import Area.*;
public class Exp1 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter side of square");
        int s= sc.nextInt();
        Area ob = new Area();
        int t=ob.area_square(s);
        System.out.println("Area of square is"+  t);
        sc.close();


    }
}
