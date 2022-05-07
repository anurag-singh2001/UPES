import java.lang.*;
import java.util.Scanner;
class kapil 
{  public static void main(String args[])
   { String a,b;
     try
     {
      Scanner sc = new Scanner(System.in);
       a=sc.next();
       b=a.substring(2,5);
       System.out.println(b);
     }
     catch(Exception e) { System.out.println(e);  }
   }
}
