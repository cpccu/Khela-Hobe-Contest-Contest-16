import java.util.Scanner;

public class InteriorDesign {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int X1 = sc.nextInt();
            int Y1 = sc.nextInt();
            int X2 = sc.nextInt();
            int Y2 = sc.nextInt();
            int cost1 = X1 + Y1;
            int cost2 = X2 + Y2;
            System.out.println(Math.min(cost1, cost2));
        }
        sc.close();
    }
}
