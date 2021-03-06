
public class Animal {	//	Animal 이라는 class 생성
	//	class에 선언된 변수를 객체 변수라고 한다
	String name;
	
	//	현재 객체 변수 name이 어떤값을 가지고 있는지 출력해 보자
	
	//	"객체 변수를 출력하려면 어떻게 접근해야 하는가?"
	//	객체 변수는 도트 연산자(.)를 이용하여 접근이 가능하다
	
	//	class에 의해 만들어진 객체를 인스턴스 라고 한다
	//	그러므로 cat은 객체이다. cat이라는 객체는 Animal의 인스턴스 이다.
	//	인스턴스는 특정 객체(cat)가 어떤 클래스(Animal)의 객체인지를 관계위주로 설명할때 사용한다
	
	//	객체 변수에 값을 대입하는 가장 보편적인 방법은 메소드를 이용하는 것이다
	//	setName 메소드를 추가한다
	//	입력값:String name , 출력값:void(리턴값 없음)
	
	//	객체 변수에 접근하기 위해서 객체.변수 로 접근
	//	객체가 메소드를 호출하기 위해서는 객체.메소드 로 호출 가능
	public void setName(String name){
		//	this는 Animal 클래스에 의해서 생성된 객체를 지칭한다(=cat)
		this.name = name;
	}
	
	public static void main(String[] args){
		Animal cat = new Animal();
		cat.setName("bobby");
		
		Animal dog = new Animal();
		dog.setName("hope");
		
		System.out.println(cat.name);
		System.out.println(dog.name);
	}	
}
