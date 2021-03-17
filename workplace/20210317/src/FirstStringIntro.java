
public class FirstStringIntro {
	public static void main(String[] args){
		// 문자열 선언과 동시에 참조변수로 참조한다
		String str1 = "Seize";
		String str2 = "the day";
		System.out.println(str1+" "+str2);
		
		printString(str1);
		printString(str2);
	}
	
	// String 참조변수를 매개변수로 선언하여 문자열을 전달 받을 수 있는
	// printString 매소드를 생성한다
	public static void printString(String str){
		System.out.println(str);
	}
}
