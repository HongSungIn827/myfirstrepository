import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JButton;

public class AAAA extends JFrame{
	private JTextField textField;
	public AAAA() {
		getContentPane().setLayout(null);
		
		textField = new JTextField();
		textField.setBounds(12, 10, 116, 21);
		getContentPane().add(textField);
		textField.setColumns(10);
		
		JButton btnNewButton = new JButton("btn1");
		btnNewButton.setBounds(152, 9, 97, 23);
		
		
		getContentPane().add(btnNewButton);
		
		super.setSize(500,600);
		super.setVisible(true);
	}
	public static void main(String[] args) {
		new AAAA();
	}
}
