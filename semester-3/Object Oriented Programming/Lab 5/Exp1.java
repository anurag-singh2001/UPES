
interface test {
    int square();
}

class arithmetic implements test {
    int b;

    arithmetic(int x) {
        b = x;
    }

    public int square() {
        return (b * b);
    }

}

class ToTestInt {
    public int ans(int x) {
        arithmetic a = new arithmetic(x);
        return a.square();
    }
}

class Exp1 {
    public static void main(String[] args) {
        ToTestInt c = new ToTestInt();

        System.out.println("\nThe square of 5 is " + c.ans(5));
    }
}