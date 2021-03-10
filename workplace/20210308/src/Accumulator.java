
public class Accumulator {
	static int sum = 0;
	
	static void add(int n){
		sum+=n;
	}
	
	static void showResult(){
		System.out.println("sum = "+sum);
	}
}
