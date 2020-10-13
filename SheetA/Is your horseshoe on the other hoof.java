import java.util.Arrays;
import java.util.Scanner;
 
class Test {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[4];
        for (int i = 0; i < 4; i++) arr[i] = input.nextInt();
        Arrays.sort(arr);
        int shoes = 0;
        for (int i = 0; i < 4; i++)
            if (i<3) {
                if (arr[i] == arr[i + 1])
                    shoes++;
            }
        System.out.println(shoes);
 
    }
}
