
public class UniFriend extends Friend{
	public UniFriend(String name, String number) {
		super(name, number);
		// TODO Auto-generated constructor stub
	}
	String major;
	public UniFriend(String name, String number, String major) {
		super(name, number);
		this.major = major;
	}
	@Override
	public String toString() {
		return "UniFriend [major=" + major + ", name=" + name + ", number=" + number + "]";
	}
	

}
