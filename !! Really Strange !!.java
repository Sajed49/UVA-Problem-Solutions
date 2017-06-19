import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main (String [] args) {
		Scanner in = new Scanner(System.in);
		
		while(in.hasNext()) {
			BigInteger num = in.nextBigInteger();
			BigInteger flag1 = BigInteger.valueOf(0);
			
			if(num.equals(flag1)) System.out.println("1");
			else {
				BigInteger flag = BigInteger.valueOf(1);
				num= num.subtract(flag);
			
				flag = BigInteger.valueOf(2);
				BigInteger sum = flag.add(num.add(num.pow(2)));
			
				System.out.println(sum);
			}
			
		}
	}
}
