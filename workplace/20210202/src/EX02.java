
public class EX02 {
	// ctrl + f11 = �׳� ����
	// f11 = ����� ��� ����
	
	// f5 =  ���ũ ��� ����
	// ctrl + f5 = �׳� ����
	// f6 = ���پ� ����
	
	public static void main(String[] args){
		System.out.println("���α׷� ����");
		doA(12);
		doA(13);
		System.out.println("���α׷� ��");
	}
	// �޼��� �����ε� ��� : �Ű������� �ٸ��� �Լ����� ���Ƶ� �ȴ�
	public static void doA(int age){
		System.out.println("doA����");
		System.out.println("age = "+age);
		System.out.println("doA ��");
	}
	public static void doA(int age, int height){
		System.out.println("doA����");
		System.out.println("age = "+age);
		System.out.println("doA ��");
	}

}