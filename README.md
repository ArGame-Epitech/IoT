<a name="readme-top"></a>

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">

<h3 align="center">ARGames - IoT</h3>

  <p align="center">
    Epitech ESP ARGames project
  </p>

[![Quality gate](https://sonarcloud.io/api/project_badges/quality_gate?project=ArGame-Epitech_IoT)](https://sonarcloud.io/summary/new_code?id=ArGame-Epitech_IoT)

</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">A propos du projet</a>
      <ul>
        <li><a href="#built-with">Techo, Frameworks et librairies</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Guide de démarrage</a>
      <ul>
        <li><a href="#prerequisites">Prérequis</a></li>
        <li><a href="#installation">Développement</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## A propos du projet

[![Product Name Screen Shot][product-screenshot]](https://example.com)

There are many great README templates available on GitHub; however, I didn't find one that really suited my needs so I created this enhanced one. I want to create a README template so amazing that it'll be the last one you ever need -- I think this is it.

Here's why:
* Your time should be focused on creating something amazing. A project that solves a problem and helps others
* You shouldn't be doing the same tasks over and over like creating a README from scratch
* You should implement DRY principles to the rest of your life :smile:

Of course, no one template will serve all projects since your needs may be different. So I'll be adding more in the near future. You may also suggest changes by forking this repo and creating a pull request or opening an issue. Thanks to all the people have contributed to expanding this template!

Use the `BLANK_README.md` to get started.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Techo, Frameworks et librairies

Ce projet à été développer a l'aide de ces technologies/frameworks/librairies:

* [![PlatformIO][PlatformIO]][PlatformIO-url]
* [![Github Actions][Github-actions]][Github-actions-url]
* [![Sonarcloud][Sonarcloud]][Sonarcloud-url]
* [![Taskfile][Taskfile]][Taskfile-url]
* [![Esp32][Esp-32]][Esp-32-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Guide de démarrage

Cette section est un guide pour vous aider à démarrer a développer sur le projet.

### Prérequis

Nous utilisons Taskfile pour gérer les tâches de développement. Vous devez donc l'installer sur votre machine.

* Taskfile
    ```sh
    sh -c "$(curl --location https://taskfile.dev/install.sh)" -- -d -b ~/.local/bin
    ```

plus d'info sur la documentation officiel de [Taskfile](https://taskfile.dev/#/installation)

PlatformIO est également requis pour compiler et flasher le code sur la carte ESP32 et également pour unifier l'environnement de développement de tous les développeurs.

- PlatformIO CLI
    ```sh
    curl -fsSL -o get-platformio.py https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py
    python3 get-platformio.py
    ```
vous avez également la possibilité d'installer PlatformIO [directement dans votre IDE](https://platformio.org/platformio-ide) (VSCode, Atom, CLion, etc...)

plus d'info sur la documentation officiel de [PlatformIO](https://docs.platformio.org/en/latest/core/installation.html)

### Développement


Toutes les tâches de développement sont gérées par Taskfile. Vous pouvez voir toutes les tâches disponibles avec la commande suivante:

```sh
task -l
```


<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [x] Add Changelog
- [x] Add back to top links
- [ ] Add Additional Templates w/ Examples
- [ ] Add "components" document to easily copy & paste sections of the readme
- [ ] Multi-language Support
    - [ ] Chinese
    - [ ] Spanish

See the [open issues](https://github.com/othneildrew/Best-README-Template/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Your Name - [@your_twitter](https://twitter.com/your_username) - email@example.com

Project Link: [https://github.com/your_username/repo_name](https://github.com/your_username/repo_name)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/ArGame-Epitech/IoT.svg?style=for-the-badge
[contributors-url]: https://github.com/ArGame-Epitech/IoT/graphs/contributors
[stars-shield]: https://img.shields.io/github/stars/ArGame-Epitech/IoT.svg?style=for-the-badge
[stars-url]: https://github.com/ArGame-Epitech/IoT/stargazers
[issues-shield]: https://img.shields.io/github/issues/ArGame-Epitech/IoT.svg?style=for-the-badge
[issues-url]: https://github.com/ArGame-Epitech/IoT/issues
[license-shield]: https://img.shields.io/github/license/ArGame-Epitech/IoT.svg?style=for-the-badge
[license-url]: https://github.com/ArGame-Epitech/IoT/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com
[PlatformIO]: https://img.shields.io/badge/PlatformIO-000000?style=for-the-badge&logo=platformio&logoColor=white
[PlatformIO-url]: https://platformio.org/
[Github-actions]: https://img.shields.io/badge/GitHub_Actions-2088FF?style=for-the-badge&logo=github-actions&logoColor=white
[Github-actions-url]: https://github.com
[Sonarcloud]: https://img.shields.io/badge/SonarCloud-4E9BCD?style=for-the-badge&logo=sonarcloud&logoColor=white
[Sonarcloud-url]: https://sonarcloud.io/
[Taskfile]: https://img.shields.io/badge/Taskfile-00C4B4?style=for-the-badge&logo=go&logoColor=white
[Taskfile-url]: https://taskfile.dev/#/
[Esp-32]: https://img.shields.io/badge/ESP32-000000?style=for-the-badge&logo=espressif&logoColor=white
[Esp-32-url]: https://www.espressif.com/en/products/socs/esp32
[QA-gate]: https://sonarcloud.io/api/project_badges/quality_gate?project=ArGame-Epitech_IoT
[QA-gate-url]: https://sonarcloud.io/summary/new_code?id=ArGame-Epitech_IoT