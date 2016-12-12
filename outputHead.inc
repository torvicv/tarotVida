<?php

class outputHead{
function title($title){
    ?>
<title><?=$title?></title>
<?php
}

function charset(){
    ?>
<meta charset="UTF-8"/>
<?php
}

function description($description){
    ?>
<meta name="description" content="<?=$description?>"/>
<?php
}

function author(){
    ?>
<meta name="author" content="Victor Cabral Vida"/>
<?php
}

function palabrasClave($palabrasClave){
    ?>
<meta name="keywords" content="<?=$palabrasClave?>"/>
<?php
}

function pages_css(){
    ?>
<link rel="stylesheet" href="themes/default/default.css" 
type="text/css" media="screen" />
<link rel="stylesheet" href="themes/light/light.css" type="text/css" 
media="screen" />
<link rel="stylesheet" href="themes/dark/dark.css" type="text/css" 
media="screen" />
<link rel="stylesheet" href="themes/bar/bar.css" type="text/css" 
media="screen" />

<link rel="stylesheet" href="css/nivo-slider.css" type="text/css" 
media="screen" />
<link rel="stylesheet" href="css/diseno.css" type="text/css"/>
<?php
}
function favicon(){
    ?>
        <link rel="shortcut icon" href="Imagenes/favicon.ico" type="image/x-icon"/>
<?php
}

function viewport(){
    ?>
        <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    <?php
}
function prefix(){
    ?>
        <script src="prefixfree.min.js" type="text/javascript"></script>
        <?php
}

function angular(){
    ?>
        <script src="http://ajax.googleapis.com/ajax/libs/angularjs/1.4.8/angular.min.js"></script>
    <?php
}
}