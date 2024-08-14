<?php
include 'db.php';

// Adicionar novo contato
if (isset($_POST['save'])) {
    $name = $_POST['name'];
    $phone = $_POST['phone'];
    $cpf = $_POST['cpf'];
    $email = $_POST['email'];

    $conn->query("INSERT INTO contacts (name, phone, cpf, email) VALUES ('$name', '$phone', '$cpf', '$email')");

    header("Location: index.php");
    exit();
}

// Atualizar contato
if (isset($_POST['update'])) {
    $id = $_POST['id'];
    $name = $_POST['name'];
    $phone = $_POST['phone'];
    $cpf = $_POST['cpf'];
    $email = $_POST['email'];

    $conn->query("UPDATE contacts SET name='$name', phone='$phone', cpf='$cpf', email='$email' WHERE id=$id");

    header("Location: index.php");
    exit();
}

// Deletar contato
if (isset($_GET['delete'])) {
    $id = $_GET['delete'];

    $conn->query("DELETE FROM contacts WHERE id=$id");

    header("Location: index.php");
    exit();
}
?>
