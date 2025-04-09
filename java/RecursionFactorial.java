// public class recursivefactorial {
//     static class RecursiveFactorial{
//         public int factorial(int n){
//             if(n == 0 || n == 1)
//                 return 1;
//             else
//                 return n * factorial(n-1);
//         }
//     }
// }
// class user {
//     private int number;
//     public void setNumber(int number){
//         this.number = number;
//     }
//     public void callFactorial(){
//         RecursiveFactorial rf = new RecursiveFactorial();
//         int result - rf.factorial(number);
//         System.out.println("Factorial of " + number + "is " + result); 
//     }
// }

// public static void main(String[] args){
//     Factorial f = new Factorial();
//     Factorial.User user = f.new User();
//     user.setNumber(8);
//     user.callFactorial();
// }


public class hello {
    static class RecursiveFactorial {
        public int factorial(int n) {
            if (n == 0 || n == 1)
                return 1;
            else
                return n * factorial(n - 1);
        }
    }
}

class User {
    private int number;

    public void setNumber(int number) {
        this.number = number;
    }

    public void callFactorial() {
        hello.RecursiveFactorial rf = new hello.RecursiveFactorial();
        int result = rf.factorial(number);  
        System.out.println("Factorial of " + number + " is " + result);  
    }
}

public class RecursionFactorial {
    public static void main(String[] args) {
        User user = new User();
        user.setNumber(8);
        user.callFactorial();
    }
}

