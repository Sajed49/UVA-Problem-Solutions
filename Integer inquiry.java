import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static void main (String []args) {
		Scanner in= new Scanner(System.in);
		BigInteger sum= BigInteger.valueOf(0);
		BigInteger zero= BigInteger.valueOf(0);
		BigInteger num;
			
		for( ; ; ) {
			num= in.nextBigInteger();
			if(num.equals(zero)) break;
			sum= sum.add(num);
		}
		
		System.out.println(sum);
	}	
}
