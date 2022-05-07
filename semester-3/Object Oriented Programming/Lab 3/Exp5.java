import java.util.Scanner;

public class Exp5 {

    public static int min(int x,int y){
        if(x == y){
            System.out.print("similar values...");
            return 0;
        }
        
        else if(x < y){
            System.out.println(x + " is smaller than " + y);
            return x;
        }
        
        else{
            System.out.println(y + " is smaller than " + x);
            return y;
        }
    }
    public static float min(float x,float y){
        if(x == y){
            System.out.println("similar values...");
            return 0;
        }
        
        else if(x < y){
            System.out.println(x + " is smaller than " + y);
            return x;
        }
        
        else{
            System.out.println(y + " is smaller than " + x);
            return y;
        }
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter first integer value... ");
        int num_1 = sc.nextInt();
        System.out.print("\nEnter second integer value... ");
        int num_2 = sc.nextInt();

        min(num_1,num_2);

        
        System.out.println("Enter first float value... ");
        float number_1 = sc.nextFloat();
        System.out.println("\nEnter second float value... ");
        float number_2 = sc.nextFloat();
        
       
        min(number_1, number_2);


    }
    
}
