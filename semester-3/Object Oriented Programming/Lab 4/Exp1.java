class a {
    private int l, b;

a(int x,int y)
{ l=x; b=y;}

    int add_1() {
        return (l + b);
    }
}

class b extends a {
    int h;

    b(int x, int y, int z) {
        super(x, y);
        h = z;
    }

    int add_2() {
        return (add_1() + h);
    }
}

class Exp1 {
    public static void main(String args[]) {
        b cr = new b(10, 20, 30);
        int a1 = cr.add_1();
        int v1 = cr.add_2();
        System.out.println("Addition of two number : " + a1);
        System.out.println("Addition of three number : " + v1);
    }
}