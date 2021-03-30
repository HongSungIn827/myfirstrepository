import javax.swing.JPanel;
import javax.swing.JButton;
import javax.swing.JLabel;

public class CPanel extends JPanel{
	public CPanel() {
		setLayout(null);
		
		JLabel lblNewLabel = new JLabel("New label");
		lblNewLabel.setBounds(88, 79, 57, 15);
		add(lblNewLabel);
		
		JButton btnNewButton = new JButton("New button");
		btnNewButton.setBounds(207, 75, 97, 23);
		add(btnNewButton);
	}
}
