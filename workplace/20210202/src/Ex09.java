
public class Ex09 {
	public static void main(String[] args){
		int num = 1;
		int sum = 0;
		
		
		while(num<=1000){
			if(num%2==0 && num%7==0){
//				System.out.println(num);
				sum += num;
			}else{
//				System.out.println("out");
			}
			num++;
		}
		System.out.println(sum);
		
//		for(num = 1 ; num <= 1000 ; num++){
//			if(num%2==0 && num%7==0){
//				System.out.println(num);
//			}else{
//				System.out.println("out");
//			}
//		}
	
	}

}
