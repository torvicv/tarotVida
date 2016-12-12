<?php

include 'texto.inc';

class tarot extends texto{
    
    function menu(){
    ?>
       <!-- <div class="menu">
            <ul>
                <li><a href="index.php" >Inicio</a></li>
                <li><a href="#" class="active">Tarot</a></li>
                <li><a href="cartasEspanolas.php">Cartas españolas</a></li>
            </ul>
        </div>-->
    <div class="flex-container flex-menu">
        <div class="flex-items">
            <div class="flex-item"><a href="index.php" >Inicio</a></div>
            <div class="flex-item active"><a href="tarot.php" class="">Tarot</a></div>
            <div class="flex-item"><a href="cartasEspanolas.php">Cartas españolas</a></div>
        </div>
    </div>
</header>
    <?php
    }
    
}

$paginaTarot = new tarot();
$paginaTarot->setTitle("Tarot en Sevilla");
$paginaTarot->setDescription("Consultas de Tarot y Cartas Españolas en Sevilla, ¡entra ahora y solicita tu consulta!");
$paginaTarot->setKeywords("consulta de tarot, vidente en Sevilla, tarot en Sevilla, cartas españolas en Sevilla, "
        . "cartomancia en Sevilla, lectura de cartas en Sevilla, cartomancia, lectura de cartas, tarot economico, videncia "
        . "tarot, tarot baraja española, tarot del amor, tarot del trabajo, tarot de la salud, videntes buenas, "
        . "vidente natural, tarot por teléfono, echar las cartas, tirar las cartas españolas, vidente particular"
        . ", tarot osho, tarot rider waite");
$paginaTarot->setPaginaTexto("<section><div class='flex-container2'><h1>Oráculo del Tarot</h1><div class='center font'>"
        . "<p>El <em>Tarot</em>, se emplea para la adivinación, "
        . "aunque no es sólo un sistema de adivinación. Por su riqueza simbólica y su sabiduría psicológica, es una "
        . "poderosa herramienta de autoconocimiento y crecimiento personal.</p><p>Al igual que el <em>tarot "
        . "rider waite y el tarot osho</em> también se emplean para la <em>lectura de cartas</em> y de los cuales "
        . "poseo un amplio conocimiento.</p><p>Las consultas de tarot pueden realizarse por teléfono o "
        . "particulares.</p></div>");
$paginaTarot->mostrar();