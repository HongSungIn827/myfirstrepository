
public class ComFriend extends Friend{
	String depart;
	public ComFriend(String name, String number, String depart) {
		super(name, number);
		this.depart = depart;
	}
	@Override
	public String toString() {
		return "ComFriend [depart=" + depart + ", name=" + name + ", number=" + number + "]";
	}
	

}
