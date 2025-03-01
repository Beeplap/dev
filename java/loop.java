import java.util.Scanner;
public class loop {

    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    System.out.println("Enter a number:");
    int num = scan.nextInt();
    int sum = 1;
   if (num>10 || num<=0) {
       System.err.println("Invalid input! Please enter a number between 0 and 10.");
       return;
   }
    
    for (int i = 1; i < num; i++) {

        System.out.println(i);
        sum = sum + 1; 
       


    }
    if (num < 10) {
        System.out.println("The number is matched");
        
    }
    System.out.println(sum);
    
    }

    


}
