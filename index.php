<?php

include 'funciones.inc';

class index extends funciones{
    
            
    function mostrar(){
        $this->doHtmlHeader($this->getTitle, $this->getDescription, $this->getPalabrasClave);
        $this->separador();
        $this->bienvenida();
        $this->contenedor($this->imagenes_cabecera);
        $this->separador2();
        $this->presentacion();
        $this->script();
        $this->slider($this->imagenes_enlaces);
        $this->caption($this->titulos);
        $this->nivoSlider();
        //$this->cajas(); esto si quiero poner las cajas de contenido e imagen en la página
        $this->informacion();
        $this->formulario();
        $this->doHtmlFooter();
    }
}

$paginaIndex = new index();
$paginaIndex->setTitle("Tarot y cartas españolas en Sevilla");
$paginaIndex->setDescription("Consultas de Tarot y Cartas Españolas en Sevilla, ¡entra ahora y solicita tu consulta!");
$paginaIndex->setKeywords("consulta de tarot, vidente en Sevilla, tarot en Sevilla, cartas españolas en Sevilla, "
        . "cartomancia en Sevilla, lectura de cartas en Sevilla, cartomancia, lectura de tarot, tarot economico,"
        . " videncia tarot, tarot baraja española, tarot del amor, tarot del trabajo, tarot de la salud, videntes "
        . "buenas, vidente natural, tarot por teléfono, echar las cartas, tirar las cartas españolas, vidente "
        . "presenciales, limpiezas energéticas, limpiezas de aura ");
$paginaIndex->mostrar();