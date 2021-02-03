
public class EX02 {
	// ctrl + f11 = 그냥 실행
	// f11 = 디버그 모드 실행
	
	// f5 =  디버크 모드 실행
	// ctrl + f5 = 그냥 실행
	// f6 = 한줄씩 진행
	
	public static void main(String[] args){
		System.out.println("프로그램 시작");
		doA(12);
		doA(13);
		System.out.println("프로그램 끝");
	}
	// 메서드 오버로딩 기법 : 매개변수가 다르면 함수명이 같아도 된다
	public static void doA(int age){
		System.out.println("doA시작");
		System.out.println("age = "+age);
		System.out.println("doA 끝");
	}
	public static void doA(int age, int height){
		System.out.println("doA시작");
		System.out.println("age = "+age);
		System.out.println("doA 끝");
	}

}
