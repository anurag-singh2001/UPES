class comp {
    static float real, img;

    public void getComp(float a, float b) {
        real = a;
        img = b;
    }

    public static void print1() {
        System.out.println(real + "+" +"("+ img +")"+ "i");
    }

    public void mul(comp b) {
        real = real * b.real;
        img = -(img * b.img);

    }

    public static void mul(comp b,comp c) {
        real = b.real * c.real;
        img = -(b.img * c.img);

    }
}

public class Exp9 {
    public static void main(String[] args) {
        comp a = new comp();
        comp b = new comp();
        comp c = new comp();
        b.getComp(10, 2);
        a.mul(b);
        a.print1();
        c.getComp(5, 6);
        comp.mul(b,c);
        comp.print1();
    }
}