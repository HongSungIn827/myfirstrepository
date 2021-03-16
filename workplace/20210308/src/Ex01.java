//class StaticValues{
//	static int A = 10; // ǥ�� ����
//	int b = 20;
//}
//class A{
//	public void doPrintStaticA(){
//		System.out.println("SV.A = "+StaticValues.A++);
//		StaticValues sv = new StaticValues();
//		System.out.println("SV.b = "+sv.b++);
//		}
//}
//class B{
//	public void doPrintStaticA(){System.out.println("SV.A = "+StaticValues.A++);}
//}
//public class Ex01 {
//	/*
//	 * ������ ���� = ���� ����,���α׷� ���ۿ��� ����ñ���
//	 * ���� ���� = �Լ����� �⺻������ ����ÿ� ����ϰ� �Լ� �����Ҷ� �޸𸮿��� ����
//	 * �� ���� = molloc calloc realloc free�Լ��� �����ڰ� ����ؼ� ���� �Է��ϰ� �޸� �Ҵ� �� ����
//	 */
//	public static void main(String[] agrs){
//		A a = new A();		// ������
//		a.doPrintStaticA();
//		B b = new B();
//		b.doPrintStaticA();
//		System.out.println("SV.A = "+StaticValues.A);
//	}
//}
