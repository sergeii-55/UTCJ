<?php
define('HOST','localhost');
define('USER','u676715076_root');
define('PASS','123456');
define('DB','u676715076_fara');
 
$con = mysqli_connect(HOST,USER,PASS,DB);
 
$username = $_POST['username'];
$password = $_POST['password'];
 
$sql = "select * from usuario where username='$username' and password='$password'";
 
$res = mysqli_query($con,$sql);
 
$check = mysqli_fetch_array($res);
 
if(isset($check)){
echo 'acceso correcto';
}else{
echo 'error!!!';
}
 
mysqli_close($con);
?>