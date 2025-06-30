import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SumCalculator extends JFrame {

    private JTextField num1Field, num2Field;
    private JButton calculateButton;
    private JLabel sumLabel;

    public SumCalculator() {
        super("Sum Calculator");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 150);
        setLayout(new GridLayout(3, 2));

        num1Field = new JTextField();
        add(new JLabel("Number 1:"));
        add(num1Field);

        num2Field = new JTextField();
        add(new JLabel("Number 2:"));
        add(num2Field);

        calculateButton = new JButton("Calculate Sum");
        add(calculateButton);
        calculateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    int num1 = Integer.parseInt(num1Field.getText());
                    int num2 = Integer.parseInt(num2Field.getText());
                    int sum = num1 + num2;
                    sumLabel.setText("Sum: " + sum);

                } catch (NumberFormatException ex) {
                    JOptionPane.showMessageDialog(null, "Invalid input. Please enter numbers only.", "Error",
JOptionPane.ERROR_MESSAGE);
                }
            }
        });

        sumLabel = new JLabel();
        add(sumLabel);

        setVisible(true);
    }

    public static void main(String[] args) {
        new SumCalculator();
    }
}