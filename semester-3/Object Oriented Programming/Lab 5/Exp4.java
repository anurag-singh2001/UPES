interface course {
    void division(int a);

    void modules(int b);
}

class stud implements course {
    int div, mod;

    public void division(int a) {
        div = a;
    }

    public void modules(int b) {
        mod = b;
    }

    void disp() {
        System.out.println("Division :" + div);
        System.out.println("Modules :" + mod);
    }
}


class Exp4 {
    public static void main(String args[]) {
        stud s = new stud();
        s.division(5);
        s.modules(15);
        s.disp();
    }
}