import java.util.*;
public class Exp1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int marks[] = new int[10];
        String name[] = new String[10];
        System.out.println("enter details of students");
        try{
            for(int i=0;i<10;i++){
                System.out.println("Enter name");
                name[i]=sc.next();
                System.out.println("Enter marks");
                marks[i]=sc.nextInt();
            }

            System.out.println("-----details of students-----");
            for(int i=0;i<11;i++){
                System.out.println("Name of students:"+" "+name[i]);
                System.out.println("marks:"+" "+marks[i]);
            }
        } catch(Exception E){
            System.out.println("ArrayIndexOutOfBoundsExeption");
        }
    }
}