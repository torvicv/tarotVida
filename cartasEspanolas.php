<?php

include 'texto.inc';

class cartasEspanolas extends texto{
    
    function menu(){
    ?>
        <!--<div class="menu">
            <ul>
                <li><a href="index.php" >Inicio</a></li>
                <li><a href="tarot.php" >Tarot</a></li>
                <li><a href="#" class="active">Cartas españolas</a></li>
            </ul>
        </div>-->
    <div class="flex-container flex-menu">
        <div class="flex-items">
            <div class="flex-item"><a href="index.php">Inicio</a></div>
            <div class="flex-item"><a href="tarot.php">Tarot</a></div>
            <div class="flex-item"><a href="cartasEspanolas.php" class="active">Cartas españolas</a></div>
        </div>
    </div>
</header>
    <?php
    }
    
}

$paginaCartas = new cartasEspanolas();
$paginaCartas->setTitle("Cartas españolas en Sevilla");
$paginaCartas->setDescription("Consultas de Tarot y Cartas Españolas en Sevilla, ¡entra ahora y solicita tu consulta!");
$paginaCartas->setKeywords("consulta de tarot, vidente en Sevilla, tarot en Sevilla, cartas españolas en Sevilla, "
        . "cartomancia en Sevilla, lectura de cartas en Sevilla, cartomancia, lectura de tarot, tarot economico, videncia "
        . "tarot, tarot baraja española, tarot del amor, tarot del trabajo, tarot de la salud, videntes buenas, "
        . "vidente natural, tarot por teléfono, echar las cartas, tirar las cartas españolas, vidente particular"
        . ", tarot osho, sistema holistico");
$paginaCartas->setPaginaTexto("<section><div class='flex-container2'><h1>Oráculo de las Cartas Españolas</h1 ><div class='center font'><p>"
        . "La <em>baraja española</em>, en la que me inicie, tiene más importancia simbólica que otros oráculos, "
        . "expresando a través de sus cuatro palos la vida cotidiana: en el amor, salud, dinero, trabajo..."
        . ". Siendo uno de los oráculos por el que canalizo mi <strong>videncia</strong>.</p>"
        . "<p class='centered'>Mi sistema es holístico. Y si te puedo ayudar, cuenta conmigo.</p>"
        . "<p class='centered'>Y ... contacta.</p><p class='centered'>Atiendo personalmente.</p></div>");
$paginaCartas->mostrar();