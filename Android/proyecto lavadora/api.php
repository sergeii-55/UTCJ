

<?php

if(isset($_GET['send_notification'])){
   send_notification ();
}

function send_notification()
{
	echo 'Hello';
define( 'API_ACCESS_KEY', 'AIzaSyBucZ9OQKSMLQKb_Wj-ERXoX6oiBDKesCw');
 $registrationIds =   ["dLVAFvALZ14:APA91bG1ZJBLfJ-uZP3TDT5b7dHa48n0BafxQdYGorfPvpfpfIe9k61W2KewQPfqFpytw6piacGA-0tRzec00Cn8MabHApBvUtHlC4XgnVAYV0Kviy-D5IZZAFlKKvoOx9QNRmHQBYECKNtjA8sLA9xXwxuF1BqHxQ"];
#prep the bundle
     $msg = array
          (
		'body' 	=> 'Firebase Push Notification',
		'title'	=> 'Vishal Thakkar',
             	
          );
	$fields = array
			(
				'to'		=> $_REQUEST['token'],
				'notification'	=> $msg
			);
	
	
	$headers = array
			(
				'Authorization: key=' . API_ACCESS_KEY,
				'Content-Type: application/json'
			);
#Send Reponse To FireBase Server	
		$ch = curl_init();
		curl_setopt( $ch,CURLOPT_URL, 'https://firebase.google.com/docs/cloud-messaging/http-server-ref' );
		curl_setopt( $ch,CURLOPT_POST, true );
		curl_setopt( $ch,CURLOPT_HTTPHEADER, $headers );
		curl_setopt( $ch,CURLOPT_RETURNTRANSFER, true );
		curl_setopt( $ch,CURLOPT_SSL_VERIFYPEER, false );
		curl_setopt( $ch,CURLOPT_POSTFIELDS, json_encode( $fields ) );
		$result = curl_exec($ch );
		echo $result;
		curl_close( $ch );
}
?>