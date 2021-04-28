<?php
//aqui va el codigo
$token = "1712327670:AAECxkxmcr28lQhbfOEqUppRCSQIveWK2Wg";
$website = "https://api.telegram.org/bot".$token;

$input = file_get_contents("php://input");
$update =json_decode($input, true);

$chatId = $update["message"]["chat"]["id"];
$message = $update["message"]["text"];

switch ($message) {
	case 'hola':
		$response = "que tal";
	case "/start":
		$response = "hola soy el bot de ricardo, si eres fernando vete"
	case "/info":
		$response ="esta es la informacion";
		break;
		default:
		$response = "no te entiendo";
		break;
}
function sendMessage($chatId, $response); {
	$url= $GLOBALS["website"]."/sendMessage?chatId=".$GLOBALS["chatId"]."&parse_mode=HTML&text=".urlencode($response);
	file_get_contents($url);

}
?>