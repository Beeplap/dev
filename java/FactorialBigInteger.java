import java.math.BigInteger;

public class FactorialBigInteger {
    public static void main(String[] args) {
        int number = 100; 
        BigInteger factorial = BigInteger.ONE;

        for (int i = 1; i <= number; i++) {
            factorial = factorial.multiply(BigInteger.valueOf(i));
        }

        System.out.println("Factorial of " + number + " is: " + factorial);
    }
}