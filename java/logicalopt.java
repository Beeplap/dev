import java.util.Scanner;
public class logicalopt {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your age");
        int age = scanner.nextInt();
        System.out.println("Enter your grade in %");
        int grade = scanner.nextInt();

        if (age > 18 && age < 25 && grade > 75) {
            System.out.print("You are elegible for scholarship");
        }
        else if(age<=18 ){
            System.out.print("You are not elegible for scholarship (Reason: under age)");

        }
        else if (age >= 25) {
            System.out.print("You are not elegible for scholarship (Reason: over age)");
            
        }
        else if (grade <= 75) {
            System.out.print("You are not elegible for scholarship (Reason: low grade)");
            
        }

    }
}
