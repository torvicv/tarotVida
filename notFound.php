<?php

include 'funciones.inc';
class page404 extends funciones{
    function notFound(){
        ?>
<div class="page404 font">
    <p>Error 404: página no encontrada.</p>
    <p>Perdone las molestias, por motivos ajenos a nuestra voluntad la página no se puede mostrar.</p>
    <p>Desea intentar entrar en otra página:</p>
    <ul>
        <li><a href="index.php">En la página de inicio</a></li>
        <li><a href="tarot.php">En la página de tarot</a></li>
        <li><a href="cartasEspanolas.php">En la página de cartas españolas</a></li>
    </ul>
</div>
<?php
    }
function mostrar(){
    $this->doHtmlHead($this->getTitle, $this->getDescription, $this->getPalabrasClave);
    $this->notFound();
}

}
$pagina404 = new page404();
$pagina404->setTitle("Error 404: página no encontrada");
$pagina404->setDescription("muestra el error de página no encontrada, y te da a elegir entre otras páginas "
        . "donde puedes entrar.");
$pagina404->setKeywords("Error 404, página no encontrada");
$pagina404->mostrar();