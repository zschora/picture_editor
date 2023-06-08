//
// Created by гиоргий on 16.05.2023.
//

#ifndef PICTURE_EDITOR_IMAGEEDITOR_H
#define PICTURE_EDITOR_IMAGEEDITOR_H

#include "SFML/Graphics.hpp"
#include <string>

class ImageEditor {
//private:
public:
    sf::Texture imageTexture;
    sf::Sprite imageSprite;
    sf::RenderWindow& window;
    const float xpos;
    const float ypos;

public:
    ImageEditor(sf::RenderWindow &window, float xpos, float ypos);
    bool LoadImage(const std::string &path);
    void DrawImg();

};


#endif //PICTURE_EDITOR_IMAGEEDITOR_H
