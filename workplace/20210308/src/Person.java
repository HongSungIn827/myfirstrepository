import java.lang.*; // ��������

/*
 * java
 * 
 * �������� ������
 * public protected default private
 * 
 * static -> ���α׷� ���۰� ����� ��� �����Ѵ�
 * ����,�޼���
 * 
 * ������ �����ε�
 * super
 * this �� 1.�����ڿ��� ȣ�� 2.Ŭ���� ������ ������ �� ���
 */

class AAAA{
	AAAA(){System.out.println("����Ŭ���� ������");}
}

// 1.setter getter
// 2.�����ڸ� ���ؼ� ������

public class Person extends AAAA {
	private String name;
	private int age;
	
	// ������ �����ε�
	public Person() {
		super();	// �������� ������ ȣ��ÿ� �ٷ� �� �����ٿ� ��ġ
	}

	public Person(String name, int age) {
		super();	// ��������
		this.name = name;
		this.age = age;
	}
	
	public void doPrint(){
		System.out.println("name = "+name);
		System.out.println("age = "+age);
	}
	
	// ������ �ڵ� ����� alt + shift + s �׸��� o
	
}
