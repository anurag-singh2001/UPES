import java.util.Scanner;
import static java.lang.Math.pow;

class Calculator{ 
    static long power (int n, int p) throws Exception{
        if(n==0 || p==0) {
            throw new Exception("a and b should not be zero");
        } 
        else if(n<0 || p<0) {
            throw new Exception("a and b should not be negative");
        } 
        else {
            return (long)pow(n, p);
            
        }
     }
}  
public class Exp5{
     public static void main(String[] args) {
        try{
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter value of a:");
            int a = sc.nextInt();
            System.out.println("Enter value of b:");
            int b = sc.nextInt();
            System.out.println(Calculator.power(a,b));

        }
        catch(Exception e){
            System.out.println(e);  
        }
    }  
}  


