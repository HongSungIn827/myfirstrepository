
public class Animal {
	// Animal 클래스에 name 이라는 String 변수 추가
	// 클래스에 선언된 변수를 객체 변수(인스턴스 변수)라고 한다
	String name;
	
	public void setName(String name){
		this.name = name;
	}
	
	public static void main(String[] args){
		Animal cat = new Animal();
		Animal dog = new Animal();
		
		// setName 메소드 호출하기
		cat.setName("Rooney");
		dog.setName("Bobby");
		
		System.out.println("cat = "+cat.name);
		System.out.println("dog = "+dog.name);
		System.out.println(cat);
		System.out.println(dog);
	}
}