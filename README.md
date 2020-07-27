# nftables-gui
nftables-gui is a <a href="https://wiki.nftables.org/wiki-nftables/index.php/Main%5FPage">nftables</a>⁽<a href="https://en.wikipedia.org/wiki/Nftables">²</a>˒<a href="https://www.netfilter.org/projects/nftables/index.html">³</a>⁾ configuration app(tool), <i>₁(nftables is an advanced network <a href="https://en.wikipedia.org/wiki/Firewall%5F%28computing%29">firewall</a> subsystem built into Linux kernel, it can do various layers of network data packet filtering, <a href="https://en.wikipedia.org/wiki/Network%5Faddress%5Ftranslation">NAT</a>, connection tracking, queueing, etc, etc. And nftables is successor of <a href="https://wiki.nftables.org/wiki-nftables/index.php/Moving%5Ffrom%5Fiptables%5Fto%5Fnftables">iptables</a>⁽<a href="https://wiki.nftables.org/wiki-nftables/index.php/Legacy%5Fxtables%5Ftools">¹⁶</a>⁾)₁</i>, nftables-gui is written in C, and it uses <a href="https://en.wikipedia.org/wiki/Ncurses">ncurses</a> library to function as a <a href="https://en.wikipedia.org/wiki/Text-based%5Fuser%5Finterface">TUI</a>, a <a href="https://en.wikipedia.org/wiki/Graphical%5Fuser%5Finterface">GUI</a>-Like wrapper, a <a href="https://en.wikipedia.org/wiki/Front-end%5F%28computing%29">front-end</a> for the <a href="https://www.netfilter.org/projects/nftables/manpage.html">nft</a>⁽<a href="https://manpages.debian.org/buster/nftables/nft.8.en.html">¹²</a>˒<a href="https://manpages.ubuntu.com/manpages/focal/en/man8/nft.8.html">¹³</a>˒<a href="https://fedoraproject.org/wiki/Changes/iptables-nft-default">¹⁴</a>⁾ tool. It can be run from <a href="https://en.wikipedia.org/wiki/Command-line%5Finterface">CLI</a> or shell terminals.
* nftables-gui es un <a href="https://wiki.nftables.org/wiki-nftables/index.php/Main%5FPage">nftables</a>⁽<a href="https://es.wikipedia.org/wiki/Nftables">¹⁶</a>˒<a href="https://www.netfilter.org/projects/nftables/index.html">³</a>⁾ aplicación(herramienta) de configuración, <i>₁(nftables es una red avanzada <a href="https://es.wikipedia.org/wiki/Firewall%5F%28computing%29">firewall</a> subsistema construido en el núcleo de Linux, puede hacer varias capas de filtrado de paquetes de datos de red, <a href="https://es.wikipedia.org/wiki/Network%5Faddress%5Ftranslation">NAT</a>, seguimiento de conexiones, colas, etc., etc. Y nftables es sucesor de <a href="https://wiki.nftables.org/wiki-nftables/index.php/Moving%5Ffrom%5Fiptables%5Fto%5Fnftables">iptables</a>)₁</i>, nftables-gui está escrito en C, y utiliza La biblioteca <a href="https://es.wikipedia.org/wiki/Ncurses">ncurses</a> para funcionar como un <a href="https://es.wikipedia.org/wiki/Text-based%5Fuser%5Finterface">TUI</a>, un envoltorio <a href="https://es.wikipedia.org/wiki/Graphical%5Fuser%5Finterface">GUI</a>-Like, un <a href="https://es.wikipedia.org/wiki/Front-end%5F%28computing%29">front-end</a> para la herramienta nft. Se puede ejecutar desde terminales <a href="https://es.wikipedia.org/wiki/Command-line%5Finterface">CLI</a> o shell.
* For English translated edition go <a href="https://github.com/atErik/nftables-gui/tree/nftables-gui_mod-english">here</a>, Or, Under &#91;&lt;&gt;Code&#93; tab, find button showing "master" branch, Change "master" into "**nftables-gui_mod-english**" branch, then you may "Download" or you may submit your (english) code-changes, etc. For Spanish, go <a href="https://github.com/atErik/nftables-gui">here</a>.
* Para la edición traducida al inglés vaya <a href="https://github.com/atErik/nftables-gui/tree/nftables-gui_mod-english">aquí</a>, Or, En la pestaña &#91;&lt;&gt;Código&#93;, busque el botón "maestro", Cambie la rama "maestro" en "nftables-gui_mod-english", entonces puede "Descargar" o puede enviar sus cambios de código (inglés), etc. Para español, vaya a <a href="https://github.com/atErik/nftables-gui">aquí</a>.
<!-- Few unicode characters, to find quickly & use by editor of this page, Or use <sup>...</sup>, <sub>...</sub>, etc:
-- ⁰ ¹ ² ³ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹ ⁺ ⁻ ⁼ ⁽ ⁾ ˒ ⁿ ⁱ ª º ⱽ ʰ ʱ ʲ ʳ ʴ ʵ ʶ ʷ ʸ ˀ ˁ ˠ ˡ ˢ ˣ ˤ ᵃ ᵄ ᵅ ᵆ ᵇ ᵈ ᵉ ᵊ ᵋ ᵌ ᵍ ᵏ ᵐ ᵑ ᵒ ᵓ ᵖ ᵗ ᵘ ᵚ ᵛ --
-- ᴬ ᴭ ᴮ ᴯ ᴰ ᴱ ᴲ ᴳ ᴴ ᴵ ᴶ ᴷ ᴸ ᴹ ᴺ ᴻ ᴼ ᴾ ᴿ ᵀ ᵁ ᵂ ᵸ ᶛ ᶜ ᶝ ᶞ ᶟ ᶠ ᶡ ᶢ ᶣ ᶤ ᶥ ᶦ ᶧ ᶨ ᶩ ᶪ ᶫ ᶬ ᶭ ᶮ ᶯ ᶰ ᶱ ᶲ ᶳ ᶴ ᶵ ᶶ ᶷ ᶸ ᶹ ᶺ ᶻ ᶼ ᶽ ᶾ ᶿ ʾ ʿ ˒ ˓ --
-- ᐞ ᐟ ᐥ ᐦ ᐨ ᐩ ᑉ --
-- ₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉ ₊ ₋ ₌ ₍ ₎ ₓ ₐ ₑ ₒ ₔ ⱼ ᵢ ᵣ ᵤ ᵥ ₒ ₓ -- 
<b class="b">•</b> 
-->

<div>It is part of the end-of-career project, so the status of this software will be followed.<dl>
 <dd>Forma parte del proyecto de fin de carrera, por lo cual el estado de este software se seguirá.</dd></dl>
</div>

<div>developing throughout the course 2014/2015 through June. Which doesn't mean it won't follow later.<dl>
 <dd>desarrollando a lo largo del curso 14/15 hasta junio. Lo cual no quiere decir que no se seguirá después.</dd></dl>
</div>

<div>To be able to compile it is necessary to have the following requirements :<dl>
 <dd>Para poder compilar es necesario tener los siguientes requisitos :</dd></dl>
</div>

<div>The ncurses library (available from your distribution repositories)<dl>
 <dd>La librería de ncurses (disponible desde los repositorios de tu distribución)</dd>
 <dd>You can install ncurses as follows:<dl>
  <dd>Puedes instalarla de la siguiente manera:</dd></dl>
 </dd><dd>
  <pre><code>apt-get install ncurses-base libncurses5 libncurses5-dev</code></pre>
 </dd></dl>
</div>

<div>linux kernel greater than 3.13<dl>
 <dd>linux kernel superior al 3.13</dd>
 <dd>find out your linux kernel verison number with below commands:<br />
 averiguar su número de verison kernel linux con los siguientes comandos:<dl><dd> 
<pre><code>uname –r
hostnamectl
cat /proc/version
dmesg | grep Linux</code></pre></dd></dl>
 </dd></dl>
</div>

<div>nftables installed on the system. More info <a href="https://wiki.nftables.org/wiki-nftables/index.php/Building%5Fand%5Finstalling%5Fnftables%5Ffrom%5Fsources">here</a>⁽ ⁾<dl>
 <dd>nftables instalado en el sistema, (Si no está instalado, consulte los enlaces anteriores para instalar nftables).</dd>
 <dd>find out if nftables is installed or not:<br />
 averiguar si nftables está instalado o no:<dl><dd>
  <pre><code>nft -v</code></pre></dd>
  <dd>( if output shows version number, then it is install, or else follow instruction in above linked page )<br />
  ( si la salida muestra el número de versión, entonces se instala, o de lo contrario seguir las instrucciones en la página vinculada por encima )
  </dd></dl>
 </dd></dl>
</div>

<div>when you have completed above steps, then go inside the source-code folder of nftables-gui, and execute following commands:<dl>
 <dd>cuando haya completado los pasos anteriores, vaya dentro de la carpeta source-code de nftables-gui y ejecute los siguientes comandos:</dd></dl>
 <pre><code>./configure
make</code></pre>
</div>

<div>This will generate the nftables-gui executable which needs root permissions in order to run.<dl>
 <dd>Esto generará el ejecutable nftables-gui el cual necesita permisos de root para poder ejecutarse.</dd></dl>
</div>

<div>As nftables-gui is still in an alpha state, nftables-gui still cannot read the current rules in the system,<dl>
 <dd>Como nftables-gui esta en aún en un estado alfa, nftables-gui aún no puede leer las reglas actuales en el sistema,</dd></dl>
</div>

<div>so before starting the main run/execution, nftables-gui clears the current rules<dl>
 <dd>por lo cual, antes de empezar la ejecución principal, nftables-gui borra las reglas</dd></dl>
</div>

<div>so that they do not interfere with the proper functioning of the application.<dl>
 <dd>actuales para que no interfieran en el correcto funcionamiento de la aplicación.</dd></dl>
</div>

<div>Therefore it is recommended to save the current system rules with the following steps:<dl>
 <dd>Por lo tanto Se recomienda guardar las reglas actuales del sistema con los siguientes pasos:</dd></dl>
<pre><code>    nft list [table_name] > file.txt
or, nft list [nombre_tabla] > fichero.txt</code></pre>
</div>

<div>And to restore:<dl>
<dd>Y para restaurar:</dd></dl>
<pre><code>    nft -f file.txt
or, nft -f fichero.txt</code></pre>
</div>

TUI/CLI (GUI-Like):<br />
<div width="100%"><nobr><img src="Documentation%28English%29/presentation%5Fnftables-gui%5Fgithub-project%5Ffiles/prsnt%5F19-26%5F1.png" /></nobr></div>

Documentation (English):<br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/firewalls%20and%20nftables%20-%20study%20-%20nftables-gui%20-%20github.html">firewalls and nftables - study - nftables-gui - github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/presentation%5Fnftables-gui%5Fgithub-project.html">presentation_nftables-gui_github-project.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/Requirements%20document%20-%20nftables-gui%20-%20github.html">Requirements document - nftables-gui - github.html</a><br />
<b>•</b> <a href="https://htmlpreview.github.io/?https://github.com/atErik/nftables-gui/blob/nftables-gui%5Fmod-english/Documentation%28English%29/iptables-vs-nftables%5Fnftables-gui%5Fgithub.html">iptables-vs-nftables_nftables-gui_github.html</a><br />
<br />

Original Author's BLOG: http://caballeroalba.cf/wordpress/
