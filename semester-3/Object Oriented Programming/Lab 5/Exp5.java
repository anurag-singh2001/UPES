import java.util.*;

interface StackInterface {
    void pop();
    void push();
    void display();
}

class StackClass implements StackInterface{
    public void pop(){
        System.out.println("this is pop method");
    }
    public void push(){
        System.out.println("this is push method");
    }
    public void display(){
        System.out.println("this is display method");
    }

}
public class Exp5 {
   
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter push, pop or dispaly");
        String choice=sc.nextLine();
        StackClass s= new StackClass();
        switch(choice){
            case "pop":
            s.pop();
            break;

            case "push":
            s.push();
            break;

            case "display":
            s.display();
            break;

            default:
            System.out.println("wrong choice");
        }








    }
}
