import java.util.Scanner;

class InvalidnumException  extends Exception  
{  
    public InvalidnumException (String str)  
    {  
        super(str);  
    }  
}  
    
public class Exp3  
{  
  
    static void validate (int num) throws InvalidnumException{    
       if(num < 500){  
     
        throw new InvalidnumException("Number is less than 500");    
    }  
       else {   
        System.out.println("Number is greater than 500 ");   
        }   
     }    
    
    public static void main(String args[])  
    {  
        try  
        {  
            Scanner sc = new Scanner(System.in);
            System.out.println("enter number");
            int a = sc.nextInt();
            validate(a);  
        }  
        catch (InvalidnumException ex)  
        {  
            System.out.println("Caught the exception");  
     
            System.out.println("Exception occured: " + ex);  
        }  
     
    }  
}  
