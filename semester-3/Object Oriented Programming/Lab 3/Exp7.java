import java.util.Scanner;

public class Exp7 {

    public static int max(int x,int y){
        if(x == y){
            System.out.println("similar values...");
            return 0;
        }
        
        else if(x > y){
            System.out.println(x + " is greater than " + y);
            return x;
        }
        
        else{
            System.out.println(y + " is greater than " + x);
            return y;
        }
    }
    public static float max(float x,float y){
        if(x == y){
            System.out.println("similar values...");
            return 0;
        }
        
        else if(x > y){
            System.out.println(x + " is greater than " + y);
            return x;
        }
        
        else{
            System.out.println(y + " is greater than " + x);
            return y;
        }
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first integer value... ");
        int num_1 = sc.nextInt();
        System.out.println("\nEnter second integer value... ");
        int num_2 = sc.nextInt();

        max(num_1,num_2);
        
        System.out.println("Enter first float value... ");
        float number_1 = sc.nextFloat();
        System.out.println("\nEnter second float value... ");
        float number_2 = sc.nextFloat();
        max(number_1, number_2);

        


    }
    
}
