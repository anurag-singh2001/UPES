import java.util.Scanner;
public class Exp3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		System.out.print("Please value of x: ");
		float x = sc.nextFloat();
        System.out.print("Please value of y: ");
		float y = sc.nextFloat();
        System.out.println("Value of function 1: "+fun(x));
        System.out.println("Value of function 2: "+fun(x,y));
    }
    public static float fun(float x) 
	{
		return x * x ;
	}
    public static float fun(float x, float y) 
	{
		return (x * x)+(y*y) ;
	}
}
