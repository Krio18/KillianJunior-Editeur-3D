# 🎨 Editeur 3D - Architecture ECS avec OpenFrameworks

**Équipe E02** | IFT3100A25 - Infographie
**Période**: Septembre - Décembre 2025
**Université Laval**

---

## 📋 Description

Application d'édition et de rendu 3D développée avec openFrameworks, utilisant une architecture Entity-Component-System (ECS) modulaire et performante. Le projet implémente des techniques avancées d'infographie incluant le raytracing, le rendu physiquement réaliste (PBR), la triangulation de Delaunay et divers algorithmes de géométrie computationnelle.

---

## ✨ Fonctionnalités principales

### 🎨 Import/Export & Gestion d'images
- **Import d'images** - Chargement interactif de fichiers images dans la scène
- **Export de séquences** - Exportation d'animations sous forme de séquences d'images
- **Palette de couleurs** - Système de palette personnalisable avec pipette (eyedropper)
- **Formats supportés** - OBJ, PLY, STL pour les modèles 3D

### 🖱️ Outils et Interaction
- **Curseurs dynamiques** - 5+ représentations visuelles selon le contexte (sélection, dessin, transformation)
- **Primitives 2D/3D** - Création de points, lignes, triangles, carrés, rectangles, cercles, cubes, sphères
- **Interface ImGui** - Panneaux interactifs pour contrôler tous les aspects de l'application
- **Graphe de scène** - Organisation hiérarchique des entités avec ajout/suppression/édition d'attributs

### 🧠 Sélection et Transformation
- **Sélection multiple** - Sélection et modification simultanée d'objets
- **Transformations** - Translation, rotation, mise à l'échelle via interface
- **Bounding boxes** - Affichage automatique des boîtes de délimitation
- **Ray casting** - Sélection précise d'objets 3D par raycasting

### 🎥 Caméras et Navigation
- **Caméra interactive** - Contrôles orbit, pan, zoom fluides
- **Multi-caméras** - Support de plusieurs caméras (perspective/orthographique)
- **Viewports multiples** - Affichage simultané avec différentes caméras
- **Focus automatique** - Cadrage optimal sur la sélection

### 🖼️ Textures et Matériaux
- **Texture mapping** - Coordonnées UV pour toutes les primitives
- **Cubemaps** - Skybox et réflexions environnementales
- **Textures procédurales** - Génération de textures algorithmiques
- **Normal/Displacement mapping** - Effets de relief sur les surfaces

### 💡 Illumination et Rendu
- **Modèles classiques** - Lambert, Phong
- **Types de lumières** - Ambiante, directionnelle, ponctuelle, projecteur
- **Matériaux PBR** - Rendu physiquement réaliste avec métallicité et rugosité
- **Presets de matériaux** - Collection de matériaux prédéfinis (métaux, plastiques, etc.)

### 🌟 Raytracing
- **Intersections géométriques** - Calcul pour sphères, triangles, meshes complets
- **Réflexions** - Surfaces miroir et réfléchissantes
- **Réfraction** - Matériaux transparents (verre, eau)
- **Ombres portées** - Calcul d'ombrage par raytracing
- **Optimisations BVH** - Bounding Volume Hierarchy pour performances accrues

### 🔷 Topologie et Géométrie
- **Triangulation de Delaunay** - Génération de maillages à partir de points
- **Diagramme de Voronoï** - Visualisation des cellules de Voronoï
- **Courbes paramétriques** - Courbes de Bézier et Catmull-Rom avec points de contrôle
- **Primitives procédurales** - Génération de géométrie 3D

---

## 🛠️ Technologies

- **OpenFrameworks** - Framework multimédia C++
- **ImGui** - Interface utilisateur immédiate
- **GLM** - Mathématiques graphiques (vecteurs, matrices)
- **C++17** - Langage moderne avec templates et RAII
- **OpenGL/GLSL** - Rendu graphique et shaders

---

## 🚀 Compilation et exécution

### Prérequis
- OpenFrameworks 0.12.0+
- Compilateur C++17 (GCC, Clang, MSVC)
- Make ou IDE compatible

### Configuration

1. Cloner le dépôt dans votre dossier openFrameworks:
```bash
cd OF_ROOT/apps/myApps/
git clone [URL_DU_REPO] IFT3100A25_TP1_E02
```

2. Créer un fichier `.env` à la racine avec le chemin vers openFrameworks:
```bash
OF_ROOT=/path/to/openFrameworks
```

3. Compiler:
```bash
make
make run
```

---

## 📊 Fonctionnalités implémentées

### ✅ Complétées à 100%
- **1. Import/Export & Couleur** - Import images, export séquences, palette
- **2. Outils et Interaction** - Curseurs, primitives, interface
- **3. Sélection et Transformation** - Graphe de scène, sélection multiple, transformations
- **4. 3D et Géométrie** - Bounding boxes, primitives 3D, import modèles
- **5. Caméras et Navigation** - Multi-caméras, navigation, focus
- **6. Texture** - Mapping, cubemaps, textures procédurales
- **7. Illumination classique** - Lambert, Phong, 4 types de lumières
- **8. Topologie** - Delaunay, courbes, relief mapping
- **9. Lancer de rayon** - Intersections, réflexions, ombrage
- **10. Illumination moderne (PBR)** - Implémentation avancée du PBR avec métallicité et rugosité

---

## 👥 Équipe E02

- **Killian Cottrelle** - Architecture Logiciel, Architecture ECS, systèmes de base, viewport, scene 3D, Illumination classique, RayTracing, interface, Système d'événements
- **Antonin Leprest** - Configuration, compilation, Import/Export, Transformation
- **Clément Barrier** - Système de caméra, PBR, Courbe paramétrique, Sélection
- **Léandre Cacarie** - Tests, validation
- **Marion Kauffmann** - Texture

<div align="center">
    <table>
        <tr>
            <td align="center">
                <a href="https://github.com/Krio18">
                    <img src="https://github.com/Krio18.png" width="100px;" alt="Krio18"/>
                    <br />
                    <sub><b>Killian Cottrelle</b></sub>
                </a>
            </td>
            <td align="center">
                <a href="https://github.com/Matribuk">
                    <img src="https://github.com/Matribuk.png" width="100px;" alt="Matribuk"/>
                    <br />
                    <sub><b>Antonin Leprest</b></sub>
                </a>
            </td>
            <td align="center">
                <a href="https://github.com/Maskalito">
                    <img src="https://github.com/Maskalito.png" width="100px;" alt="Maskalito"/>
                    <br />
                    <sub><b>Clément Barrier</b></sub>
                </a>
            </td>
            <td align="center">
                <a href="https://github.com/Richonn">
                    <img src="https://github.com/Richonn.png" width="100px;" alt="Richonn"/>
                    <br />
                    <sub><b>Léandre Cacarie</b></sub>
                </a>
            </td>
            <td align="center">
                <a href="https://github.com/THORINKAUFFMANN">
                    <img src="https://github.com/THORINKAUFFMANN.png" width="100px;" alt="THORINKAUFFMANN"/>
                    <br />
                    <sub><b>Marion Kauffmann</b></sub>
                </a>
            </td>
        </tr>
    </table>
</div>

---

## 📄 Licence

Projet académique - IFT3100A25 - Université Laval - 2025
