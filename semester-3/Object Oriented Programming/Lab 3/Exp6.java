import java.util.Scanner;
public class Exp6 {


    static int power(int x, int n) 
    { 
        if (n == 0) 
            return 1; 
        else if (n % 2 == 0) 
            return power(x, n / 2) * power(x, n / 2); 
        else
            return x * power(x, n / 2) * power(x, n / 2); 
    } 


    static float power(float x, int n) 
    { 
        if (n == 0) 
            return 1; 
        else if (n % 2 == 0) 
            return power(x, n / 2) * power(x, n / 2); 
        else
            return x * power(x, n / 2) * power(x, n / 2); 
    } 
  

    public static void main(String[] args) 
    { 
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter  integer value... ");
        int x_int = sc.nextInt();  
        System.out.print("\nEnter power... ");
        int n_1 = sc.nextInt();  

        System.out.print("\n\nIf sciable has integer value then ");
        System.out.printf("Output... %d", power(x_int, n_1)); 

        System.out.print("\nEnter  float value... ");
        float x_float = sc.nextFloat();  
        
        System.out.print("\nEnter power... ");
        int n_2 = sc.nextInt();  
        
        System.out.print("\n\nIf sciable has float value then ");
        System.out.printf("Output... %.4f", power(x_float, n_2)); 

    } 
    
}
