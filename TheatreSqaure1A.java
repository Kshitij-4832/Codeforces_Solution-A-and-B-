import java.util.*;

public class TheatreSqaure1A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = 0, m = 0, a = 0;
        n = in.nextInt();
        m = in.nextInt();
        a = in.nextInt();
        double x = (double) n / a;
        double y = (double) m / a;
        System.out.println((long) Math.ceil(y) * (long) Math.ceil(x));
        in.close();
    }
}