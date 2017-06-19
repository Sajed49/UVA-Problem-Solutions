import java.util.Scanner;
import java.math.BigInteger;

public class If_We_Were_a_Child_Again {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		while(in.hasNext()) {
			
			BigInteger num1= in.nextBigInteger();
			char c = in.next().charAt(0);
			BigInteger num2= in.nextBigInteger();
			
			if(c=='/') System.out.println(num1.divide(num2));
			else System.out.println(num1.mod(num2));
		}
		
	}

}
