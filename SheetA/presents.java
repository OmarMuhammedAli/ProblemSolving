import java.util.ArrayList;
import java.util.Scanner;

class Presents {
    public static void main(String[] args) {
        try(Scanner input = new Scanner(System.in)) {
            int n = input.nextInt();
            ArrayList<Integer> p = new ArrayList<>();
            for (int i = 0; i < n; i++) p.add(input.nextInt());
            for (int i = 0; i < n; i++) {
                System.out.print(p.indexOf(i + 1) + 1 + " ");
            }
        }
    }
}