# nftables-gui
Nftables-gui is a graphical interface for nftables[1] written in C using ncurses to facilitate the use of the nft tool.  
Nftables-gui es una interfaz gráfica para nftables[1] escrita en c usando ncurses para facilitar el uso de la herramienta nft.
* For English translated edition go <a href="https://github.com/atErik/nftables-gui/tree/Mod-and-English">here</a>, Or, Under &#91;&lt;&gt;Code&#93; tab, find button showing "master" branch, Change "master" into "Mod-and-English" branch, then you may "Download" english edition or you may submit your (english) code-changes, etc.
* Para la edición traducida al inglés vaya <a href="https://github.com/atErik/nftables-gui/tree/Mod-and-English">aquí</a>, Or, En la pestaña &#91;&lt;&gt;Código&#93;, busque el botón "maestro", Cambie la rama "maestro" en "Mod-and-English", entonces puede "Descargar" edición en inglés o puede enviar sus cambios de código (inglés), etc.

It is part of the end-of-career project, so the status of this software will be followed.  
Forma parte del proyecto de fin de carrera, por lo cual el estado de este software se seguirá.

developing throughout the course 2014/2015 through June. Which doesn't mean it won't follow later.  
desarrollando a lo largo del curso 14/15 hasta junio. Lo cual no quiere decir que no se seguirá después.

To be able to compile it is necessary to have the following requirements :  
Para poder compilar es necesario tener los siguientes requisitos :

The ncurses library (available from your distribution repositories)  
La librería de ncurses (disponible desde los repositorios de tu distribución)

You can install it as follows:  
Puedes instalarla de la siguiente manera:

	apt-get install ncurses-base libncurses5 libncurses5-dev

linux kernel greater than 3.13  
linux kernel superior al 3.13

nftables installed on the system [2]  
nftables instalado en el sistema [2]

Once done, just execute the following commands:  
Una vez hecho, basta con ejecutar los siguentes comandos:

	./configure
	make

This will generate the nftables-gui executable which needs root permissions in order to run.  
Esto generará el ejecutable nftables-gui el cual necesita permisos de root para poder ejecutarse.

As nftables-gui is still in an alpha state, nftables-gui still cannot read the current rules in the system,  
Como nftables-gui esta en aún en un estado alfa, nftables-gui aún no puede leer las reglas actuales en el sistema,

so before starting the main run/execution, nftables-gui clears the current rules  
por lo cual, antes de empezar la ejecución principal, nftables-gui borra las reglas

so that they do not interfere with the proper functioning of the application.  
actuales para que no interfieran en el correcto funcionamiento de la aplicación.

Therefore it is recommended to save the current system rules with the following steps:  
Por lo tanto Se recomienda guardar las reglas actuales del sistema con los siguientes pasos:

	    nft list [table_name] > file.txt
	or, nft list [nombre_tabla] > fichero.txt

And to restore:  
Y para restaurar:

	    nft -f file.txt
	or, nft -f fichero.txt


Documentation (English):<br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/Mod-and-English/Documentation%28English%29/iptables-vs-nftables%5Fnftables-gui%5Fgithub.html">iptables-vs-nftables_nftables-gui_github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/Mod-and-English/Documentation%28English%29/Requirements%20document%20-%20nftables-gui%20-%20github.html">Requirements document - nftables-gui - github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/Mod-and-English/Documentation%28English%29/presentation%5Fnftables-gui%5Fgithub-project.html">presentation_nftables-gui_github-project.html</a><br />
<br />

Original Author's BLOG: http://caballeroalba.cf/wordpress/

Below Links Are Used In Above:  
[1] http://www.netfilter.org/projects/nftables/index.html  
[2] http://wiki.nftables.org/wiki-nftables/index.php/Building_and_installing_nftables_from_sources
