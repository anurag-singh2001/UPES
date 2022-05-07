class NonNum extends Exception {
    NonNum() {
        super("the value is non numeric \n");
    }
}

class MyException extends Exception{
    public MyException(String S){
        super(S);
    }
}
public class Exp2 {
    public static void main(String[] args) {
        try {char t=args[1].charAt(0);
            if(!(Character.isDigit(t)))
                throw new MyException(" Not an Integer");
            }
         catch (MyException e) {
            System.out.println(e.getMessage());
        }
    }
    
}