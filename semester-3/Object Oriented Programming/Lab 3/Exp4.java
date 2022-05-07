import java.util.Scanner;
public class Exp4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		System.out.print("Please value of x: ");
		float x = sc.nextFloat();
        System.out.print("Please value of y: ");
		float y = sc.nextFloat();
        System.out.print("Please value of z: ");
		float z = sc.nextFloat();
        System.out.println("Value of function 1: "+fun(x));
        System.out.println("Value of function 2: "+fun(x,y));
        System.out.println("Value of function 3: "+fun(x,y,z));
    }
    public static float fun(float x) 
	{
		return x  ;
	}
    public static float fun(float x, float y) 
	{
		return x + y;
	}
    public static float fun(float x, float y,float z) 
	{
		return x * y * z;
	}
}
