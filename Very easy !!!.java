import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static void main (String []args) {
		Scanner in= new Scanner(System.in);
		
		while(in.hasNext()) {
			int N= in.nextInt();
			int A= in.nextInt();
			
			BigInteger total= BigInteger.valueOf(0);
			
			for(int i=1; i<=N ; i++) {
				BigInteger sum= BigInteger.valueOf(0);
				
				BigInteger temp1= BigInteger.valueOf(i);
				BigInteger temp2= BigInteger.valueOf(A);
			
				sum = sum.add(temp1.multiply(temp2.pow(i)));
				total= total.add(sum);
			}
			
			System.out.println(total);
		}
	}	
}
