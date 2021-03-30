
public class Ex01 {
	public static void main(String[] args){
		Person p1 = new Person("노사연");
		Person p2 = new Person("김건모");
		
		System.gc();
		System.runFinalization();
		
		System.out.println("종료됨");
	}
}
