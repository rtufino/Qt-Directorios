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
echo "<h1>Todos los registros</h1>";
// Crear la sentencia de consulta SQL 
$sentencia = "select * from variables order by fecha DESC";
// Ejecutar la consulta y almacenar el resultado
$resultado = $conn->query($sentencia);
// Verificar si la consulta arrojó resultados
if ($resultado->num_rows > 0) {
    // recorrer todos los registros del resultado
    while($registro = $resultado->fetch_assoc()){
        // imprimir los resultados
        echo "id: " . $registro["id"] . ", fecha: " 
             . $registro["fecha"] . ", temperatura: " 
             . $registro["temperatura"] . ", humedad: "
             . $registro["humedad"] . ", estado: "
             . $registro["estado"] . "<br>"; 
    }
} else {
    echo "0 resultados";
}

echo "<h1>Registros con estado = 0 del 2020</h1>";
// Consulta de registros con estado = 1
$sentencia = "select * from variables where estado = 0 and year(fecha) = 2020";
// Ejecutar la consulta y almacenar el resultado
$resultado = $conn->query($sentencia);
// Verificar si la consulta arrojó resultados
if ($resultado->num_rows > 0) {
    // recorrer todos los registros del resultado
    while($registro = $resultado->fetch_assoc()){
        // imprimir los resultados
        echo "id: " . $registro["id"] . ", fecha: " 
             . $registro["fecha"] . ", temperatura: " 
             . $registro["temperatura"] . ", humedad: "
             . $registro["humedad"] . ", estado: "
             . $registro["estado"] . "<br>"; 
    }
} else {
    echo "0 resultados";
}


$conn->close();
