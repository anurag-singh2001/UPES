public class Exp3{
    static Thread[] threads = new Thread[10];
    public static void main(String[] args){
        Count c = new Count();

         // creating 10 object of the class Thread using Thread
        for(int i=0;i<10;i++){
            threads[i] = new Thread(c);
            threads[i].start();
            // increments of threads
            System.out.println(Sync.increment(i));
        }
    }
}
class Count implements Runnable {
    int n=1;
    public void run() {
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("Interrupted.");
        }
      
    }

}
class Sync{
    synchronized static int increment(int i){
        i++;
        return(i);
    }
}
