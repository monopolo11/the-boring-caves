<!doctype html>
<html>
<head>
<?php include("../assets/header.html");?>
<title>The Boring Caves</title>
</head>

<body class="lato text-center">
<?php include("../assets/navbarout.html");?>


<div>

<?php
session_start();
include 'creds.php';
switch ($_SESSION['Gamestate']) {
  case '1':
    echo "<h1>Terminaste el juego!</h1> ";
    break;
  case '2':
    echo "<h1>Game Over</h1> ";
    break;
}

if(isset($_SESSION['Name'])){
    echo "<h1>".$_SESSION['Name'].", tu score fue de: ".$_SESSION['Score']."</h1></br> ";
  }


// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
//check if exists
$sql = "SELECT * FROM TBC";
$result = $conn->query($sql);
$primero = array("Name"=>"", "Score"=>0);
$segundo = array("Name"=>"", "Score"=>0);
$tercero = array("Name"=>"", "Score"=>0);
echo "<h1>Highscore</h1>
</br>";
//definir primero
if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
      if ($row["score"]>$primero["Score"]) {
        $primero["Score"]=$row["score"];
        $primero["Name"]=$row["name"];
      }
    }
}
//definir sgundo
$result = $conn->query($sql);
if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
      if ($row["score"]>$segundo["Score"]&&$row["score"]<$primero["Score"]) {
        $segundo["Score"]=$row["score"];
        $segundo["Name"]=$row["name"];
      }
    }
}
//definir tercero
$result = $conn->query($sql);
if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
      if ($row["score"]>$tercero["Score"]&&$row["score"]<$segundo["Score"]) {
        $tercero["Score"]=$row["score"];
        $tercero["Name"]=$row["name"];
      }
    }
}
if ($primero["Score"]!=0) {
  echo "<h2>1. <b>Nombre:</b> ".$primero["Name"]." <b>Score:</b> ".$primero["Score"]."</h2><br>";
}
if ($segundo["Score"]!=0) {
echo "<h2>2. <b>Nombre:</b> ".$segundo["Name"]." <b>Score:</b> ".$segundo["Score"]."</h2><br>";
}
if ($tercero["Score"]!=0) {
echo "<h2>3. <b>Nombre:</b> ".$tercero["Name"]." <b>Score:</b> ".$tercero["Score"]."</h2><br>";
}
$conn->close();

?>
<h3><strong><a href="The_Boring_Caves.exe">Descargar</a></strong></h3>
</div>
</body>
</html>
