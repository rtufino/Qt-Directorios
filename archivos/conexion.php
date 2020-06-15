<?php

$servidor = "localhost";    // Ip o dominio del servidor de BDD
$usuario = "root";          // Nombre del usuario de BDD
$password = "";             // Contraseña del usuario BDD

// Crear la conexión
$conn = new mysqli($servidor, $usuario, $password);

// Verificar si la conexion es exitosa
if ($conn->connect_error){
    // Si hay un error en la conexión
    die("Conexión fallida: " . $conn->connect_error);
}else{
    // Si todo va bien
    echo "Conexión exitosa!";
}

// Cerrar la conexión
$conn->close();