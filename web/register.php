<!doctype html>
<html>
<head>
<?php include("../assets/header.html");?>
<title>Registro</title>
</head>

<body class="lato text-capitalize text-center">

<?php
include 'creds.php';
session_start();
$name = $_GET[name];
$score = $_GET[score];
$gamestate = $_GET[gamestate];
$_SESSION['Name']=$name;
$_SESSION['Score']=$score;
$_SESSION['Gamestate']=$gamestate;

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "INSERT INTO TBC (name, score)
VALUES ('$name', '$score')";

if ($conn->query($sql) === TRUE) {
    header('Location: '.'https://monopolo11.com/TBC');
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
echo "<h1>".$_SESSION['Name']."To score fue de: ".$_SESSION['Score']."</h1> ";
?>
<p><strong><a href="index.php">Pagina Principal</a></strong></p>
</div>
</body>
</html>
