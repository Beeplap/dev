class EvenThread extends Thread {
    public void run() {
        for (int i = 2; i <= 20; i += 2) {
            System.out.println("Even: " + i);
            System.out.println("Square of even: " + i*i);
            try {
                Thread.sleep(2000); 
            } catch (InterruptedException e) {
                System.out.println("EvenThread interrupted");
            }
        }
    }
}


class OddThread extends Thread {
    public void run() {
        for (int i = 1; i < 20; i += 2) {
            System.out.println("Odd: " + i);
            System.out.println("Square of odd " + i*i);
            try {
                Thread.sleep(4000); 
            } catch (InterruptedException e) {
                System.out.println("OddThread interrupted");
            }
        }
    }
}

public class MultiThread {
    public static void main(String[] args) {
        EvenThread evenThread = new EvenThread();
        OddThread oddThread = new OddThread();
        
        evenThread.start();
        oddThread.start();
    }
}
