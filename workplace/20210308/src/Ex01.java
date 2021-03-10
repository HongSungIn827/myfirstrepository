class StaticValues{
	static int A = 10; // 표준 규율
	int b = 20;
}
class A{
	public void doPrintStaticA(){
		System.out.println("SV.A = "+StaticValues.A++);
		StaticValues sv = new StaticValues();
		System.out.println("SV.b = "+sv.b++);
		}
}
class B{
	public void doPrintStaticA(){System.out.println("SV.A = "+StaticValues.A++);}
}
public class Ex01 {
	/*
	 * 데이터 영역 = 값을 저장,프로그램 시작에서 종료시까지
	 * 스텍 영역 = 함수에서 기본변수를 선언시에 사용하고 함수 종료할때 메모리에서 삭제
	 * 힙 영역 = molloc calloc realloc free함수를 개발자가 사용해서 직접 입력하고 메모리 할당 및 삭제
	 */
	public static void main(String[] agrs){
		A a = new A();		// 힙영역
		a.doPrintStaticA();
		B b = new B();
		b.doPrintStaticA();
		System.out.println("SV.A = "+StaticValues.A);
	}
}
