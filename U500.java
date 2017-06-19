import java.util.Scanner;
import java.math.BigInteger;

public class U500 {

	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		while(in.hasNext()) {
			BigInteger num, total;
			int atto= in.nextInt();
			
			total = BigInteger.valueOf(1);
			num = BigInteger.valueOf(atto);
			
			for(int i=2; i<=atto; i++) {
				total = total.multiply(num);
				num= BigInteger.valueOf(i);
			}
			
			System.out.println(num+"!\n"+total);
		}
	}

}

