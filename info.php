<?php
    // phpinfo();
    $x = 5;
    $y = 2;
    echo "lol \"lol\" lol";
    echo "<br>";
    echo "$x";
    echo "<br>";
    echo $x+$y;
    echo "<br>";
    $tablica = array("jay" => "niebieski"); 
    echo "wartość dla indeksu = {$tablica['jay']}";
    echo "<br>";
    echo ($x > 2) ? 'true' : 'false'; 
    echo '<br>';
    define('STALA','37');
    echo STALA;
    echo "<br>";
    $A = 5; $B = 9; $C = 5;
// Operatory porównania zwracają TRUE lub FALSE więc używamy komendy var_dump()
var_dump( $A == $B );
var_dump( $A != $B );
var_dump( $A == $C );
var_dump( $A === $C );
?>