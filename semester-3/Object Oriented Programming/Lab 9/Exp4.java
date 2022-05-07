class ThreadClass implements Runnable {
	long click = 0;
	Thread t;
	private volatile boolean running = true;

	public ThreadClass(int p) {
		t = new Thread(this);
		t.setPriority(p);
	}

	public void run() {
		while (running) {
			click++;
		}
	}

	public void stop() {
		running = false;
	}

	public void start() {
		t.start();
	}
}

public class Exp4 {
	public static void main(String args[]) {
		Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
		ThreadClass thread1 = new ThreadClass(Thread.NORM_PRIORITY + 2);
		ThreadClass thread2 = new ThreadClass(Thread.NORM_PRIORITY - 2);
		ThreadClass thread3 = new ThreadClass(Thread.NORM_PRIORITY + 3);
		ThreadClass thread4 = new ThreadClass(Thread.NORM_PRIORITY - 3);
		ThreadClass thread5 = new ThreadClass(Thread.NORM_PRIORITY + 4);
		thread1.start();
		thread2.start();
		thread3.start();
		thread4.start();
		thread5.start();
		System.out.println("thread one is alive:" + thread1.t.isAlive());
		System.out.println("thread two is alive:" + thread2.t.isAlive());
		System.out.println("thread three is alive:" + thread3.t.isAlive());
		System.out.println("thread four is alive:" + thread4.t.isAlive());
		System.out.println("thread four is alive:" + thread5.t.isAlive());
		try {
			// putting the thread having highest priority to sleep
			thread5.t.sleep(2000);
			thread3.t.sleep(2000);
		} catch (InterruptedException e) {
			System.out.println("Main thread interrupted");
		}
		thread1.stop();
		thread2.stop();
		thread3.stop();
		thread4.stop();
		thread5.stop();
		try {
			System.out.println("waiting for threads to finish");
			thread1.t.join();
			thread2.t.join();
			thread3.t.join();
			thread4.t.join();
			thread5.t.join();
		} catch (InterruptedException e) {
			System.out.println("Main thread interrupted");
		}
		System.out.println("priority of thread1:" + thread1.t.getPriority());
		System.out.println("priority of thread2:" + thread2.t.getPriority());
		System.out.println("priority of thread3:" + thread3.t.getPriority());
		System.out.println("priority of thread4:" + thread4.t.getPriority());
		System.out.println("priority of thread5:" + thread5.t.getPriority());
		System.out.println("thread one is alive:" + thread1.t.isAlive());
		System.out.println("thread two is alive:" + thread2.t.isAlive());
		System.out.println("thread three is alive:" + thread3.t.isAlive());
		System.out.println("thread four is alive:" + thread4.t.isAlive());
		System.out.println("thread five is alive:" + thread5.t.isAlive());
		System.out.println("Main thread exiting");
	}
}