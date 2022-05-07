interface A {
    void meth1();

    void meth2();
}
class MyClass {
    public void meth1() {
        System.out.println("This is Method 1");
    }

    public void meth2() {
        System.out.println("This is Method 2");
    }
}
class Exp2 {
    public static void main(String arg[]) {
        MyClass ob = new MyClass();
        ob.meth1();
        ob.meth2();
    }
}