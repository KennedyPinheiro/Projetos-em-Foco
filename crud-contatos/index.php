<?php 
include 'db.php'; 


function formatPhone($phone) {
    return preg_replace("/^(\d{2})(\d{5})(\d{4})$/", "($1)$2-$3", $phone);
}


function formatCPF($cpf) {
    return preg_replace("/^(\d{3})(\d{3})(\d{3})(\d{2})$/", "$1.$2.$3-$4", $cpf);
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD de Contatos</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <img  class="card-logo" src="./images/logo.png" alt="">
        <h1>Gerenciamento de Contatos</h1>

        <form action="process.php" method="POST">
            <input type="text" name="name" placeholder="Nome" required>
            <input type="text" id="phone" name="phone" placeholder="Telefone" required>
            <input type="text" id="cpf" name="cpf" placeholder="CPF" required>
            <input type="email" name="email" placeholder="Email" required>
            <button type="submit" name="save">Adicionar Contato</button>
        </form>

        <table>
            <thead>
                <tr>
                    <th>Nome</th>
                    <th>Telefone</th>
                    <th>CPF</th>
                    <th>Email</th>
                    <th>Ações</th>
                </tr>
            </thead>
            <tbody>
                <?php
                $result = $conn->query("SELECT * FROM contacts");

                while ($row = $result->fetch_assoc()): ?>
                    <tr>
                        <td><?php echo htmlspecialchars($row['name']); ?></td>
                        <td><?php echo htmlspecialchars(formatPhone($row['phone'])); ?></td>
                        <td><?php echo htmlspecialchars(formatCPF($row['cpf'])); ?></td>
                        <td><?php echo htmlspecialchars($row['email']); ?></td>
                        <td>
                            <a href="index.php?edit=<?php echo $row['id']; ?>">Editar</a>
                            <a href="process.php?delete=<?php echo $row['id']; ?>">Deletar</a>
                        </td>
                    </tr>
                <?php endwhile; ?>
            </tbody>
        </table>

        <?php
        if (isset($_GET['edit'])):
            $id = $_GET['edit'];
            $result = $conn->query("SELECT * FROM contacts WHERE id=$id");

            if ($result->num_rows > 0):
                $row = $result->fetch_assoc();
        ?>
            <form action="process.php" method="POST">
                <input type="hidden" name="id" value="<?php echo $row['id']; ?>">
                <input type="text" name="name" value="<?php echo htmlspecialchars($row['name']); ?>" required>
                <input type="text" id="phone-edit" name="phone" value="<?php echo htmlspecialchars($row['phone']); ?>" required>
                <input type="text" id="cpf-edit" name="cpf" value="<?php echo htmlspecialchars($row['cpf']); ?>" required>
                <input type="email" name="email" value="<?php echo htmlspecialchars($row['email']); ?>" required>
                <button type="submit" name="update">Atualizar Contato</button>
            </form>
        <?php endif; endif; ?>
    </div>

    <script src="script.js"></script> <!-- Link para o arquivo JavaScript externo -->
</body>
</html>
