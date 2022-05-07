import java.util.*;

class Calls {
    float dur;
    String type;

    float rate() {
        if (type == "urgent")
            return 4.5f;
        else if (type == "lightning")
            return 3.5f;
        else
            return 3f;
    }
}

class Bill extends Calls {
    float amount;

    void read() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Call Type(urgent,lightning,ordinary): ");
        type = input.next();
        System.out.print("Enter Call duration:");
        dur = input.nextFloat();
    }

    void calculate() {
        if (dur <= 1.5)
            amount = rate() * dur + 1.5f;
        else if (dur <= 3)
            amount = rate() * dur + 2.5f;
        else if (dur <= 5)
            amount = rate() * dur + 4.5f;
        else
            amount = rate() * dur + 5f;
    }

    

    void print() {
        System.out.println(" Call Type : " + type);
        System.out.println(" Duration : " + dur);
        System.out.println(" Charge: " + amount);
    }
}

class Exp4 {
    public static void main(String arg[]) {
        Bill b = new Bill();
        b.read();
        b.calculate();
        b.print();
    }
}
