<?php

$servidor = "localhost";    // Ip o dominio del servidor de BDD
$usuario = "root";          // Nombre del usuario de BDD
$password = "";             // Contraseña del usuario BDD
$base_datos = "ambiente";   // Nombre de la base de datos

// Crear la conexión con la Base de datos específica
$conn = new mysqli($servidor, $usuario, $password, $base_datos);

// Verificar si la conexion es exitosa
if ($conn->connect_error){
    // Si hay un error en la conexión
    die("Conexión fallida: " . $conn->connect_error);
}

// Crear consulta SQL para insertar un registro
$sql = "insert into variables (fecha, temperatura, humedad, estado)
        values ('2020-05-13 21:22:51', 11.27, 37, 1)";
// Ejecutar la sentencia de insert
$respuesta = $conn->query($sql);
// Verificar si todo fue bien
if ($respuesta == TRUE){
    echo "Nuevo registro insertado exitósamente";
}else {
    echo "ERROR: " . $sql . "<br>" . $conn->error;
}

$conn->close();
