import java.util.Scanner;
public class Exp2 {
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Please enter a number: ");
		float num = sc.nextFloat();
		System.out.printf("Your cubed number is:"+" %.2f " ,cube(num));
	}
	public static float cube(float num) 
	{
		return num * num * num;
	}
}