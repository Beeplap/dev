import java.util.Scanner;

public class differencearray {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int arr[] = new int[5];
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter the number: ");
            arr[i] = scanner.nextInt();
        }

        int large = arr[0];
        for (int i = 0; i < 5; i++) {
            if (arr[i] > large) {
                large = arr[i];
            }

        }
        int small = arr[0];
        for (int i = 0; i < 5; i++) {
            if (arr[i] < small) {
                small = arr[i];
            }

        }
        int diff = large - small;
        System.out.println("The difference of max array and min array are: " + diff);

        scanner.close();
    }
}
