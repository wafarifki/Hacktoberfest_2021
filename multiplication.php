<form action="multiplication.php" method="post">
    Input Numbers <input type="number" name="number1">
    Input Numbers <input type="number" name="number2">
    <button type="submit">Count</button>
</form>
<?php
if (isset($_POST["number1"])) {
    $number1 = $_POST["number1"];
    $number2 = $_POST["number2"];
    $hasil = $number1 * $number2;
    echo $hasil;
}
?>