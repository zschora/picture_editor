//
// Created by гиоргий on 16.05.2023.
//

#include "ImageEditor.h"


bool ImageEditor::LoadImage(const std::string& path) {
    if (imageTexture.loadFromFile(path)){
        imageSprite.setTexture(imageTexture);
        imageSprite.setPosition(200, 20);

        return true;
    }
    return false;
}

void ImageEditor::DrawImg() {
    window.draw(imageSprite);

}

ImageEditor::ImageEditor(sf::RenderWindow &window, float xpos, float ypos) : window(window), xpos(xpos), ypos(ypos){}
