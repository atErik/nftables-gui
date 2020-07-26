# nftables-gui
nftables-gui is a <a href="https://en.wikipedia.org/wiki/Nftables">nftables</a>[<a href="https://www.netfilter.org/projects/nftables/index.html">1</a>] configuration app(tool), ₁(nftables is an advanced network <a href="https://en.wikipedia.org/wiki/Firewall%5F%28computing%29">firewall</a> subsystem built into Linux kernel, it can do various layers of network data packet filtering, <a href="https://en.wikipedia.org/wiki/Network%5Faddress%5Ftranslation">NAT</a>, connection tracking, queueing, etc, etc. And nftables is successor of iptables)₁, nftables-gui is written in C, and it uses <a href="https://en.wikipedia.org/wiki/Ncurses">ncurses</a> library, to function as a <a href="https://en.wikipedia.org/wiki/Text-based%5Fuser%5Finterface">TUI</a>, a <a href="https://en.wikipedia.org/wiki/Graphical%5Fuser%5Finterface">GUI</a>-Like wrapper, a <a href="https://en.wikipedia.org/wiki/Front-end%5F%28computing%29">front-end</a> for the <a href="https://manpages.debian.org/buster/nftables/nft.8.en.html">nft</a> tool. It can be run from <a href="https://en.wikipedia.org/wiki/Command-line%5Finterface">CLI</a> or shell terminals.  
* nftables-gui es un <a href="https://es.wikipedia.org/wiki/Nftables">nftables</a>[<a href="https://www.netfilter.org/projects/nftables/index.html">1</a>] aplicación(herramienta) de configuración, ₁(nftables es una red avanzada <a href="https://es.wikipedia.org/wiki/Firewall%5F%28computing%29">firewall</a> subsistema construido en el núcleo de Linux, puede hacer varias capas de filtrado de paquetes de datos de red, <a href="https://es.wikipedia.org/wiki/Network%5Faddress%5Ftranslation">NAT</a>, seguimiento de conexiones, colas, etc., etc. Y nftables es sucesor de iptables)₁, nftables-gui está escrito en C, y utiliza La biblioteca <a href="https://es.wikipedia.org/wiki/Ncurses">ncurses</a>, para funcionar como un <a href="https://es.wikipedia.org/wiki/Text-based%5Fuser%5Finterface">TUI</a>, un envoltorio <a href="https://en.wikipedia.org/wiki/Graphical%5Fuser%5Finterface">GUI</a>-Like, un <a href="https://es.wikipedia.org/wiki/Front-end%5F%28computing%29">front-end</a> para la herramienta nft. Se puede ejecutar desde terminales CLI o shell.
* For English translated edition go <a href="https://github.com/atErik/nftables-gui/tree/nftables-gui_mod-english">here</a>, Or, Under &#91;&lt;&gt;Code&#93; tab, find button showing "master" branch, Change "master" into "**nftables-gui_mod-english**" branch, then you may "Download" or you may submit your (english) code-changes, etc. For Spanish, go <a href="https://github.com/atErik/nftables-gui">here</a>.
* Para la edición traducida al inglés vaya <a href="https://github.com/atErik/nftables-gui/tree/nftables-gui_mod-english">aquí</a>, Or, En la pestaña &#91;&lt;&gt;Código&#93;, busque el botón "maestro", Cambie la rama "maestro" en "nftables-gui_mod-english", entonces puede "Descargar" o puede enviar sus cambios de código (inglés), etc. Para español, vaya a <a href="https://github.com/atErik/nftables-gui">aquí</a>.

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

nftables installed on the system [<a href="https://wiki.nftables.org/wiki-nftables/index.php/Building_and_installing_nftables_from_sources">2</a>]  
nftables instalado en el sistema [<a href="https://wiki.nftables.org/wiki-nftables/index.php/Building_and_installing_nftables_from_sources">2</a>]

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

TUI/CLI (GUI-Like):<br />
<div width="100%"><nobr><img src="Documentation%28English%29/presentation%5Fnftables-gui%5Fgithub-project%5Ffiles/prsnt%5F19-26%5F1.png" /></nobr></div>

Documentation (English):<br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/firewalls%20and%20nftables%20-%20study%20-%20nftables-gui%20-%20github.html">firewalls and nftables - study - nftables-gui - github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/presentation%5Fnftables-gui%5Fgithub-project.html">presentation_nftables-gui_github-project.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/Requirements%20document%20-%20nftables-gui%20-%20github.html">Requirements document - nftables-gui - github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/iptables-vs-nftables%5Fnftables-gui%5Fgithub.html">iptables-vs-nftables_nftables-gui_github.html</a><br />
<br />

Original Author's BLOG: http://caballeroalba.cf/wordpress/
