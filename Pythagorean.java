import java.util.Scanner;

public class Pythagorean {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int pro = i * i + j * j;
                if (pro > n * n) {
                    break;
                } else {
                    int sqrt = (int) Math.sqrt(pro);
                    if (sqrt * sqrt == pro) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
        in.close();

    }
}