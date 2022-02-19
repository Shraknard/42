+++
name = Atelier Pentest - Association Sans Nom - Libre et sécurité à 42
description = Ateliers penetration testing de l'ASN, l'association étudiante de 42 pour tout ce qui touche au Libre et à la sécurité !
date = 2018-03-16
+++

# Atelier Pentest
###### If you don't speak french ask us your questions on slack #asn-secu or [contact us](https://sansnom.org/contact/).

### Quoi qu'est-ce ?
Ces ateliers ont pour but d'initier aux [tests d'intrusion](https://fr.wikipedia.org/wiki/Test_d%27intrusion)). L'iso d'une machine vulnérable vous est donné ainsi que certaines informations la concernant, le but étant de réussir les différents objectifs qui le plus souvent sont [récupérer des flags](https://fr.wikipedia.org/wiki/Capture_du_drapeau) et devenir [root](https://fr.wikipedia.org/wiki/Utilisateur_root) sur la machine.

### Rules
>[0] = "Il est interdit de parler de l'ASN."
>[1] = "J'ai menti, parlez de l'ASN, svp."
>[2] = "Vous pouvez travailler en équipe. (maxi 2 sinon après c'est vraiment cheaté)"
>[3] = "La durée sera fixée à chaque atelier selon la difficulté."
>[4] = "Vous devrez rédiger un [write-up](https://www.kanjian.fr/micro-writeup-ctf-0ctf-2017-quals.html#.WqvX4FPwZBw) *([de préférence sous git-hub](https://gist.github.com/PurpleBooth/109311bb0361f32d87a2))* comprenant une explication courte pour chaque faille exploitée."
>[5] = "Soyez pas bêtes, trichez pas et creusez vous les méninges !"

### Mise en place
#### Prérequis
Vous êtes libre d'utiliser les outils que vous voulez, mais je vais décrire ici comment faire avec Kali et Virtualox.
Si vous êtes sur un mac à 42 vous aurez donc besoin de :
    - [Virtualbox](https://www.virtualbox.org/)(dispo sur le MSC)
    - [Kali 2.0](https://www.kali.org/downloads/) (dispo dans /sgoinfre/goinfre/ISOs/)
    - [L'OS victime](https://fr.wikipedia.org/wiki/Vuln%C3%A9rabilit%C3%A9_(informatique)) (http://pentest02.sansnom.org/ ou là /sgoinfre/goinfre/ISOs/ASN-Pentest/)

#### Installation
- [Installer Kali](http://bidouiller.fr/2015/05/11/tuto-installer-kali-linux-dans-virtualbox-tres-facilement/)
- Installer l'OS : Vous devrez adapter l'OS à l'ISO de l'atelier mais grosso modo c'est pareil.

#### Finitions
Une fois vos deux VM créées, il vous reste à les lier entre elles.
Sur virtualbox, dans la barre mac en haut à gauche -> `Préférences` -> `Network` -> ajout d'un `NATnetwork`.
Ensuite dans les préférences de vos deux VM : `Network` -> `NAT Network` + dans Advanced changer le `deny` en `allow VM`.
**And vooâlaa !** Vous êtes désormais fin prêts à attaquer la VM victime avec votre VM Kali !

#### Tips
* Vous pouvez donner plus de mémoire RAM à vôtre Kali pour qu'il tourne bien (3Go c'est cool).
* Plein de doc disponible autour de la cybersécurité sont présents dans les liens utiles [ici](https://docs.google.com/spreadsheets/d/1TD8KTRXvXwy1yU6s7Nz_JuNh7b7fa7pINZuHOVjtAAg/edit#gid=937533738) et [là](https://docs.google.com/document/d/1mxhnnu3VHE-PxQAhm7U4TjBy2Vo6eceWfSQtp1irarA/edit)
* Un doute sur une commande : **[explainshell](https://explainshell.com/)**
* Si vous avez une question : **slack #asn-secu**
