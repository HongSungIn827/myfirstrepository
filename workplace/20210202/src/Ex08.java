
public class Ex08 {
	public static void main(String[] args){
		int num1 = 1;
		int num2 = 100;
		
		do{
			System.out.println(num1);
			num1++;
		}while(num1<101);
		
		System.out.println("\n");
		
		do{
			System.out.println(num2);
			num2--;
		}while(num2<101 && num2>0);
	}

}
