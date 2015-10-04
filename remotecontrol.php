<html>
<head>
</head>
<body>
<form method=GET action="remotecontrol.php">
<input name="button" type="submit" value="on">
<input name="button" type="submit" value="off">
<input name="button" type="submit" value="no function">
</form>

<?php

if ($_GET["button"] == "on")
{
system("gpio mode 2 output");
system("gpio write 2 1");
};

if ($_GET["button"] == "off")
{
system("gpio mode 2 output");
system("gpio write 2 0");
};
?>

</body>
<html>
