import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class form2 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Form");
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setLayout(new FlowLayout());

        JButton button = new JButton("Click Me");
        button.setPreferredSize(new Dimension(100, 40));
        button.addActionListener(new ActionListener() {
            private boolean isRed = false;

            @Override
            public void actionPerformed(ActionEvent e) {
                if (isRed) {
                    button.setBackground(null); 
                } else {
                    button.setBackground(Color.RED);
                }
                isRed = !isRed;
            }
        });

        ButtonGroup radioGroup = new ButtonGroup();

        JRadioButton option1 = new JRadioButton("Option 1");
        JRadioButton option2 = new JRadioButton("Option 2");
        JRadioButton option3 = new JRadioButton("Option 3");

        radioGroup.add(option1);
        radioGroup.add(option2);
        radioGroup.add(option3);

        option1.addActionListener(e -> JOptionPane.showMessageDialog(frame, "Option 1 Selected!"));
        option2.addActionListener(e -> JOptionPane.showMessageDialog(frame, "Option 2 Selected!"));
        option3.addActionListener(e -> JOptionPane.showMessageDialog(frame, "Option 3 Selected!"));

        frame.add(button);
        frame.add(option1);
        frame.add(option2);
        frame.add(option3);

        frame.setVisible(true);
    }
}