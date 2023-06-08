//
// Created by гиоргий on 16.05.2023.
//

#include "UIManager.h"
#include <iostream>

UIManager::UIManager(sf::RenderWindow &window) : window(window), ie(ImageEditor(window, sep, up_boreder)) {
    ie.LoadImage("dd.png"); //f
}

void UIManager::drawUI() {
    sf::Vector2<unsigned int> window_size = window.getSize();
    sf::FloatRect image_size = ie.imageSprite.getGlobalBounds();
    float req_x = window_size.x - sep - right_boreder;
    float req_y = window_size.y - up_boreder;
    float scale_factor = req_x / image_size.width;
    ie.imageSprite.scale(scale_factor, scale_factor);
    std::cout << scale_factor << ' ' << image_size.width << '\n';
    ie.DrawImg();

}
