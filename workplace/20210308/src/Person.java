import java.lang.*; // 생략가능

/*
 * java
 * 
 * 접근제어 지시자
 * public protected default private
 * 
 * static -> 프로그램 시작과 종료시 계속 상주한다
 * 변수,메서드
 * 
 * 생성자 오버로딩
 * super
 * this 는 1.생정자에서 호출 2.클래스 변수를 참조할 때 사용
 */

class AAAA{
	AAAA(){System.out.println("상위클래스 생성자");}
}

// 1.setter getter
// 2.생성자를 통해서 값설정

public class Person extends AAAA {
	private String name;
	private int age;
	
	// 생성자 오버로딩
	public Person() {
		super();	// 생략가능 생성자 호출시에 바로 그 다음줄에 위치
	}

	public Person(String name, int age) {
		super();	// 생략가능
		this.name = name;
		this.age = age;
	}
	
	public void doPrint(){
		System.out.println("name = "+name);
		System.out.println("age = "+age);
	}
	
	// 생성자 자동 만들기 alt + shift + s 그리고 o
	
}
