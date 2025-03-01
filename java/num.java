
import java.util.Scanner;

public class num {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        if (num <= 0) {
            System.out.println("Negative number entered");
        } else {
            for (int i = num; i < num; i++) {
                System.out.print(i);

            }
            scanner.close();
        }
    }
}