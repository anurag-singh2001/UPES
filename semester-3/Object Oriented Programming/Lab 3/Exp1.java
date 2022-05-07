import java.util.Scanner;
public class Exp1 {
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Please enter a number: ");
		float num = sc.nextFloat();
		System.out.printf("Your squared number is:"+" %.2f " ,square(num));
	}
	public static float square(float num) 
	{
		return num * num;
	}
}