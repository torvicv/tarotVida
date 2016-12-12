<?php

include 'funciones.inc';

class texto extends funciones{
    
    function mostrar(){
        $this->doHtmlHeader($this->getTitle, $this->getDescription, $this->getPalabrasClave);
        $this->mostrarPaginaTexto($this->paginaTexto);
        $this->informacion();
        $this->formulario();
        $this->doHtmlFooter();
    }
}