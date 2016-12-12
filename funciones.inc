<?php

include 'outputHead.inc';

class funciones extends outputHead{
    var $getTitle ;
    var $getDescription;
    var $getPalabrasClave;
    var $imagenes_cabecera = array("tarot-videncia.jpg", "tarot-La-luna.jpg", "tarot-El-mundo.jpg", 
        "tarot-mitologico.jpg", "tarot-Los-cristales.jpg");
    var $imagenes_enlaces = array("tarot-vida-4.jpg", "tarot-vida-5.jpg");
    var $titulos = array("Oráculo del tarot" => "tarot.php",
                         "Oráculo de la baraja española" => "cartasEspanolas.php");
    var $paginaTexto;
    
    function setTitle($nuevoTitulo){
        $this->getTitle = $nuevoTitulo;
    }
    function setDescription($nuevaDescripcion){
        $this->getDescription = $nuevaDescripcion;
    }
    function setKeywords($nuevaPalabrasClave){
        $this->getPalabrasClave = $nuevaPalabrasClave;
    }
    function setPaginaTexto($nuevoTexto){
        $this->paginaTexto = $nuevoTexto;
    }
            function doHtmlHead($title, $description, $palabrasClave){
    $this->title($title);
    $this->charset();
    $this->description($description);
    $this->author();
    $this->palabrasClave($palabrasClave);
    $this->viewport();
    $this->pages_css();
    $this->prefix();
    $this->favicon();
    $this->angular();
}

function doHtmlHeader($title, $description, $palabrasClave){
    ?>
<!DOCTYPE html>
<html>
    <head>
        <?php
    $this->doHtmlHead($title, $description, $palabrasClave);
        ?>
    </head>
    <body>
        
        <?php
        include_once("analyticstracking.php");
        $this->logotipo();
        $this->menu();
}
function logotipo(){
    ?>
        <header>
            <div class="flex-container">
                <div class="flex-items flex-logo">
                    <div class="container"><img src="Imagenes/logo-tarot-vida.PNG" alt="logotipo" style="
                                                width: 150px; height: auto;"/></div>
                </div>
                <div class="flex-items flex-p">
                    <p style="color: darkslateblue; font-size: 20px;">Consultas de tarot y cartas españolas</p>
                    <p style="color: darkslateblue; font-size: 20px;">Limpiezas de aura y energéticas</p>
                </div>
            </div>
        <?php
}

function doHtmlFooter(){
    ?>
        <footer>Copyright &copy; 2016 | Diseñada por: Victor Cabral Vida</footer>
    </body>
</html>
    <?php
}

function menu(){
    ?>
<div class="flex-container flex-menu">
        <div class="flex-items">
        <!--<ul>
            <li><a href="index.php" class="active">Inicio</a></li>
            <li><a href="tarot.php">Tarot</a></li>
            <li><a href="cartasEspanolas.php">Cartas españolas</a></li>
        </ul>-->
        <div class="flex-item"><a href="index.php" class="active">Inicio</a></div>
        <div class="flex-item"><a href="tarot.php">Tarot</a></div>
        <div class="flex-item"><a href="cartasEspanolas.php">Cartas españolas</a></div>
    </div>
</div>
</header>
<?php
}

function separador(){
    ?>
        <div class="separador"></div> 
    <?php
}

function separador2(){
    ?>
        <div class="separador2"></div>
    <?php
}

function contenedor($imagenes){
    ?>
    <!--este section cierra en la función formulario-->
    <section>
        <div class="flex-container2">
            <div class="contenedor">
                <div id="slider1" class="nivoSlider" style="width: 400px; height: 350px;">
    <?php
            foreach ($imagenes as $imagen){
            ?>
                <div class="nivo-imageLink">
                                <img src="<?='Imagenes/'.$imagen?>" alt="<?='foto '.$imagen?>" class="portada" 
                                     style="width: 300px; height: 300px;"/>
                </div>
    <?php
        }
        ?>
                </div>
                <div class="texto">
                    <h1>Tarot y cartas españolas
      en Sevilla</h1>
                    <h2>Consultas cita previa</h2>
                    <p>*presenciales y telefónicas</p>
                    <h2>Contacta &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                        <span>675016413</span></h2>
                    <p>*rellenar formulario abajo o llámame</p>
                </div>
            
            </div>
    <?php
}

function script(){
    ?>
        <script src="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/
jquery.min.js" type="text/javascript"></script>
<script src="js/jquery.nivo.slider.js" type="text/javascript">
</script>
    <?php
}

function slider($imagenes){
    ?>
<div class="slider-wrapper">
    <div id="slider" class="nivoSlider" style="height: 350px;">
    <?php
    $i = 0;
        foreach ($imagenes as $imagen){
            ?>
            <div class="nivo-imageLink">
                <img src="<?='Imagenes/'.$imagen?>" title="<?='#caption'.$i?>" alt="<?='foto '.$imagen?>" style="width: 100%; height: 350px; 
                    visibility: hidden; display: inline;" />
            </div> 
    <?php
    $i++;
        }
        ?>
        </div>
<!-- la clase slider-wrapper termina en la siguinte funcion(caption())-->
    <?php
}

function caption($titulos){
    $i = 0;
foreach ($titulos as $cabecera => $pagina){
    ?>
<div id="<?='caption'.$i?>" class="nivo-html-caption">
            <h2><?=$cabecera?></h2>
            <!--<div class="slide-text">
                <div class="inline-slide-text" style="display: block; opacity: 100;">
                      poner aquí dentro si hay texto
                </div>
            </div> -->
            <div class="readmore" style="opacity: 100;">
                <a href="<?=$pagina?>" style="flex: 1 100%;">Sigue leyendo</a>
            </div>
        </div>
<?php
$i++;
}
?>
<!-- este div empieza en la función slider-->
</div>
    <?php
}

function nivoSlider(){
    ?>
    <script type="text/javascript" >
    $(window).load(function(){
      $('#slider').nivoSlider({
	    effect: 'slideInRight',
            slices: 15,
            boxCols: 8,
            boxRows: 4,
            animSpeed: 1000,
            pauseTime: 3000,
            startSlide: 0,
            directionNav: true,
            controlNav: false,
            controlNavThumbs: false,
            pauseOnHover: true,
            manualAdvance: false,
            prevText: '<span class="anterior" > Anterior</span>',
            nextText: '<span class="siguiente" >Siguiente </span>',
            randomStart: false,
	});
    $('#slider1').nivoSlider({
	    effect: 'slideInRight',
            slices: 0,
            boxCols: 8,
            boxRows: 4,
            animSpeed: 1000,
            pauseTime: 3000,
            startSlide: 0,
            directionNav: false,
            controlNav: false,
            controlNavThumbs: false,
            pauseOnHover: true,
            manualAdvance: false,
            prevText: '<span style="padding: 15px;background-color: white; border: 1px solid green; outline: 3px solid white;">Anterior</span>',
            nextText: '<span style="padding: 15px;background-color: white; border: 1px solid green; outline: 3px solid white;">Siguiente</span>',
            randomStart: false,
	});
    });
</script>
<?php
}

function cajas(){
    ?>
    <section class="cajon">
    <div class="caja">
        <img src="Imagenes/tarot-vida-9.jpg" alt="foto caja 1" />
        <div class="contenido">Contenido del enlace 1</div>
        <div class="enlace"><a href="#">Ver</a></div>
    </div>
    <div class="caja">
        <img src="Imagenes/tarot-vida-10.jpg" alt="foto caja 2"/>
        <div class="contenido">Contenido del enlace 2</div>
        <div class="enlace"><a href="#">Ver</a></div>
    </div>
</section>
<?php
}

function formulario(){
    ?>
    <section id="formulario">
        <table>
            <caption><h2>Formulario</h2></caption>
            <form action="formulario.php" method="post">
                <tr>
                    <th><label for="nombre">¿Como te llamas?</label></th>
                </tr>
                <tr>
                    <td><input type="text" name="nombre" id="nombre" maxlength="30" size="25" placeholder="Nombre" 
                           required="required" /></td>    
                </tr>
                <tr>
                    <th><label for="asunto"><pre>¿Quieres incluir un asunto?
(opcional)</pre></label></th>
                </tr>
                <tr>
                    <td><input type="text" name="asunto" id="asunto" maxlength="50" size="25" placeholder="Asunto"/></td>
                </tr>
                <tr>
                    <th><label for="telefono">Teléfono</label></th>
                </tr>
                <tr>
                    <td><input type="tel" name="telefono" id="telefono" required="required"/></td>
                </tr>
                <tr>
                    <td colspan="2" style="text-align: center;"><input type="submit" class="button" value="Enviar"/></td>
                </tr>
            </form>
        </table>
    </section>
<!-- este cierre de div es de la función contenedor, el div class="flex-container"-->
    </div>
<!--este section abre en la función contenedor()-->
</section>
<?php
}

function informacion(){
    ?>
<article id="informacion">
    <p>¿Estás interesado en una consulta?</p><p>Rellena el formulario y me pondré en contacto contigo en la mayor 
        brevedad posible.</p>
</article>
<?php
}

function envioFormulario(){
    if($_POST != FALSE){
    
    $nombre = filter_input(INPUT_POST, 'nombre');
    $asunto = filter_input(INPUT_POST, 'asunto');
    $telefono = filter_input(INPUT_POST, 'telefono');
    $aDireccion = "mfernandavida@gmail.com";
    
    $contenidoEmail = "Nombre cliente: ". $nombre . "\n" .
            "Teléfono cliente: " . $telefono . "\n";
    
    $enviado = mail($aDireccion, $asunto, $contenidoEmail);
}

if(!$enviado){
    echo "<h2>Su mensaje no ha podido ser enviado.</h2>";
    echo "<p><a href='index.php'>Vuelva a intentarlo de nuevo</a></p>";
}else{
    echo "<h2>Su mensaje ha sido enviado correctamente.</h2>";
}
}

function mostrarPaginaTexto($texto){
        echo $texto;
}

function presentacion(){
    ?>
    <div class="presentacion">
        <p>¡Hola! Me llamo <b>Maria</b> y ayudo a otras personas a lograr su bienestar y éxito.</p><p>Realizo 
        la <strong>lectura de cartas en Sevilla</strong> y soy una <strong>vidente natural</strong>.</p><p>Estoy 
        especializada en <strong>limpiezas de auras y limpiezas energéticas</strong> (personas, casas, negocios) 
        además de <strong>echar las cartas: Tarot y la baraja española</strong>. También conocidos como <strong>
        cartomancia</strong>. Con gran incidencia en el <strong>tarot del amor, tarot del trabajo y tarot de 
        la salud.</strong></p><p>Mi don lo heredé de mi madre y lo he ido perfeccionando a lo largo de 25 años 
        de experiencia.</p>
    </div>
    <?php
}

function bienvenida(){
    ?>
    <div ng-app="myApp" ng-controller="myCtrl" class="welcome flex-container">
        <p class="clock" ng-bind="myClock"></p>
        <h3 class="bienvenida" ng-bind="myWelcome"></h3>
    </div>
    <script>
        var app = angular.module("myApp", []);
        app.controller("myCtrl", function($scope, $timeout, $interval){
            $scope.myWelcome = "¿COMO ESTAS?";
            $timeout(function(){
                $scope.myWelcome = "BIENVENIDO";
            }, 3000);
            $timeout(function(){
                $scope.myWelcome = "BIENVENIDA";
            },5000);
            $scope.myClock = new Date().toLocaleTimeString();
            $interval(function(){
                $scope.myClock = new Date().toLocaleTimeString();
            }, 1000);
        });
    </script>
    <?php
}
}