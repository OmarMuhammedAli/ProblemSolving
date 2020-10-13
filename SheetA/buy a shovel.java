import java.util.Scanner;
 
class MyClass {
    public static void main(String[] args) {
        try(Scanner input = new Scanner(System.in)) {
            int k = input.nextInt();
            int r = input.nextInt();
            int count = 1;
            int k1 = k;
            while ((k % 10) != 0 && ((k - r) % 10) != 0) {
            k += k1;
            count++;
            }
            System.out.println(count);
        }
        
    }
}