import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static void main (String []args) {
		Scanner in= new Scanner(System.in);
		
		while(in.hasNext()) {
			BigInteger num1= in.nextBigInteger();
			BigInteger num2= in.nextBigInteger();
			
			System.out.println(num1.multiply(num2));
		}
	}	
}
