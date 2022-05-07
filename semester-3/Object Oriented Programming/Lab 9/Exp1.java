public class Exp1 implements Runnable {
    public void run() {
        System.out.println("Now the thread is Working");
    }

    public static void main(String argvs[]) {
        // creating an object of the class Exp1
        Runnable A = new Exp1();

        // creating an object of the class Thread using Thread(Runnable r, String name)
        Thread B = new Thread(A, "My thread");

        // the start() method moves the thread to the active state and calls the run() method on the thread.
        B.start();

        // getting the thread name by invoking the getName() method
        String str = B.getName();
        System.out.println(str);
    }
}