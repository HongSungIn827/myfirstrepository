
public class Ex01 {
	public static void main(String[] args){
		int i =1;
		while(i<100){
			i++;
			if (i % 7 == 0){
				System.out.println("i = "+i);
				continue;
			}
			if (i % 9 == 0){
				System.out.println("i = "+i);
				continue;
			}	
		}
	}

}