package sample;
import javafx.event.ActionEvent;
import javafx.fxml.Initializable;
import javafx.scene.control.TextField;

import java.net.URL;
import java.util.ResourceBundle;


public class Controller implements Initializable {
    public TextField firstNumberTextField,secondNumberTextField,resultTextField;



    public void calculateAdd(ActionEvent actionEvent) {

        double first = Double.parseDouble(firstNumberTextField.getText());
        double second = Double.parseDouble(secondNumberTextField.getText());
        resultTextField.setText(String.valueOf(first + second));
    }

    public void calculateSubtract(ActionEvent actionEvent) {

        double first = Double.parseDouble(firstNumberTextField.getText());
        double second = Double.parseDouble(secondNumberTextField.getText());
        resultTextField.setText(String.valueOf(first - second));
    }

    public void calculateMultiply(ActionEvent actionEvent) {

        double first = Double.parseDouble(firstNumberTextField.getText());
        double second = Double.parseDouble(secondNumberTextField.getText());
        resultTextField.setText(String.valueOf(first * second));
    }

    public void calculateDivision(ActionEvent actionEvent) {

        double first = Double.parseDouble(firstNumberTextField.getText());
        double second = Double.parseDouble(secondNumberTextField.getText());
        resultTextField.setText(String.valueOf(first / second));
    }
    public void initialize(URL url, ResourceBundle rb){
        resultTextField.setEditable(false);
    }
}




