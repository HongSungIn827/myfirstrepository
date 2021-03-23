import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		//	dao 인스턴스 생성
		Dao dao = new Dao();
		
		//	변수선언
		int opt;
		
		while(true){
			System.out.println("실행 할 작업의 번호를 입력하시오");
			System.out.println("1. Insert");
			System.out.println("2. Delete");
			System.out.println("3. Search");
			System.out.println("4. Update");
			System.out.println("5. Exit 프로그램 종료");
			
			opt = sc.nextInt();
			
			switch(opt){
			case 1:
			}
		}
		
	}
}
