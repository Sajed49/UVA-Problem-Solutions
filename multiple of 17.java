import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main (String [] args ) {
		BigInteger end = BigInteger.valueOf(0); 
		
		BigInteger num;
		
		Scanner in= new Scanner(System.in);
		
		for( ; ; ) {
			BigInteger result = BigInteger.valueOf(0); 
			BigInteger ten = BigInteger.valueOf(10); 
			
			num = in.nextBigInteger();
			if(num.equals(end)) break;
			
			result= num.divide(ten);

			result= result.multiply(ten);
			result= num.subtract(result);
			
			num = num.divide(ten);
			
			ten = BigInteger.valueOf(5);
			result= result.multiply(ten);
			
			
			num = num.subtract(result);
			
			ten = BigInteger.valueOf(17);
			result = num.divide(ten);
			
			result = result.multiply(ten); 
			
			if(num.equals(result)) System.out.println('1');
			else System.out.println('0');
			
			
		} 
	}
}
