import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static void main (String []args) {
		Scanner in= new Scanner(System.in);
		
		while(in.hasNext()) {
			BigInteger num1= BigInteger.valueOf(1);
			BigInteger num2= BigInteger.valueOf(1);
			BigInteger num3= BigInteger.valueOf(1);	
					
			int total = in.nextInt();
			
			for(int i=0; i<total; i++){
				num3=num1.add(num2);
				num1=num2;
				num2=num3;
			}
			System.out.println(num3);
		}
	}	
}
