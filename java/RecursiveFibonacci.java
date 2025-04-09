class RecursiveFibonacciApp {
    static class RecursiveFibonacci {
        public int fibonacci(int n) {
            if (n == 0)
                return 0;
            else if (n == 1)
                return 1;
            else
                return fibonacci(n - 1) + fibonacci(n - 2);
        }

        public void generateFibonacciSeries(int n) {
            System.out.print("Fibonacci Series up to " + n + ": ");
            for (int i = 0; i < n; i++) {
                System.out.print(fibonacci(i) + " ");
            }
            System.out.println();
        }
    }
}

class User {
    private int number;

    public void setNumber(int number) {
        this.number = number;
    }

    public void callFibonacci() {
        RecursiveFibonacciApp.RecursiveFibonacci rf = new RecursiveFibonacciApp.RecursiveFibonacci();
        rf.generateFibonacciSeries(number);
    }
}

public class RecursiveFibonacci {
    public static void main(String[] args) {
        User user = new User();
        user.setNumber(10); 
        user.callFibonacci();
    }
}
