# nftables-gui
Nftables-gui es una interfaz gráfica para nftables[1] escrita en c usando ncurses para facilitar el uso de la herramienta nft.  
Nftables-gui is a graphical interface for nftables[1] written in c using ncurses to facilitate the use of the nft tool.
* Para la edición traducida al inglés, vaya <a href="https://github.com/atErik/nftables-gui/tree/Mod-and-English">aquí</a>. En la pestaña &#91;&lt;&gt;Código&#93;, busque el botón "maestro", Cambiar "maestro" a la rama "Mod-and-English", entonces puede "Descargar" edición en inglés o puede enviar sus cambios de código (inglés), etc.
* For English translated edition, go <a href="https://github.com/atErik/nftables-gui/tree/Mod-and-English">here</a>. Under &#91;&lt;&gt;Code&#93; tab, find button showing "master" branch, Change "master" to "Mod-and-English" branch, then you may "Download" english edition or you may submit your (english) code-changes, etc.

Forma parte del proyecto de fin de carrera, por lo cual el estado de este software se seguirá.  
It is part of the end-of-career project, so the status of this software will be followed.

desarrollando a lo largo del curso 14/15 hasta junio. Lo cual no quiere decir que no se seguirá después.  
developing throughout the course 2014/2015 through June. Which doesn't mean it won't follow later.

Para poder compilar es necesario tener los siguientes requisitos :  
To be able to compile it is necessary to have the following requirements :

La librería de ncurses (disponible desde los repositorios de tu distribución)  
The ncurses library (available from your distribution repositories)

Puedes instalarla de la siguiente manera:  
You can install it as follows:

	apt-get install ncurses-base libncurses5 libncurses5-dev

linux kernel superior al 3.13  
linux kernel greater than 3.13

nftables instalado en el sistema [2]  
nftables installed on the system [2]

Una vez hecho, basta con ejecutar los siguentes comandos  
Once done, just execute the following commands

	./configure
	make

Esto generará el ejecutable nftables-gui el cual necesita permisos de root para poder ejecutarse.  
This will generate the nftables-gui executable which needs root permissions in order to run.

Como nftables-gui esta en aún en un estado alfa, nftables-gui aún no puede leer las reglas actuales en el sistema,  
As nftables-gui is still in an alpha state, nftables-gui still cannot read the current rules in the system,

por lo cual, antes de empezar la ejecución principal, nftables-gui borra las reglas  
so before starting the main run/execution, nftables-gui clears the current rules

actuales para que no interfieran en el correcto funcionamiento de la aplicación.  
so that they do not interfere with the proper functioning of the application.

Por lo tanto Se recomienda guardar las reglas actuales del sistema con los siguientes pasos:  
Therefore it is recommended to save the current system rules with the following steps:

	    nft list [nombre_tabla] > fichero.txt
	or, nft list [table_name] > file.txt

Y para restaurar:  
And to restore:

	    nft -f fichero.txt
	or, nft -f file.txt


Documentation(English):<br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/Mod-and-English/Documentation(English)/iptables-vs-nftables_nftables-gui%5Fgithub.html">iptables-vs-nftables_nftables-gui_github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/Mod-and-English/Documentation(English)/Requirements%20document%20-%20nftables-gui%20-%20github.html">Requirements document - nftables-gui - github.html</a><br />
<br />

BLOG: http://caballeroalba.cf/wordpress/

[1] http://www.netfilter.org/projects/nftables/index.html  
[2] http://wiki.nftables.org/wiki-nftables/index.php/Building_and_installing_nftables_from_sources
