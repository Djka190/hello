<?php 
    $php = "$$ PHP ćwiczymy string $$";
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title><?=$php;?></title>
</head>
<body>
    <a href="<?php echo 'https://kamakaczmarek.net'; ?>">Materiały do nauki</a>

    <?php
    $zmienna1 = 2;
   //wyświetlanie HTML w PHP  
   echo "<p>użycie HTML w PHP".$zmienna1."</p>";  
    ?>
    <p>użycie PHP w HTML <?php echo $zmienna1; ?></p>
    <p>użycie PHP w HTML w skróconej formie <?=$zmienna1;?></p>
    <h2><?=$php;?></h2>
</body>
</html>