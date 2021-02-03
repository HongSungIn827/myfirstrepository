
public class Ex08 {
	public static void main(String[] args){
		int n = 1;
		int result = 0;
		
		while(n>0 && n<100){
			result+=n;
			n++;
		}
		System.out.println("1부터 99까지의 합: "+result);
	}

}
