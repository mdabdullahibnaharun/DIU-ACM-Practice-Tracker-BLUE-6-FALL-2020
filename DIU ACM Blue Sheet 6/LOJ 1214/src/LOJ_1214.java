import java.math.BigInteger;
import java.util.Scanner;

public class LOJ_1214 {
    public static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {

        int t = sc.nextInt();
        for(int i  = 1 ; i<=t ; i++) {
            BigInteger a, b;
            a = sc.nextBigInteger();
            b = sc.nextBigInteger();
            BigInteger result = a.mod(b.abs());
            if (result.intValue()==0) {
                System.out.println("Case " + i + ": divisible");
            } else {
                System.out.println("Case " + i + ": not divisible");
            }
        }
    }
}
