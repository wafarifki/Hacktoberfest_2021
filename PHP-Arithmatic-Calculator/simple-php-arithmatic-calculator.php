<?php
$res =''; //store the outputed value (added in html)

//if required form data submitted
if(isset($_POST['nr1']) && isset($_POST['nr2']) && isset($_POST['opr'])){
 //get form data
 $nr1 = floatval($_POST['nr1']);
 $nr2 = floatval($_POST['nr2']);
 $opr = trim(strip_tags($_POST['opr']));

 //calculate according to $opr
 if($opr =='+') $res = $nr1 + $nr2;
 else if($opr =='-') $res = $nr1 - $nr2;
 else if($opr =='*') $res = $nr1 * $nr2;
 else if($opr =='/') $res = $nr1 / $nr2;

 $res = $nr1 .' '. $opr .' '. $nr2 .' = '. number_format($res, 2);
}
?>
<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8" />
<title>Arithmetic calculator</title>
</head>
<body>
<?php echo $res; ?>
<form action="" method="post">
<input type ="number" name="nr1" id="nr1" step="any" value="0">
<select name="opr" id="opr">
<option value="+">+</option>
<option value="-">-</option>
<option value="*">*</option>
<option value="/">/</option>
</select>
<input type ="number" name="nr2" id="nr2" step="any" value=""><br>
<input type ="submit" value="Calculate">
</form>
</body>
</html>
