import java.util.Scanner;
import java.math.BigInteger;

public class Krakovia {

	public static void main(String[] args) {
		Scanner in = new Scanner (System.in);
		int cases =1;
		
		for( ; ; cases++) {
			int num1= in.nextInt();
			int num2= in.nextInt();
			
			if(num1==0 && num2==0) break;
			
			
			BigInteger sum=BigInteger.valueOf(0);
			
			for(int i=0; i<num1; i++) {
				BigInteger num3=in.nextBigInteger();
				sum= sum.add(num3);
			}
			
			
			BigInteger flag = BigInteger.valueOf(num2);
			System.out.println("Bill #"+cases+" costs "+sum+": each friend should pay "+(sum.divide(flag)));
			System.out.println();
			
		}
	}
}
