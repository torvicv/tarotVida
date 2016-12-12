<?php

include 'funciones.inc';

class envioFormulario extends funciones{
   function mostrar(){
        $this->doHtmlHeader($this->getTitle, $this->getDescription, $this->getPalabrasClave);
        $this->separador();
        $this->contenedor($this->imagenes_cabecera);
        $this->separador2();
        $this->script();
        $this->slider($this->imagenes_enlaces);
        $this->caption($this->titulos);
        $this->nivoSlider();
        $this->envioFormulario();
        $this->doHtmlFooter();
    } 
}

$paginaEnvioFormulario = new envioFormulario();
$paginaEnvioFormulario->setTitle("Envio de formulario");
$paginaEnvioFormulario->setDescription("pagina de confirmacion de envio de formulario");
$paginaEnvioFormulario->setKeywords("consulta de tarot, vidente en Sevilla, tarot en Sevilla, cartas españolas en Sevilla, "
        . "cartomancia en Sevilla, lectura de cartas en Sevilla, cartomancia, lectura de tarot, tarot economico, videncia "
        . "tarot, tarot baraja española, tarot del amor, tarot del trabajo, tarot de la salud, videntes buenas, "
        . "vidente natural, tarot por teléfono, echar las cartas, tirar las cartas españolas, vidente particular"
        . ", tarot osho, tarot rider waite");
$paginaEnvioFormulario->mostrar();