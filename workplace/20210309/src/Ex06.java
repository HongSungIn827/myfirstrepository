class Box{
	private String content;
	Box(){}
	Box(String content){
		this.content = content;
	}
	
	/*
	 * alt + shift + s -> toString �����
	 * alt + shift + r -> getter setter �����
	 * alt + shift + o -> ������ �����
	 * 
	 */
	
	@Override
	public String toString(){
		return "Box [content = " + content + "]";
	}
}

/*
 *  import java.lang.*
 *  toString() ����
 *  �⺻ ������ ����
 *  this ����
 */

public class Ex06 {
	public static void main(String[] args){
		StringBuilder stb = new StringBuilder("12");
		stb.append("34");
		System.out.println(stb.toString());
		System.out.println(stb);
		
		Box box = new Box("apple"); // �⺻ �����ڵ� ���� �Ǿ��� ǥ��
		System.out.println(box);
		System.out.println(box.toString());
	}
}