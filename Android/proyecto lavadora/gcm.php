<form action="gcm.php" method="post">
    <input type="text" name="mensaje"></input>
    <input type="submit"></input>
</form>



<?php

$mensaje=$_POST['mensaje'];


// API access key from Google API's Console
//cabiar ek 'tu api key' x el json de api service
define( 'API_ACCESS_KEY','AIzaSyCM3XpsU0vcIJtzUzMd7euerOfKv4S-RJI');

//cambiar el 'los ids de los telefonos' x el token que sale en le boton cuando se corre la aplicacion
//$registrationIds = ["dLVAFvALZ14:APA91bG1ZJBLfJ-uZP3TDT5b7dHa48n0BafxQdYGorfPvpfpfIe9k61W2KewQPfqFpytw6piacGA-0tRzec00Cn8MabHApBvUtHlC4XgnVAYV0Kviy-D5IZZAFlKKvoOx9QNRmHQBYECKNtjA8sLA9xXwxuF1BqHxQ"];
$registrationIds = ["d7YMm2nZak8:APA91bFnSZXWIBRKb88Gj7xpNcp0_ZGhDjOECBBiMWwCV50G5po-3nwPYiTOQuEgyMQX_lemEH7Mnci06yIZIEtYFkXF7b4F73av4BC3knmMbT6APhZzyqjT5WuNzzxoekA7BpBdv_Zy0LRmkuxAgtx1vLvmhRdZcQ"];


// prep the bundle
$msg = [
    'title'         => 'lavaMEX',
	'body'          => $mensaje
];

$fields = [
    'registration_ids'  => $registrationIds,
    'notification'              => $msg
];
$headers = [
    'Authorization: key='. API_ACCESS_KEY,
    'Content-Type: application/json'
];
$fields = json_encode( $fields );
$ch = curl_init();
curl_setopt( $ch,CURLOPT_URL, 'https://fcm.googleapis.com/fcm/send' );
curl_setopt( $ch,CURLOPT_POST, true );
curl_setopt( $ch,CURLOPT_HTTPHEADER, $headers );
curl_setopt( $ch,CURLOPT_RETURNTRANSFER, true );
curl_setopt( $ch,CURLOPT_SSL_VERIFYPEER, false );
curl_setopt( $ch,CURLOPT_POSTFIELDS, $fields );
$result = curl_exec($ch );
curl_close( $ch );

echo $result;
?>